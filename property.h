#pragma once
#include <iostream>
#include <string>
using namespace std;
class Property
{
protected:
	static int b1_number;
	static int b2_number;
	static int s1_number;
	static int s2_number;
	static int s3_number;
	static int d1_number;
	static int d2_number;
	static int d3_number;
	string Date;
	string name;
	string kind;
	double price;
public:
	Property(string);
	virtual void checkdate() = 0;
};
class Biscuit :public Property
{
public:
	Biscuit(string, string, string, double);
	static void buyb_1_T(int& a);
	static void buyb_1_V(int& a);
	static void buyb_2_T(int& a);
	static void buyb_2_V(int& a);
	static void addb_1(int& a);
	static void addb_2(int& a);
	void checkdate();
	void displayb_1();
	void displayb_2();
};
class Snack :public Property
{
public:
	Snack(string, string, string, double);
	static void buys_1_T(int& a);
	static void buys_1_V(int& a);
	static void buys_2_T(int& a);
	static void buys_2_V(int& a);
	static void buys_3_T(int& a);
	static void buys_3_V(int& a);
	static void adds_1(int& a);
	static void adds_2(int& a);
	static void adds_3(int& a);
	void checkdate();
	void displays_1();
	void displays_2();
	void displays_3();
};
class Drink :public Property
{
protected:
	string tem;
public:
	Drink(string, string, string, string, double);
	static void buyd_1_V(int& a);
	static void buyd_1_T(int& a);
	static void buyd_2_V(int& a);
	static void buyd_2_T(int& a);
	static void buyd_3_V(int& a);
	static void buyd_3_T(int& a);
	static void addd_1(int& a);
	static void addd_2(int& a);
	static void addd_3(int& a);
	void checkdate();
	void displayd_1();
	void displayd_2();
	void displayd_3();
	void checktemp();
};


