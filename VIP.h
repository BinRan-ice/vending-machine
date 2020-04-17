#pragma once
#include<iostream>
#include<string>
#pragma warning(disable:4996)
#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
using namespace std;
class VIP
{
public:
	VIP()
	{
		Tel = 12345678901;
		Pw = 123456;
	}
	bool compare(VIP v);
	bool Store(VIP v);
	void Judge();
	char* my_strstr(char* src, char* dest);
private:
	string Tel;
	string Pw;
};

