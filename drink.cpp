#include "drink.h"
#include<iostream>
#include<string>
using namespace std;
h_drink::h_drink(string name, string type, double price)
{
	this->name = name;
	this->type = type;
	this->price = price;
}
void coffee::select()
{
	int x;
	cout << "请选择您想要的规格：1.小杯    2.中杯    3.大杯\n";
	cin >> x;
	if (x == 1)
	{
		this->price = 6.0;
	}
	else
		if (x == 2)
		{
			this->price = 8.0;
		}
		else
			if (x == 3)
			{
				this->price = 10.0;
			}

}
int coffee::setdensity(int a)
{
	this->density = a;
	return this->density;
}
void coffee::display()
{
	cout << "请确认您的热饮信息：" << endl << "名称：" << this->name << endl << "规格：" << this->type << endl << "浓度：" << this->density << endl << "糖量：" << this->suger << endl << "价格：" << this->price << endl;
}

int coffee::setsuger(int x)
{
	this->suger = x;
	return this->suger;
}
void milktea::select()
{
	int x;
	cout << "请选择您想要的规格：1.小杯    2.中杯    3.大杯\n";
	cin >> x;
	if (x == 1)
	{
		this->price = 10.0;
	}
	else
		if (x == 2)
		{
			this->price = 12.0;
		}
		else
			if (x == 3)
			{
				this->price = 14.0;
			}

}
int milktea::setdensity(int a)
{
	this->density = a;
	return this->density;
}
void milktea::display()
{
	cout << "请确认您的热饮信息：" << endl << "名称：" << this->name << endl << "规格：" << this->type << endl << "浓度：" << this->density << endl << "价格：" << this->price << endl;
}

