#include "Class.h"
#include"property.h"
#include"drink.h"
#include"VIP.h"
#include"coin.h"
#include<iostream>
#include<string>
#include <stdlib.h>
using namespace std;
void pay::pay_balance()//显示付款后账户余额
{
	account -= (0.9 * y);
	if (account < 0)
	{
		cout << "您的账户余额不足欠费" << -account << "元" << "请及时充值\n";
		this->store();
	}
	cout << "╔═══════════════════════════════════════════╗\n";
	cout << "║ 支付成功" << "                                  ║\n";
	cout << "║ 您的账户余额为：" << account << "元" << "                    ║\n";
	cout << "║                                           ║\n";
	cout << "║                                           ║\n";
	cout << "║                                           ║\n";
	cout << "║                                           ║\n";
	cout << "╚═══════════════════════════════════════════╝\n";
	this->cont_V();
}
double pay::balance()//显示当前账户余额
{
	pay temp;
	cout << "您的账户余额为" << temp.account << "元" << endl;
	this->cont_V();
	return 0;
}
double pay::store()//向账户中充值
{
	int i;
	cout << "请输入您想存入的金额" << endl;
	double c;
	cin >> c;
	account += c;
	cout << "╔═══════════════════════════════════════════╗\n";
	cout << "║                                           ║\n";
	cout << "║   请选择充值方式" << "                          ║\n";
	cout << "║   1:微信充值  2:支付宝充值" << "                ║\n";
	cout << "║    " << "                                       ║\n";
	cout << "║                                           ║\n";
	cout << "╚═══════════════════════════════════════════╝\n";
	cin >> i;
	if (i == 1)
	{
		cout << "请扫描屏幕二维码" << endl;
		this->QR_code();
		cout << "二维码将在十秒后消失" << endl;
		this->sleep(10);
		system("cls");//clear all the contents in the operator screeen
		system("color 07");//change the color of the background when the QRcode is dismissed
		cout << "充值成功，您的账户余额为：" << account << "元" << endl;
		this->cont_V();
	}
	else
		if (i == 2)
		{
			cout << "请扫描屏幕二维码" << endl;
			this->QR_code();
			system("cls");//clear all the contents in the operator screeen
			system("color 07");//change the color of the background when the QRcode is dismissed
			cout << "充值成功，您的账户余额为：" << account << "元" << endl;
			this->cont_V();
		}
	return account;
}

