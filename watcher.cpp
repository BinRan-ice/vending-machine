#include "watcher.h"
#include "watcher.h"
#include"property.h"
#include"VIP.h"
#include"coin.h"
#include <iostream>
#include <string>
using namespace std;
void watcher::menu()
{
	coin c1("һԪ");
	coin c5("��Ԫ");
	note n5("��Ԫ");
	note n10("ʮԪ");
	note n20("��ʮԪ");
	Biscuit arryB[] = {
		Biscuit("2019.12.3","����","������",3.0),
		Biscuit("2019.10.23","����","С����",4.5) };
	Snack arryS[] = {
		Snack("2019.9.6","���","����",4.2),
		Snack("2019.8.17","��Ƭ","�Ϻü�",3.0),
		Snack("2019.9.7","������","��ʦ��",5.0) };
	Drink arryD[] = {
	Drink("2019.12.6","����","��Ȫˮ","����ɽ",5.5),
	Drink("2019.3.8","����","������","�����",3.0),
	Drink("2019.4.8","��","��ˮ","����",4.5) };
	cout << "�X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[\n";
	cout << "�U    ����Ա ���------                      �U\n";
	cout << "�U    ����������������֣�   " << "                �U\n";
	cout << "�U    1.�鿴���       " << "                      �U\n";
	cout << "�U    2.�������" << "                             �U\n";
	cout << "�U    3.�鿴�ֽ�" << "                             �U\n";
	cout << "�U    4.�����ֽ� " << "                            �U\n";
	cout << "�U    5.����ά�� " << "                            �U\n";
	cout << "�U    6.�˳�����Աϵͳ " << "                      �U\n";
	cout << "�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n";
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
		cout << "����������������\n";
		cin >> b;
		arryB[0].addb_1(b);
		cout << "С��������������\n";
		cin >> b;
		arryB[1].addb_2(b);
		cout << "�������������\n";
		cin >> b;
		arryS[0].adds_1(b);
		cout << "��Ƭ����������\n";
		cin >> b;
		arryS[1].adds_2(b);
		cout << "����������������\n";
		cin >> b;
		arryS[2].adds_3(b);
		cout << "��Ȫˮ����������\n";
		cin >> b;
		arryD[0].addd_1(b);
		cout << "����������������\n";
		cin >> b;
		arryD[1].addd_2(b);
		cout << "��ˮ����������\n";
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
		cout << "����һԪӲ�ҵ�����\n";
		cin >> b;
		c1.c1_add(b);
		cout << "������ԪӲ�ҵ�����\n";
		cin >> b;
		c5.c5_add(b);
		cout << "������Ԫֽ�ҵ�����\n";
		cin >> b;
		n5.n5_add(b);
		cout << "����ʮԪֽ�ҵ�����\n";
		cin >> b;
		n10.n10_add(b);
		cout << "���Ӷ�ʮԪֽ�ҵ�����\n";
		cin >> b;
		n20.n20_add(b);
		this->menu();
	}
	if (a == 5)
	{
		cout << "����ά�޳ɹ�" << endl;
		this->menu();
	}
	if (a == 6)
	{
		VIP v;
		v.Judge();
	}
}

