#pragma once
#pragma warning(disable:4996)
#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
using namespace std;

class Machine
{
public:
	Machine();
	bool produce();
	string getRandLine(const string& fileName);
	void gettime();
private:
	int number;
	string condition;
	string place[5];
};