int pay::Tourist_choose_0()
{
	int t;
	cout << "尊敬的游客您好\n" << "请选择您想进行的操作------1.购买商品    2.退出\n";
	cin >> t;
	if (t == 1)
	{
		this->choose_1_T();
	}
	else if (t == 2)
	{
		return 0;
	}
	else
	{
		cout << "您输入的编号不存在，请确定后重新输入" << endl;
		this->Tourist_choose_0();
	}
	return 0;
}
int pay::VIP_choose_0()
{
	int t;
	cout << "╔═══════════════════════════════════════════╗\n";
	cout << "║    请选择您想进行的操作------             ║\n";
	cout << "║    1.购买商品   " << "                          ║\n";
	cout << "║    2.兑现       " << "                          ║\n";
	cout << "║    3.充值" << "                                 ║\n";
	cout << "║    4.查询余额" << "                             ║\n";
	cout << "║    5.退出 " << "                                ║\n";
	cout << "╚═══════════════════════════════════════════╝\n";
	cin >> t;
	if (t == 1)
	{
		this->choose_1_V();
	}
	else if (t == 2)
	{
		this->cash();
	}
	else if (t == 3)
	{
		this->store();
	}
	else if (t == 4)
	{
		this->balance();
	}
	else if (t == 5)
	{
		VIP o;
		o.Judge();
	}
	else {
		cout << "您输入的编号不存在，请确定后重新输入" << endl;
		this->VIP_choose_0();
	}
	return 0;
}
void pay::choose_1_T()//选择购买的商品种类
{
	Biscuit arryB[] = {
		Biscuit("2019.12.3","饼干","奥利奥",3.0),
		Biscuit("2019.10.23","饼干","小王子",4.5)
	};
	Snack arryS[] = {
		Snack("2019.9.6","面包","桃李",4.2),
		Snack("2019.8.17","薯片","上好佳",3.0),
		Snack("2019.9.7","方便面","康师傅",5.0)
	};
	Drink arryD[] = {
		Drink("2019.12.6","常温","矿泉水","百岁山",5.5),
		Drink("2019.3.8","常温","茶饮料","冰红茶",3.0),
		Drink("2019.4.8","凉","汽水","可乐",4.5)
	};
	int a, b, c, d;
	cout << "╔═══════════════════════════════════════════╗\n";
	cout << "║    请选择您想购买的商品：                 ║\n";
	cout << "║    1.饼干    " << "                             ║\n";
	cout << "║    2.零食         " << "                        ║\n";
	cout << "║    3.饮料(普通)" << "                           ║\n";
	cout << "║    4.热饮" << "                                 ║\n";
	cout << "║                                           ║\n";
	cout << "╚═══════════════════════════════════════════╝\n";

	cin >> a;
	if (a == 1)
	{
		cout << "╔═══════════════════════════════════════════╗\n";
		cout << "║    请选择您想购买的饼干：                 ║\n";
		cout << "║    1.奥利奥--3元    " << "                      ║\n";
		cout << "║    2.小王子--4.5元             " << "           ║\n";
		cout << "║    " << "                                       ║\n";
		cout << "║                                           ║\n";
		cout << "║                                           ║\n";
		cout << "╚═══════════════════════════════════════════╝\n";
		cin >> c;
		if (c == 1)
		{
			cout << "该商品生产日期为";
			arryB[0].checkdate();
			cout << "\n请输入您要购买的数量\n";
			cin >> b;
			arryB[0].buyb_1_T(b);
			y += (b * 3.0);
		}
		else if (c == 2)
		{
			cout << "该商品生产日期为\n";
			arryB[1].checkdate();
			cout << "请输入您要购买的数量\n";
			cin >> b;
			arryB[1].buyb_2_T(b);
			y += (b * 4.5);
		}
	}
	else
		if (a == 2)
		{
			cout << "╔═══════════════════════════════════════════╗\n";
			cout << "║    请选择您想购买的零食：                 ║\n";
			cout << "║    1.面包（桃李）--4.2元    " << "              ║\n";
			cout << "║    2.薯片（上好佳）--3.0元             " << "   ║\n";
			cout << "║    3.方便面（康师傅）--5.0" << "                ║\n";
			cout << "║                                           ║\n";
			cout << "║                                           ║\n";
			cout << "╚═══════════════════════════════════════════╝\n";
			cin >> c;
			if (c == 1)
			{
				cout << "该商品生产日期为\n";
				arryS[0].checkdate();
				cout << "请输入您要购买的数量\n";
				cin >> b;
				arryS[0].buys_1_T(b);
				y += (b * 4.2);
			}
			else
				if (c == 2)
				{
					cout << "该商品生产日期为\n";
					arryS[1].checkdate();
					cout << "请输入您要购买的数量\n";
					cin >> b;
					arryS[1].buys_2_T(b);
					y += (b * 3.0);
				}
				else
					if (c == 3)
					{
						cout << "该商品生产日期为\n";
						arryS[2].checkdate();
						cout << "请输入您要购买的数量\n";
						cin >> b;
						arryS[2].buys_3_T(b);
						y += (b * 5.0);
					}
		}
		else
			if (a == 3)
			{
				cout << "╔═══════════════════════════════════════════╗\n";
				cout << "║    请选择您想购买的饮料：                 ║\n";
				cout << "║    1.百岁山--8.5元    " << "                    ║\n";
				cout << "║    2.冰红茶--3.0元             " << "           ║\n";
				cout << "║    3.可乐--6.0" << "                            ║\n";
				cout << "║                                           ║\n";
				cout << "║                                           ║\n";
				cout << "╚═══════════════════════════════════════════╝\n";
				cin >> c;
				if (c == 1)
				{
					cout << "该商品生产日期为\n";
					arryD[0].checkdate();
					cout << "是否查看更多信息；1.是    2.否\n";
					cin >> b;
					if (b == 1)
					{
						arryD[0].checktemp();
					}
					cout << "请输入您要购买的数量\n";
					cin >> b;
					arryD[0].buyd_1_T(b);
					y += (b * 8.5);
				}
				else
					if (c == 2)
					{
						cout << "该商品生产日期为\n";
						arryD[1].checkdate();
						cout << "是否查看更多信息；1.是    2.否\n";
						cin >> b;
						if (b == 1)
						{
							arryD[1].checktemp();
						}
						cout << "请输入您要购买的数量\n";
						cin >> b;
						arryD[1].buyd_2_T(b);
						y += (b * 3.0);
					}
					else
						if (c == 3)
						{
							cout << "该商品生产日期为\n";
							arryD[2].checkdate();
							cout << "是否查看更多信息；1.是    2.否\n";
							cin >> b;
							if (b == 1)
							{
								arryD[2].checktemp();
							}
							cout << "请输入您要购买的数量\n";
							cin >> b;
							arryD[2].buyd_3_T(b);
							y += (b * 6.0);
						}
			}
			else
				if (a == 4)
				{
					int v, k, d;
					coffee arry_c[3] = { coffee("咖啡","小杯",6.0),coffee("咖啡","中杯",8.0),coffee("咖啡","大杯",10.0) };
					milktea arry_m[3] = { milktea("奶茶","小杯",10.0),milktea("奶茶","中杯",12.0),milktea("奶茶","大杯",14.0) };
					cout << "请选择您想购买的热饮：1.咖啡    2.奶茶\n";
					cin >> v;
					if (v == 1)
					{
						cout << "╔═══════════════════════════════════════════╗\n";
						cout << "║    请选择您想想要的规格：                 ║\n";
						cout << "║    1.小杯（6元）    " << "                      ║\n";
						cout << "║    2.中杯（8元）         " << "                 ║\n";
						cout << "║    3.大杯（10元）" << "                         ║\n";
						cout << "║                                           ║\n";
						cout << "║                                           ║\n";
						cout << "╚═══════════════════════════════════════════╝\n";
						cin >> k;
						if (k == 1) {
							cout << "请选择您想要的浓度(1-5)\n";
							cin >> d;
							arry_c[0].setdensity(d);
							cout << "请选择您想要的糖度(1-5)\n";
							cin >> d;
							arry_c[0].setsuger(d);
							arry_c[0].display();
							cout << "请输入您要购买的数量\n";
							cin >> b;
							y += (b * 6.0);
						}
						else
							if (k == 2)
							{
								cout << "请选择您想要的浓度(1-5)\n";
								cin >> d;
								arry_c[1].setdensity(d);
								cout << "请选择您想要的糖度(1-5)\n";
								cin >> d;
								arry_c[1].setsuger(d);
								arry_c[1].display();
								cout << "请输入您要购买的数量\n";
								cin >> b;
								y += (b * 8.0);
							}
							else
								if (k == 3)
								{
									cout << "请选择您想要的浓度(1-5)\n";
									cin >> d;
									arry_c[2].setdensity(d);
									cout << "请选择您想要的糖度(1-5)\n";
									cin >> d;
									arry_c[2].setsuger(d);
									arry_c[2].display();
									cout << "请输入您要购买的数量\n";
									cin >> b;
									y += (b * 10.0);
								}
					}
					else
						if (v == 2)
						{
							cout << "╔═══════════════════════════════════════════╗\n";
							cout << "║    请选择您想想要的规格：                 ║\n";
							cout << "║    1.小杯（10元）    " << "                      ║\n";
							cout << "║    2.中杯（12元）         " << "                 ║\n";
							cout << "║    3.大杯（14元）" << "                         ║\n";
							cout << "║                                           ║\n";
							cout << "║                                           ║\n";
							cout << "╚═══════════════════════════════════════════╝\n";
							cin >> k;
							if (k == 1) {
								cout << "请选择您想要的浓度(1-5)\n";
								cin >> d;
								arry_m[0].setdensity(d);
								arry_m[0].display();
								cout << "请输入您要购买的数量\n";
								cin >> b;
								y += (b * 10.0);
							}
							else
								if (k == 2)
								{
									cout << "请选择您想要的浓度(1-5)\n";
									cin >> d;
									arry_m[1].setdensity(d);
									arry_m[1].display();
									cout << "请输入您要购买的数量\n";
									cin >> b;
									y += (b * 12.0);
								}
								else
									if (k == 3)
									{
										cout << "请选择您想要的浓度(1-5)\n";
										cin >> d;
										arry_m[2].setdensity(d);
										arry_m[2].display();
										cout << "请输入您要购买的数量\n";
										cin >> b;
										y += (b * 14.0);
									}
						}
				}
				else
				{
					cout << "您输入的编号无效，请确认后再重新输入" << endl;
					this->choose_1_T();
				}
	cout << "是否继续购买其他商品？\n" << "1.是    2.否" << endl;
	cin >> a;
	if (a == 1)
	{
		this->choose_1_T();
	}
	else
		if (a == 2)
		{
			this->choose_2_T();
		}

}
void pay::choose_1_V()//选择购买的商品种类
{
	Biscuit arryB[] = {
		Biscuit("2019.12.3","饼干","奥利奥",3.0),
		Biscuit("2019.10.23","饼干","小王子",4.5)
	};
	Snack arryS[] = {
		Snack("2019.9.6","面包","桃李",4.2),
		Snack("2019.8.17","薯片","上好佳",3.0),
		Snack("2019.9.7","方便面","康师傅",5.0)
	};
	Drink arryD[] = {
		Drink("2019.12.6","常温","矿泉水","百岁山",5.5),
		Drink("2019.3.8","常温","茶饮料","冰红茶",3.0),
		Drink("2019.4.8","凉","汽水","可乐",4.5)
	};
	int a, b, c, d;
	cout << "╔═══════════════════════════════════════════╗\n";
	cout << "║    请选择您想购买的商品：                 ║\n";
	cout << "║    1.饼干    " << "                             ║\n";
	cout << "║    2.零食         " << "                        ║\n";
	cout << "║    3.饮料(普通)" << "                           ║\n";
	cout << "║    4.热饮" << "                                 ║\n";
	cout << "║                                           ║\n";
	cout << "╚═══════════════════════════════════════════╝\n";

	cin >> a;
	if (a == 1)
	{
		cout << "╔═══════════════════════════════════════════╗\n";
		cout << "║    请选择您想购买的饼干：                 ║\n";
		cout << "║    1.奥利奥--3元    " << "                      ║\n";
		cout << "║    2.小王子--4.5元             " << "           ║\n";
		cout << "║    " << "                                       ║\n";
		cout << "║                                           ║\n";
		cout << "║                                           ║\n";
		cout << "╚═══════════════════════════════════════════╝\n";
		cin >> c;
		if (c == 1)
		{
			cout << "该商品生产日期为";
			arryB[0].checkdate();
			cout << "\n请输入您要购买的数量\n";
			cin >> b;
			arryB[0].buyb_1_V(b);
			y += (b * 3.0);
		}
		else if (c == 2)
		{
			cout << "该商品生产日期为\n";
			arryB[1].checkdate();
			cout << "请输入您要购买的数量\n";
			cin >> b;
			arryB[1].buyb_2_V(b);
			y += (b * 4.5);
		}
	}
	else
		if (a == 2)
		{
			cout << "╔═══════════════════════════════════════════╗\n";
			cout << "║    请选择您想购买的零食：                 ║\n";
			cout << "║    1.面包（桃李）--4.2元    " << "              ║\n";
			cout << "║    2.薯片（上好佳）--3.0元             " << "   ║\n";
			cout << "║    3.方便面（康师傅）--5.0" << "                ║\n";
			cout << "║                                           ║\n";
			cout << "║                                           ║\n";
			cout << "╚═══════════════════════════════════════════╝\n";
			cin >> c;
			if (c == 1)
			{
				cout << "该商品生产日期为\n";
				arryS[0].checkdate();
				cout << "请输入您要购买的数量\n";
				cin >> b;
				arryS[0].buys_1_V(b);
				y += (b * 4.2);
			}
			else
				if (c == 2)
				{
					cout << "该商品生产日期为\n";
					arryS[1].checkdate();
					cout << "请输入您要购买的数量\n";
					cin >> b;
					arryS[1].buys_2_V(b);
					y += (b * 3.0);
				}
				else
					if (c == 3)
					{
						cout << "该商品生产日期为\n";
						arryS[2].checkdate();
						cout << "请输入您要购买的数量\n";
						cin >> b;
						arryS[2].buys_3_V(b);
						y += (b * 5.0);
					}
		}
		else
			if (a == 3)
			{
				cout << "╔═══════════════════════════════════════════╗\n";
				cout << "║    请选择您想购买的饮料：                 ║\n";
				cout << "║    1.百岁山--8.5元    " << "                    ║\n";
				cout << "║    2.冰红茶--3.0元             " << "           ║\n";
				cout << "║    3.可乐--6.0" << "                            ║\n";
				cout << "║                                           ║\n";
				cout << "║                                           ║\n";
				cout << "╚═══════════════════════════════════════════╝\n";
				cin >> c;
				if (c == 1)
				{
					cout << "该商品生产日期为\n";
					arryD[0].checkdate();
					cout << "是否查看更多信息；1.是    2.否\n";
					cin >> b;
					if (b == 1)
					{
						arryD[0].checktemp();
					}
					cout << "请输入您要购买的数量\n";
					cin >> b;
					arryD[0].buyd_1_V(b);
					y += (b * 8.5);
				}
				else
					if (c == 2)
					{
						cout << "该商品生产日期为\n";
						arryS[1].checkdate();
						cout << "是否查看更多信息；1.是    2.否\n";
						cin >> b;
						if (b == 1)
						{
							arryD[0].checktemp();
						}
						cout << "请输入您要购买的数量\n";
						cin >> b;
						arryD[1].buyd_2_V(b);
						y += (b * 3.0);
					}
					else
						if (c == 3)
						{
							cout << "该商品生产日期为\n";
							arryS[2].checkdate();
							cout << "是否查看更多信息；1.是    2.否\n";
							cin >> b;
							if (b == 1)
							{
								arryD[0].checktemp();
							}
							cout << "请输入您要购买的数量\n";
							cin >> b;
							arryD[2].buyd_3_V(b);
							y += (b * 6.0);
						}
			}
			else
				if (a == 4)
				{
					int v, k, d;
					coffee arry_c[3] = { coffee("咖啡","小杯",6.0),coffee("咖啡","中杯",8.0),coffee("咖啡","大杯",10.0) };
					milktea arry_m[3] = { milktea("奶茶","小杯",10.0),milktea("奶茶","中杯",12.0),milktea("奶茶","大杯",14.0) };
					cout << "请选择您想购买的热饮：1.咖啡    2.奶茶\n";
					cin >> v;
					if (v == 1)
					{
						cout << "╔═══════════════════════════════════════════╗\n";
						cout << "║    请选择您想想要的规格：                 ║\n";
						cout << "║    1.小杯（6元）    " << "                      ║\n";
						cout << "║    2.中杯（8元）         " << "                 ║\n";
						cout << "║    3.大杯（10元）" << "                         ║\n";
						cout << "║                                           ║\n";
						cout << "║                                           ║\n";
						cout << "╚═══════════════════════════════════════════╝\n";
						cin >> k;
						if (k == 1) {
							cout << "请选择您想要的浓度（1-5）\n";
							cin >> d;
							arry_c[0].setdensity(d);
							cout << "请选择您想要的糖度（1-5）\n";
							cin >> d;
							arry_c[0].setsuger(d);
							arry_c[0].display();
							cout << "请输入您要购买的数量\n";
							cin >> b;
							y += (b * 6.0);
						}
						else
							if (k == 2)
							{
								cout << "请选择您想要的浓度（1-5）\n";
								cin >> d;
								arry_c[1].setdensity(d);
								cout << "请选择您想要的糖度（1-5）\n";
								cin >> d;
								arry_c[1].setsuger(d);
								arry_c[1].display();
								cout << "请输入您要购买的数量\n";
								cin >> b;
								y += (b * 8.0);
							}
							else
								if (k == 3)
								{
									cout << "请选择您想要的浓度（1-5）\n";
									cin >> d;
									arry_c[2].setdensity(d);
									cout << "请选择您想要的糖度（1-5）\n";
									cin >> d;
									arry_c[2].setsuger(d);
									arry_c[2].display();
									cout << "请输入您要购买的数量\n";
									cin >> b;
									y += (b * 10.0);
								}
					}
					else
						if (v == 2)
						{
							cout << "╔═══════════════════════════════════════════╗\n";
							cout << "║    请选择您想想要的规格：                 ║\n";
							cout << "║    1.小杯（10元）    " << "                     ║\n";
							cout << "║    2.中杯（12元）         " << "                ║\n";
							cout << "║    3.大杯（14元）" << "                         ║\n";
							cout << "║                                           ║\n";
							cout << "║                                           ║\n";
							cout << "╚═══════════════════════════════════════════╝\n";
							cin >> k;
							if (k == 1) {
								cout << "请选择您想要的浓度（1-5）\n";
								cin >> d;
								arry_m[0].setdensity(d);
								arry_m[0].display();
								cout << "请输入您要购买的数量\n";
								cin >> b;
								y += (b * 10.0);
							}
							else
								if (k == 2)
								{
									cout << "请选择您想要的浓度（1-5）\n";
									cin >> d;
									arry_m[1].setdensity(d);
									arry_m[1].display();
									cout << "请输入您要购买的数量\n";
									cin >> b;
									y += (b * 12.0);
								}
								else
									if (k == 3)
									{
										cout << "请选择您想要的浓度（1-5）\n";
										cin >> d;
										arry_m[2].setdensity(d);
										arry_m[2].display();
										cout << "请输入您要购买的数量\n";
										cin >> b;
										y += (b * 14.0);
									}
						}
				}
				else
				{
					cout << "您输入的编号无效，请确认后再重新输入" << endl;
					this->choose_1_V();
				}
	cout << "是否继续购买其他商品？\n" << "1.是    2.否" << endl;
	cin >> a;
	if (a == 1)
	{
		this->choose_1_V();
	}
	else
		if (a == 2)
		{
			this->choose_2_V();
		}
}
void pay::choose_2_T()
{
	int x;
	cout << "╔═══════════════════════════════════════════╗\n";
	cout << "║    请选择支付方式" << "                         ║\n";
	cout << "║    1:微信支付  2:支付宝支付" << "               ║\n";
	cout << "║                                           ║\n";
	cout << "║    " << "                                       ║\n";
	cout << "║                                           ║\n";
	cout << "║                                           ║\n";
	cout << "╚═══════════════════════════════════════════╝\n";
	cin >> x;
	if (x == 1)
	{
		this->wechat_T();
	}
	else
		if (x == 2)
		{
			pay x;
			this->Alipay_T(x);
		}
		else
		{
			cout << "您输入的编号不存在，请确定后重新输入" << endl;
			this->choose_2_T();
		}
}

