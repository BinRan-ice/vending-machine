#include "machine.h"
#pragma warning(disable:4996)
#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
using namespace std;
Machine::Machine()		//�Զ����������캯��Ĭ�ϳ�ʼ�����ͺţ�״̬�����ڵ�
{
	number = 202000;
	condition = " ";
	place[0] = "�豸���ڵأ����� ����";
	place[1] = "�豸���ڵأ����� ����";
	place[2] = "�豸���ڵأ����� ����";
	place[3] = "�豸���ڵأ����� ����";
	place[4] = "�豸���ڵأ����� ��«��";
}

bool Machine::produce()
{

	int i = 0;
	int value = 0;
	srand((size_t)time(NULL));
	FILE* fp = fopen("D:/�ۻ�����Ϣ.txt", "w");		//����һ���ļ�ָ��ָ��D���е��ļ�
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
			condition = "�豸���ԣ�����";
		}
		else
		{
			condition = "�豸���ԣ�����";
		}
		i = rand() % 5;
		memset(p, 0, sizeof(p));		//��ָ��p��ָ����ڴ����
		sprintf(p, "%s:%d\t %s\t %s\n", "�豸�ͺ�", number, condition.c_str(), place[i].c_str());	//���Զ�����������Ϣ������p��ָ����ڴ��ַ
		fputs(p, fp);		//��p�е���Ϣ�����ļ�ָ��
	}
	delete[] p;
	fclose(fp);
}

string Machine::getRandLine(const string& fileName)
{
	ifstream inf(fileName.c_str());		//���ļ��е���Ϣת��Ϊchar*���͵��ַ���
	string lineData;
	int i = 1;
	string tmpLine;
	srand((unsigned int)time(NULL));
	while (getline(inf, tmpLine))		//��ȡ�ļ���ĳһ���Զ�����������Ϣ
	{
		if (rand() % i == 0)
			lineData = tmpLine;
		++i;
	}
	inf.close();
	return lineData;
}

void Machine::gettime()		//��ȡϵͳ��ǰʱ��
{
	time_t t = time(0);
	char tmp[64];
	strftime(tmp, sizeof(tmp), "��ǰ����Ϊ��%Y/%m/%d %X %A", localtime(&t));
	puts(tmp);
}

