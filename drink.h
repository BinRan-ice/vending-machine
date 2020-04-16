#pragma once
#include<iostream>
#include<string>
using namespace std;
class h_drink
{
protected:
	string name;
	string type;
	double price;
	int density;
public:
	h_drink(string, string, double);
	virtual void select() = 0;
	virtual int setdensity(int a) = 0;
	virtual void display() = 0;
};


class coffee :public h_drink
{
private:
	int suger;
public:
	coffee(string name, string type, double price) :h_drink(name, type, price) {}
	int setsuger(int x);
	void display();
	int setdensity(int a);
	void select();
};


class milktea :public h_drink
{
private:
public:
	milktea(string name, string type, double price) :h_drink(name, type, price) {}
	void select();
	int setdensity(int a);
	void display();
};