void pay::choose_2_V()//选择付款方式
{
	int x;
	cout << "╔═══════════════════════════════════════════╗\n";
	cout << "║    请选择支付方式" << "                         ║\n";
	cout << "║    1:微信支付  2:支付宝支付 3:账户余额支付" << "║\n";
	cout << "║                                           ║\n";
	cout << "║    " << "                                       ║\n";
	cout << "║                                           ║\n";
	cout << "║                                           ║\n";
	cout << "╚═══════════════════════════════════════════╝\n";
	cin >> x;
	if (x == 1)
	{
		this->wechat_V();
	}
	else
		if (x == 2)
		{
			pay x;
			this->Alipay_V(x);
		}
		else
			if (x == 3)
			{
				this->pay_balance();
			}
			else
			{
				cout << "您输入的编号不存在，请确定后重新输入" << endl;
				this->choose_2_V();
			}
}
double pay::cash()//兑换零钱
{
	coin c("coin");
	note n("note");
	double change = 0.0;
	cout << "您当前的账户余额为:" << account << "元" << endl;
	cout << "若要进行此操作，将会产生一分钱的操作费，是否继续进行？\n" << "1 同意      2 不同意" << endl;
	int i, m, a;
	cin >> i;
	if (i == 1)
	{
		cout << "请选择您想兑换的现金种类；1.纸币(可兑换5元，10元或20元)    2.硬币（可兑换一元和五角）" << endl;
		cin >> m;
		if (m == 1)
		{
			cout << "请输入所需的五元数目\n";
			cin >> a;
			n.n5_use(a);
			account -= a * 5;
			cout << "请输入所需的十元数目\n";
			cin >> a;
			n.n10_use(a);
			account -= a * 10;
			cout << "请输入所需的二十元数目\n";
			cin >> a;
			n.n20_use(a);
			account -= a * 20;
			cout << "请扫描屏幕二维码" << endl;
			this->QR_code();
			cout << "二维码将在十秒后消失" << endl;
			this->sleep(10);
			account -= (a + 0.1);
			if (account > 0)
			{
				system("cls");//clear all the contents in the operator screeen
				system("color 07");//change the color of the background when the QRcode is dismissed
				cout << "您的账户余额为" << account << "元\n" << "请及时取走您的零钱" << endl;
				this->cont_V();
			}
			if (account <= 0)
			{
				system("cls");//clear all the contents in the operator screeen
				system("color 07");//change the color of the background when the QRcode is dismissed
				cout << "您的账户余额不足，请及时充值" << endl;
				this->store();
			}
		}
		else
			if (m == 2)
			{

				cout << "请输入您所需的一元硬币数目\n";
				cin >> a;
				c.c1_use(a);
				account -= a * 1;
				cout << "请输入您所需的五角硬币数目\n";
				cin >> a;
				c.c5_use(a);
				account -= a * 0.5;
				cout << "请扫描屏幕二维码" << endl;
				this->QR_code();
				cout << "二维码将在十秒后消失" << endl;
				this->sleep(10);
				account -= (a + 0.1);
				if (account > 0)
				{
					system("cls");//clear all the contents in the operator screeen
					system("color 07");//change the color of the background when the QRcode is dismissed
					cout << "您的账户余额为" << account << "元\n" << "请及时取走您的零钱" << endl;
					this->cont_V();
				}
				if (account <= 0)
				{
					system("cls");//clear all the contents in the operator screeen
					system("color 07");//change the color of the background when the QRcode is dismissed
					cout << "您的账户余额不足，请及时充值" << endl;
					this->store();
				}
			}
	}
	else if (i == 2)
		this->cont_V();
	return 0;
}
int pay::cont_V()
{
	int i;
	cout << "请选择您接下来的操作：1继续操作        2退出" << endl;
	cin >> i;
	if (i == 1)
	{
		this->VIP_choose_0();
	}
	else
		if (i == 2)
		{
			VIP v;
			v.Judge();
		}
		else {
			cout << "请确定有效操作数字" << endl;
			this->cont_V();
		}
	return 0;
}
int pay::cont_T()
{
	int i;
	cout << "请选择您接下来的操作：1继续操作        2退出" << endl;
	cin >> i;
	if (i == 1)
	{
		this->Tourist_choose_0();
	}
	else
		if (i == 2)
		{
			VIP v;
			v.Judge();
		}
		else {
			cout << "请确定有效操作数字" << endl;
			this->cont_T();
		}
	return 0;
}
void pay::sleep(int s)
{
	time_t tmp1 = time(NULL);
	time_t tmp2 = tmp1;
	while (difftime(tmp2, tmp1) < s)//延时s秒后结束 
	{
		tmp2 = time(NULL);
	}
}
void pay::wechat_T()
{
	pay x;
	cout << "请扫描屏幕二维码" << endl;
	x.QR_code();
	cout << "二维码将在十秒后消失" << endl;
	x.sleep(10);
	system("cls");//clear all the contents in the operator screeen
	system("color 07");//change the color of the background when the QRcode is dismissed
	cout << "支付成功!" << endl;
	this->cont_T();
}
void pay::Alipay_T(pay x)
{
	cout << "请扫描屏幕二维码" << endl;
	x.QR_code();
	cout << "二维码将在十秒后消失" << endl;
	x.sleep(10);
	system("cls");//clear all the contents in the operator screeen
	system("color 07");//change the color of the background when the QRcode is dismissed
	cout << "支付成功!" << endl;
	this->cont_T();
}
void pay::wechat_V()
{
	pay x;
	cout << "请扫描屏幕二维码" << endl;
	x.QR_code();
	cout << "二维码将在十秒后消失" << endl;
	x.sleep(10);
	system("cls");//clear all the contents in the operator screeen
	system("color 07");//change the color of the background when the QRcode is dismissed
	double b;
	b = y - (0.9 * y);
	account += b;
	cout << "╔═══════════════════════════════════════════╗\n";
	cout << "║    支付成功，返还余额为：" << b << "元" << "已存入余额" << "  ║\n";
	cout << "║    您的账户余额为：" << account << "元" << "                 ║\n";
	cout << "║                                           ║\n";
	cout << "║                                           ║\n";
	cout << "║                                           ║\n";
	cout << "║                                           ║\n";
	cout << "╚═══════════════════════════════════════════╝\n";

	this->cont_V();
}
void pay::Alipay_V(pay x)
{
	cout << "请扫描屏幕二维码" << endl;
	x.QR_code();
	cout << "二维码将在十秒后消失" << endl;
	x.sleep(10);
	system("cls");//clear all the contents in the operator screeen
	system("color 07");//change the color of the background when the QRcode is dismissed
	double b;
	b = y - (0.9 * y);
	account += b;
	cout << "╔═══════════════════════════════════════════╗\n";
	cout << "║    支付成功，返还余额为：" << b << "元" << "已存入余额" << "    ║\n";
	cout << "║    您的账户余额为：" << account << "元" << "                    ║\n";
	cout << "║                                           ║\n";
	cout << "║                                           ║\n";
	cout << "║                                           ║\n";
	cout << "║                                           ║\n";
	cout << "╚═══════════════════════════════════════════╝\n";
	x.cont_V();
}
int pay::QR_code()//present the QRcode that the customer will use to pay 
{
	int i, j;
	unsigned int iterator, currentIndex = 0;
	unsigned int block = 32936;
	unsigned int blank = 8224;
	unsigned int prompt[6] = { 3151145161, 3268389065, 3300255427,2899246774, 3131304898, 10 };
	unsigned int matrix[14] = { 4266392596,2423165115,1965415331,2931913991,4205830151,16502099,
	2689950357,138955494,2133885007,3824925904,1133361902,232156718,2769356099,3488548096 };

	system("color f0");

	printf("%s", prompt);
	for (i = 0; i < 441;)
	{
		iterator = 1 << 31;
		for (j = 0; j < 32; j++)
		{
			i++;
			if ((matrix[currentIndex] & iterator) == iterator)
			{
				printf("%s", &block);
			}
			else
			{
				printf("%s", &blank);
			}
			if (i % 21 == 0)
			{
				printf("\n");
			}
			iterator >>= 1;
			if (i == 441)
			{
				break;
			}
		}
		currentIndex++;
	}
	getchar();
	return getchar();
}
