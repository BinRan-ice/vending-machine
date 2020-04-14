#pragma warning(disable:4996)
#include "VIP.h"
#include"Class.h"
#include"watcher.h"
#include<iostream>
#include<string>
#include <fstream>
#include <ctime>
using namespace std;
void VIP::Judge()
{
	string s1;
	VIP v;
	pay c;
	watcher w;
	cout << "╔═══════════════════════════════════════════╗\n";
	cout << "║   会员登录请输入：1" << "                       ║\n";
	cout << "║   会员注册请输入：2" << "                       ║\n";
	cout << "║   游客登陆请输入：3" << "                       ║\n";
	cout << "║   管理员登陆请输入：4" << "                     ║\n";
	cout << "║                                           ║\n";
	cout << "╚═══════════════════════════════════════════╝\n";
	cin >> s1;
	if (s1 == "1")
	{
		cout << "请输入会员信息" << endl;
		cout << "请您输入您的手机号：";
		cin >> v.Tel;
		while (1)
		{
			if (v.Tel.length() == 11)
			{
				cout << "请输入您的密码：";
				cin >> v.Pw;
				break;
			}
			else
			{
				cout << "您输入的手机号不是十一位！！！  请您重新输入您的手机号：";
				cin >> v.Tel;
			}
		}
		v.compare(v);
		c.VIP_choose_0();
	}
	else
		if (s1 == "2")
		{
			cout << "请输入您要注册会员的手机号：";
			cin >> v.Tel;
			while (1)
			{
				if (v.Tel.length() == 11)
				{
					cout << "请输入您的密码：";
					cin >> v.Pw;
					break;
				}
				else
				{
					cout << "您输入的手机号不是十一位！！！  请您重新输入您的手机号：";
					cin >> v.Tel;
				}
			}
			v.Store(v);
			this->Judge();
		}
		else
			if (s1 == "3")
			{
				c.Tourist_choose_0();
			}
			else
				if (s1 == "4")
				{
					w.menu();
				}
}

bool VIP::compare(VIP v)
{
	string b1;
	const string& fileName1 = "D:/会员信息.txt";
	ifstream inf1(fileName1.c_str());
	int count1 = 0;
	while (getline(inf1, b1))
	{
		string* bb1 = &b1;
		char s1[100] = { 0 };
		strcpy(s1, (*bb1).c_str());
		char s2[100] = { 0 };
		strcpy(s2, v.Tel.c_str());
		char* p1 = v.my_strstr(s1, s2);
		while (p1 != NULL)
		{
			count1++;
			p1 += strlen(s2);
			p1 = v.my_strstr(p1, s2);
		}
	}
	string b2;
	const string& fileName2 = "D:/会员信息.txt";
	ifstream inf2(fileName2.c_str());
	int count2 = 0;
	while (getline(inf2, b2))
	{
		string* bb2 = &b2;
		char s3[100] = { 0 };
		strcpy(s3, (*bb2).c_str());
		char s4[100] = { 0 };
		strcpy(s4, v.Pw.c_str());
		char* p2 = v.my_strstr(s3, s4);
		while (p2 != NULL)
		{
			count2++;
			p2 += strlen(s4);
			p2 = v.my_strstr(p2, s4);
		}
	}
	if (count1 > 0)
	{
		if (count2 > 0)
		{
			cout << "恭喜您！！！	登陆成功" << endl;
		}
		else
		{
			cout << "密码错误" << endl;
			this->Judge();
		}
	}
	else
	{
		cout << "对不起！！！		信息库中没有您的信息" << endl;
		this->Judge();
	}
	return 1;
}


char* VIP::my_strstr(char* src, char* dest)
{
	char* fsrc = src;
	char* rsrc = src;
	char* tdest = dest;
	while (*fsrc)
	{
		rsrc = fsrc;
		while (*fsrc == *tdest && *fsrc != 0)
		{
			fsrc++;//遍历源字符串指针
			tdest++;//记录相同字符串首地址
		}
		//回滚
		if (*tdest == 0)
		{
			return rsrc;
		}
		tdest = dest;//目标字符串更新到起始位置
		fsrc = rsrc;
		fsrc++;
	}
	return NULL;
}

bool VIP::Store(VIP v)
{
	int i = 0;
	int value = 0;
	srand((size_t)time(NULL));
	FILE* fp = fopen("D:/会员信息.txt", "a+");
	if (!fp)
	{
		return -1;
	}
	char* message = NULL;
	message = new char[sizeof(VIP) * 1];
	for (int j = 0; j < 1; j++)
	{
		memset(message, 0, sizeof(message));
		sprintf(message, "%s:\t %s%s\t %s%s\n", "会员信息", "手机号码：", v.Tel.c_str(), "密码：", v.Pw.c_str());
		fputs(message, fp);
		cout << "恭喜您！！！		注册成功" << endl;
	}
	delete[] message;
	fclose(fp);
}

