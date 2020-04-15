#pragma once
#include<iostream>
#include<string>
#include <time.h> 
#include <stdio.h>
using namespace std;
class pay
{
	static double y;
	static double account;
public:
	pay() {};
	void sleep(int s);
	void pay_balance();
	double balance();
	double store();
	int VIP_choose_0();
	int Tourist_choose_0();
	void choose_1_V();
	void choose_1_T();
	void choose_2_V();
	void choose_2_T();
	double cash();
	void wechat_T();
	void Alipay_T(pay x);
	void wechat_V();
	void Alipay_V(pay x);
	int QR_code();
	int cont_V();
	int cont_T();
};

