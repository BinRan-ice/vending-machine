#include"watcher.h"
#include"watcher.h"
#include"property.h"
#include"VIP.h"
#include"coin.h"
#include <iostream>
#include <string>
using namespace std;
void watcher::menu()
{
	coin c1("一元");
	coin c5("五元");
	note n5("五元");
	note n10("十元");
	note n20("二十元");
	Biscuit arryB[] = {
		Biscuit("2019.12.3","饼干","奥利奥",3.0),
		Biscuit("2019.10.23","饼干","小王子",4.5) };
	Snack arryS[] = {
		Snack("2019.9.6","面包","桃李",4.2),
		Snack("2019.8.17","薯片","上好佳",3.0),
		Snack("2019.9.7","方便面","康师傅",5.0) };
	Drink arryD[] = {
	Drink("2019.12.6","常温","矿泉水","百岁山",5.5),
	Drink("2019.3.8","常温","茶饮料","冰红茶",3.0),
	Drink("2019.4.8","凉","汽水","可乐",4.5) };
	cout << "╔═══════════════════════════════════════════╗\n";
	cout << "║    管理员 你好------                      ║\n";
	cout << "║    请根据需求输入数字：   " << "                ║\n";
	cout << "║    1.查看库存       " << "                      ║\n";
	cout << "║    2.增补库存" << "                             ║\n";
	cout << "║    3.查看现金" << "                             ║\n";
	cout << "║    4.增补现金 " << "                            ║\n";
	cout << "║    5.机器维修 " << "                            ║\n";
	cout << "║    6.退出管理员系统 " << "                      ║\n";
	cout << "╚═══════════════════════════════════════════╝\n";
	int a, b;
	cin >> a;
	if (a == 1)
	{
		arryB[0].displayb_1();
		arryB[1].displayb_2();
		arryS[0].displays_1();
		arryS[1].displays_2();
		arryS[2].displays_3();
		arryD[0].displayd_1();
		arryD[1].displayd_2();
		arryD[2].displayd_3();
		this->menu();
	}
	if (a == 2)
	{
		cout << "奥利奥增加数量：\n";
		cin >> b;
		arryB[0].addb_1(b);
		cout << "小王子增加数量：\n";
		cin >> b;
		arryB[1].addb_2(b);
		cout << "面包增加数量：\n";
		cin >> b;
		arryS[0].adds_1(b);
		cout << "薯片增加数量：\n";
		cin >> b;
		arryS[1].adds_2(b);
		cout << "方便面增加数量：\n";
		cin >> b;
		arryS[2].adds_3(b);
		cout << "矿泉水增加数量：\n";
		cin >> b;
		arryD[0].addd_1(b);
		cout << "茶饮料增加数量：\n";
		cin >> b;
		arryD[1].addd_2(b);
		cout << "汽水增加数量：\n";
		cin >> b;
		arryD[2].addd_3(b);
		this->menu();
	}
	if (a == 3)
	{
		c1.c1_display();
		c5.c5_display();
		n5.n5_display();
		n10.n10_display();
		n20.n20_display();
		this->menu();
	}
	if (a == 4)
	{
		cout << "增加一元硬币的数量\n";
		cin >> b;
		c1.c1_add(b);
		cout << "增加五元硬币的数量\n";
		cin >> b;
		c5.c5_add(b);
		cout << "增加五元纸币的数量\n";
		cin >> b;
		n5.n5_add(b);
		cout << "增加十元纸币的数量\n";
		cin >> b;
		n10.n10_add(b);
		cout << "增加二十元纸币的数量\n";
		cin >> b;
		n20.n20_add(b);
		this->menu();
	}
	if (a == 5)
	{
		cout << "机器维修成功" << endl;
		this->menu();
	}
	if (a == 6)
	{
		VIP v;
		v.Judge();
	}
}

