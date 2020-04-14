#include "machine.h"
#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
using namespace std;
Machine::Machine()		//自动贩卖机构造函数默认初始化：型号，状态，所在地
{
	number = 202000;
	condition = " ";
	place[0] = "设备所在地：辽宁 大连";
	place[1] = "设备所在地：辽宁 沈阳";
	place[2] = "设备所在地：辽宁 朝阳";
	place[3] = "设备所在地：辽宁 辽阳";
	place[4] = "设备所在地：辽宁 葫芦岛";
}

bool Machine::produce()
{

	int i = 0;
	int value = 0;
	srand((size_t)time(NULL));
	FILE* fp = fopen("D:/售货机信息.txt", "w");		//创建一个文件指针指向D盘中的文件
	if (!fp)
	{
		return -1;
	}
	char* p = NULL;
	p = new char[sizeof(Machine) * 10];
	for (int j = 0; j < 10; j++)
	{
		number++;
		value = rand() % 10;
		if (value <= 8)
		{
			condition = "设备属性：正常";
		}
		else
		{
			condition = "设备属性：故障";
		}
		i = rand() % 5;
		memset(p, 0, sizeof(p));		//将指针p所指向的内存清空
		sprintf(p, "%s:%d\t %s\t %s\n", "设备型号", number, condition.c_str(), place[i].c_str());	//将自动贩卖机的信息拷贝到p所指向的内存地址
		fputs(p, fp);		//将p中的信息放入文件指针
	}
	delete[] p;
	fclose(fp);
}

string Machine::getRandLine(const string& fileName)
{
	ifstream inf(fileName.c_str());		//将文件中的信息转化为char*类型的字符串
	string lineData;
	int i = 1;
	string tmpLine;
	srand((unsigned int)time(NULL));
	while (getline(inf, tmpLine))		//获取文件中某一行自动贩卖机的信息
	{
		if (rand() % i == 0)
			lineData = tmpLine;
		++i;
	}
	inf.close();
	return lineData;
}

void Machine::gettime()		//获取系统当前时间
{
	time_t t = time(0);
	char tmp[64];
	strftime(tmp, sizeof(tmp), "当前日期为：%Y/%m/%d %X %A", localtime(&t));
	puts(tmp);
}

