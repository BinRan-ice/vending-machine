#include<iostream>
#include"watcher.h"
#include"Class.h"
#include"VIP.h"
#include"property.h"
#include"coin.h"
#include"drink.h"
#include "machine.h"
#include<string>
using namespace std;
int main()
{
	Machine m;
	m.produce();
	cout << m.getRandLine("D:/售货机信息.txt") << "\t";
	m.gettime();
	VIP v1;
	v1.Judge();
	system("pause");
}
double pay::y = 0.0;
double pay::account = 50.0;
