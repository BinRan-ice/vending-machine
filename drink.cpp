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
	cout << "��ѡ������Ҫ�Ĺ��1.С��    2.�б�    3.��\n";
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
	cout << "��ȷ������������Ϣ��" << endl << "���ƣ�" << this->name << endl << "���" << this->type << endl << "Ũ�ȣ�" << this->density << endl << "������" << this->suger << endl << "�۸�" << this->price << endl;
}

int coffee::setsuger(int x)
{
	this->suger = x;
	return this->suger;
}
void milktea::select()
{
	int x;
	cout << "��ѡ������Ҫ�Ĺ��1.С��    2.�б�    3.��\n";
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
	cout << "��ȷ������������Ϣ��" << endl << "���ƣ�" << this->name << endl << "���" << this->type << endl << "Ũ�ȣ�" << this->density << endl << "�۸�" << this->price << endl;
}

