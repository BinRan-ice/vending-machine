#include"property.h"
#include"Class.h"
#include<iostream>
#include<string>
using namespace std;
int Property::b1_number = 10;
int Property::b2_number = 10;
int Property::s1_number = 10;
int Property::s2_number = 10;
int Property::s3_number = 10;
int Property::d1_number = 10;
int Property::d2_number = 10;
int Property::d3_number = 10;
void Biscuit::buyb_2_T(int& a)
{
	pay temp;
	if (b2_number < a)
	{
		cout << "小王子库存不足,请重新购买" << endl;
		temp.choose_1_T();
	}
	else {
		b2_number -= a;
	}
}
void Biscuit::buyb_2_V(int& a)
{
	pay temp;
	if (b2_number < a)
	{
		cout << "小王子库存不足,请重新购买" << endl;
		temp.choose_1_V();
	}
	else {
		b2_number -= a;
	}
}
void Biscuit::buyb_1_T(int& a)
{
	pay temp;
	if (b1_number < a)
	{
		cout << "奥利奥库存不足,请重新购买" << endl;
		temp.choose_1_T();
	}
	else {
		b1_number -= a;
	}
}
void Biscuit::buyb_1_V(int& a)
{
	pay temp;
	if (b1_number < a)
	{
		cout << "奥利奥库存不足,请重新购买" << endl;
		temp.choose_1_V();
	}
	else {
		b1_number -= a;
	}
}
void Biscuit::addb_1(int& a)
{
	b1_number += a;
}
void Biscuit::addb_2(int& a)
{
	b2_number += a;
}
void Biscuit::checkdate()
{
	cout << this->Date << endl;
}
void Biscuit::displayb_1()
{
	cout << "奥利奥库存还有" << b1_number << "盒\n";
}
void Biscuit::displayb_2()
{
	cout << "小王子库存还有" << b2_number << "盒\n";
}
void Snack::adds_1(int& a)
{
	s1_number += a;
}
void Snack::adds_2(int& a)
{
	s2_number += a;
}
void Snack::adds_3(int& a)
{
	s3_number += a;
}
void Snack::buys_1_T(int& a)
{
	pay temp;
	if (s1_number < a)
	{
		cout << "面包库存不足,请重新购买" << endl;
		temp.choose_1_T();
	}
	else {
		s1_number -= a;
	}
}
void Snack::buys_1_V(int& a)
{
	pay temp;
	if (s1_number < a)
	{
		cout << "面包库存不足,请重新购买" << endl;
		temp.choose_1_V();
	}
	else {
		s1_number -= a;
	}
}
void Snack::buys_2_V(int& a)
{
	pay temp;
	if (s2_number < a)
	{
		cout << "薯片库存不足,请重新购买" << endl;
		temp.choose_1_V();
	}
	else {
		s2_number -= a;
	}
}
void Snack::buys_2_T(int& a)
{
	pay temp;
	if (s2_number < a)
	{
		cout << "薯片库存不足,请重新购买" << endl;
		temp.choose_1_T();
	}
	else {
		s2_number -= a;
	}
}
void Snack::buys_3_T(int& a)
{
	pay temp;
	if (s3_number < a)
	{
		cout << "方便面库存不足,请重新购买" << endl;
		temp.choose_1_T();
	}
	else {
		s3_number -= a;
	}
}
void Snack::buys_3_V(int& a)
{
	pay temp;
	if (s3_number < a)
	{
		cout << "方便面库存不足,请重新购买" << endl;
		temp.choose_1_V();
	}
	else {
		s3_number -= a;
	}
}
void Snack::checkdate()
{
	cout << this->Date;
}
void Snack::displays_1()
{
	cout << "面包库存还有" << s1_number << "盒\n";
}
void Snack::displays_2()
{
	cout << "薯片库存还有" << s2_number << "盒\n";
}
void Snack::displays_3()
{
	cout << "方便面库存还有" << s3_number << "盒\n";
}
void Drink::buyd_1_V(int& a)
{
	pay temp;
	if (d1_number < a)
	{
		cout << "矿泉水库存不足,请重新购买" << endl;
		temp.choose_1_V();
	}
	else {
		d1_number -= a;
	}
}
void Drink::buyd_1_T(int& a)
{
	pay temp;
	if (d1_number < a)
	{
		cout << "矿泉水库存不足,请重新购买" << endl;
		temp.choose_1_T();
	}
	else {
		d1_number -= a;
	}
}
void Drink::buyd_2_T(int& a)
{
	pay temp;
	if (d2_number < a)
	{
		cout << "茶饮料库存不足,请重新购买" << endl;
		temp.choose_1_T();
	}
	else {
		d2_number -= a;
	}
}
void Drink::buyd_2_V(int& a)
{
	pay temp;
	if (d2_number < a)
	{
		cout << "茶饮料库存不足,请重新购买" << endl;
		temp.choose_1_V();
	}
	else {
		d2_number -= a;
	}
}
void Drink::buyd_3_T(int& a)
{
	pay temp;
	if (d3_number < a)
	{
		cout << "汽水库存不足,请重新购买" << endl;
		temp.choose_1_T();
	}
	else {
		d3_number -= a;
	}
}
void Drink::buyd_3_V(int& a)
{
	pay temp;
	if (d3_number < a)
	{
		cout << "汽水库存不足,请重新购买" << endl;
		temp.choose_1_V();
	}
	else {
		d3_number -= a;
	}
}
void Drink::addd_1(int& a)
{
	d1_number += a;
}
void Drink::addd_2(int& a)
{
	d2_number += a;
}
void Drink::addd_3(int& a)
{
	d3_number += a;
}
void Drink::displayd_1()
{
	cout << "矿泉水库存还有" << d1_number << "盒\n";
}
void Drink::displayd_2()
{
	cout << "茶饮料库存还有" << d2_number << "盒\n";
}
void Drink::displayd_3()
{
	cout << "汽水库存还有" << d3_number << "盒\n";
}
void Drink::checkdate()
{
	cout << this->Date;
}
Property::Property(string Date)
{

	this->Date = Date;
}
Biscuit::Biscuit(string Date, string kind, string name, double price) :Property(Date)
{
	this->kind = kind;
	this->name = name;
	this->price = price;
}
Snack::Snack(string Date, string kind, string name, double price) :Property(Date)
{
	this->kind = kind;
	this->name = name;
	this->price = price;
}
Drink::Drink(string Date, string tem, string kind, string name, double price) :Property(Date)
{
	this->tem = tem;
	this->kind = kind;
	this->name = name;
	this->price = price;
}
void Drink::checktemp()
{
	cout << "温度为" << this->tem << endl;
}

