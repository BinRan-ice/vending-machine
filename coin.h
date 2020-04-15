#pragma once
#include <iostream>
#include <string>
using namespace std;
class coin
{
private:
	string name;
	static int c1_quantity;
	static int c5_quantity;
public:
	coin(string);
	static int c1_add(int& a);
	static int c5_add(int& a);
	static int c1_use(int& a);
	static int c5_use(int& a);
	static void c1_display();
	static void c5_display();
};


class note
{
private:
	string name;
	static int n5_quantity;
	static int n10_quantity;
	static int n20_quantity;
public:
	note(string);
	static int n5_add(int& a);
	static int n10_add(int& a);
	static int n20_add(int& a);
	static int n5_use(int& a);
	static int n10_use(int& a);
	static int n20_use(int& a);
	static void n5_display();
	static void n10_display();
	static void n20_display();
};

