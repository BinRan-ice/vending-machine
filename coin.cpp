#include "coin.h"
#include"Class.h"
#include <iostream>
#include <string>
using namespace std;
int coin::c1_quantity = 10;
int coin::c5_quantity = 10;
int note::n10_quantity = 10;
int note::n20_quantity = 10;
int note::n5_quantity = 10;
coin::coin(string name)
{
	this->name = name;
}
int coin::c1_add(int& a)
{
	c1_quantity += a;
	return c1_quantity;
}
int coin::c5_add(int& a)
{
	c5_quantity += a;
	return 0;
}
int coin::c1_use(int& a)
{
	pay p;
	if (c1_quantity < a)
	{
		cout << "��治�㣬������ѡ��" << endl;
		p.cash();
	}
	else
	{
		c1_quantity -= a;
	}
	return c1_quantity;
}
int coin::c5_use(int& a)
{
	pay p;
	if (c5_quantity < a)
	{
		cout << "��治�㣬������ѡ��" << endl;
		p.cash();
	}
	else
	{
		c5_quantity -= a;
	}
	return c5_quantity;
}
void coin::c1_display()
{
	cout << "һԪӲ�һ��У�" << c1_quantity << "ö" << endl;
}
void coin::c5_display()
{
	cout << "���Ӳ�һ��У�" << c1_quantity << "ö" << endl;
}

note::note(string name)
{
	this->name = name;
}
int note::n5_add(int& a)
{
	n5_quantity += a;
	return n5_quantity;
}
int note::n10_add(int& a)
{
	n10_quantity += a;
	return n10_quantity;
}
int note::n20_add(int& a)
{
	n20_quantity += a;
	return n20_quantity;
}
int note::n5_use(int& a)
{
	pay p;
	if (n5_quantity < a)
	{
		cout << "��治�㣬������ѡ��" << endl;
		p.cash();
	}
	else
	{
		n5_quantity -= a;
	}
	return n5_quantity;
}
int note::n10_use(int& a)
{
	pay p;
	if (n10_quantity < a)
	{
		cout << "��治�㣬������ѡ��" << endl;
		p.cash();
	}
	else
	{
		n10_quantity -= a;
	}
	return n10_quantity;
}
int note::n20_use(int& a)
{
	pay p;
	if (n20_quantity < a)
	{
		cout << "��治�㣬������ѡ��" << endl;
		p.cash();
	}
	else
	{
		n20_quantity -= a;
	}
	return n20_quantity;
}
void note::n5_display()
{
	cout << "��Ԫֽ�һ��У�" << n5_quantity << "��" << endl;
}
void note::n10_display()
{
	cout << "ʮԪֽ�һ��У�" << n10_quantity << "��" << endl;
}
void note::n20_display()
{
	cout << "��ʮԪֽ�һ��У�" << n20_quantity << "��" << endl;
}

