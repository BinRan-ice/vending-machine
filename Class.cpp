#include "Class.h"
#include"property.h"
#include"drink.h"
#include"VIP.h"
#include"coin.h"
#include<iostream>
#include<string>
#include <stdlib.h>
using namespace std;
void pay::pay_balance()//��ʾ������˻����
{
	account -= (0.9 * y);
	if (account < 0)
	{
		cout << "�����˻�����Ƿ��" << -account << "Ԫ" << "�뼰ʱ��ֵ\n";
		this->store();
	}
	cout << "�X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[\n";
	cout << "�U ֧���ɹ�" << "                                  �U\n";
	cout << "�U �����˻����Ϊ��" << account << "Ԫ" << "                    �U\n";
	cout << "�U                                           �U\n";
	cout << "�U                                           �U\n";
	cout << "�U                                           �U\n";
	cout << "�U                                           �U\n";
	cout << "�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n";
	this->cont_V();
}
double pay::balance()//��ʾ��ǰ�˻����
{
	pay temp;
	cout << "�����˻����Ϊ" << temp.account << "Ԫ" << endl;
	this->cont_V();
	return 0;
}
double pay::store()//���˻��г�ֵ
{
	int i;
	cout << "�������������Ľ��" << endl;
	double c;
	cin >> c;
	account += c;
	cout << "�X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[\n";
	cout << "�U                                           �U\n";
	cout << "�U   ��ѡ���ֵ��ʽ" << "                          �U\n";
	cout << "�U   1:΢�ų�ֵ  2:֧������ֵ" << "                �U\n";
	cout << "�U    " << "                                       �U\n";
	cout << "�U                                           �U\n";
	cout << "�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n";
	cin >> i;
	if (i == 1)
	{
		cout << "��ɨ����Ļ��ά��" << endl;
		this->QR_code();
		cout << "��ά�뽫��ʮ�����ʧ" << endl;
		this->sleep(10);
		system("cls");//clear all the contents in the operator screeen
		system("color 07");//change the color of the background when the QRcode is dismissed
		cout << "��ֵ�ɹ��������˻����Ϊ��" << account << "Ԫ" << endl;
		this->cont_V();
	}
	else
		if (i == 2)
		{
			cout << "��ɨ����Ļ��ά��" << endl;
			this->QR_code();
			system("cls");//clear all the contents in the operator screeen
			system("color 07");//change the color of the background when the QRcode is dismissed
			cout << "��ֵ�ɹ��������˻����Ϊ��" << account << "Ԫ" << endl;
			this->cont_V();
		}
	return account;
}

int pay::Tourist_choose_0()
{
	int t;
	cout << "�𾴵��ο�����\n" << "��ѡ��������еĲ���------1.������Ʒ    2.�˳�\n";
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
		cout << "������ı�Ų����ڣ���ȷ������������" << endl;
		this->Tourist_choose_0();
	}
	return 0;
}
int pay::VIP_choose_0()
{
	int t;
	cout << "�X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[\n";
	cout << "�U    ��ѡ��������еĲ���------             �U\n";
	cout << "�U    1.������Ʒ   " << "                          �U\n";
	cout << "�U    2.����       " << "                          �U\n";
	cout << "�U    3.��ֵ" << "                                 �U\n";
	cout << "�U    4.��ѯ���" << "                             �U\n";
	cout << "�U    5.�˳� " << "                                �U\n";
	cout << "�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n";
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
		cout << "������ı�Ų����ڣ���ȷ������������" << endl;
		this->VIP_choose_0();
	}
	return 0;
}
void pay::choose_1_T()//ѡ�������Ʒ����
{
	Biscuit arryB[] = {
		Biscuit("2019.12.3","����","������",3.0),
		Biscuit("2019.10.23","����","С����",4.5)
	};
	Snack arryS[] = {
		Snack("2019.9.6","���","����",4.2),
		Snack("2019.8.17","��Ƭ","�Ϻü�",3.0),
		Snack("2019.9.7","������","��ʦ��",5.0)
	};
	Drink arryD[] = {
		Drink("2019.12.6","����","��Ȫˮ","����ɽ",5.5),
		Drink("2019.3.8","����","������","�����",3.0),
		Drink("2019.4.8","��","��ˮ","����",4.5)
	};
	int a, b, c, d;
	cout << "�X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[\n";
	cout << "�U    ��ѡ�����빺�����Ʒ��                 �U\n";
	cout << "�U    1.����    " << "                             �U\n";
	cout << "�U    2.��ʳ         " << "                        �U\n";
	cout << "�U    3.����(��ͨ)" << "                           �U\n";
	cout << "�U    4.����" << "                                 �U\n";
	cout << "�U                                           �U\n";
	cout << "�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n";

	cin >> a;
	if (a == 1)
	{
		cout << "�X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[\n";
		cout << "�U    ��ѡ�����빺��ı��ɣ�                 �U\n";
		cout << "�U    1.������--3Ԫ    " << "                      �U\n";
		cout << "�U    2.С����--4.5Ԫ             " << "           �U\n";
		cout << "�U    " << "                                       �U\n";
		cout << "�U                                           �U\n";
		cout << "�U                                           �U\n";
		cout << "�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n";
		cin >> c;
		if (c == 1)
		{
			cout << "����Ʒ��������Ϊ";
			arryB[0].checkdate();
			cout << "\n��������Ҫ���������\n";
			cin >> b;
			arryB[0].buyb_1_T(b);
			y += (b * 3.0);
		}
		else if (c == 2)
		{
			cout << "����Ʒ��������Ϊ\n";
			arryB[1].checkdate();
			cout << "��������Ҫ���������\n";
			cin >> b;
			arryB[1].buyb_2_T(b);
			y += (b * 4.5);
		}
	}
	else
		if (a == 2)
		{
			cout << "�X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[\n";
			cout << "�U    ��ѡ�����빺�����ʳ��                 �U\n";
			cout << "�U    1.��������--4.2Ԫ    " << "              �U\n";
			cout << "�U    2.��Ƭ���Ϻüѣ�--3.0Ԫ             " << "   �U\n";
			cout << "�U    3.�����棨��ʦ����--5.0" << "                �U\n";
			cout << "�U                                           �U\n";
			cout << "�U                                           �U\n";
			cout << "�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n";
			cin >> c;
			if (c == 1)
			{
				cout << "����Ʒ��������Ϊ\n";
				arryS[0].checkdate();
				cout << "��������Ҫ���������\n";
				cin >> b;
				arryS[0].buys_1_T(b);
				y += (b * 4.2);
			}
			else
				if (c == 2)
				{
					cout << "����Ʒ��������Ϊ\n";
					arryS[1].checkdate();
					cout << "��������Ҫ���������\n";
					cin >> b;
					arryS[1].buys_2_T(b);
					y += (b * 3.0);
				}
				else
					if (c == 3)
					{
						cout << "����Ʒ��������Ϊ\n";
						arryS[2].checkdate();
						cout << "��������Ҫ���������\n";
						cin >> b;
						arryS[2].buys_3_T(b);
						y += (b * 5.0);
					}
		}
		else
			if (a == 3)
			{
				cout << "�X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[\n";
				cout << "�U    ��ѡ�����빺������ϣ�                 �U\n";
				cout << "�U    1.����ɽ--8.5Ԫ    " << "                    �U\n";
				cout << "�U    2.�����--3.0Ԫ             " << "           �U\n";
				cout << "�U    3.����--6.0" << "                            �U\n";
				cout << "�U                                           �U\n";
				cout << "�U                                           �U\n";
				cout << "�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n";
				cin >> c;
				if (c == 1)
				{
					cout << "����Ʒ��������Ϊ\n";
					arryD[0].checkdate();
					cout << "�Ƿ�鿴������Ϣ��1.��    2.��\n";
					cin >> b;
					if (b == 1)
					{
						arryD[0].checktemp();
					}
					cout << "��������Ҫ���������\n";
					cin >> b;
					arryD[0].buyd_1_T(b);
					y += (b * 8.5);
				}
				else
					if (c == 2)
					{
						cout << "����Ʒ��������Ϊ\n";
						arryD[1].checkdate();
						cout << "�Ƿ�鿴������Ϣ��1.��    2.��\n";
						cin >> b;
						if (b == 1)
						{
							arryD[1].checktemp();
						}
						cout << "��������Ҫ���������\n";
						cin >> b;
						arryD[1].buyd_2_T(b);
						y += (b * 3.0);
					}
					else
						if (c == 3)
						{
							cout << "����Ʒ��������Ϊ\n";
							arryD[2].checkdate();
							cout << "�Ƿ�鿴������Ϣ��1.��    2.��\n";
							cin >> b;
							if (b == 1)
							{
								arryD[2].checktemp();
							}
							cout << "��������Ҫ���������\n";
							cin >> b;
							arryD[2].buyd_3_T(b);
							y += (b * 6.0);
						}
			}
			else
				if (a == 4)
				{
					int v, k, d;
					coffee arry_c[3] = { coffee("����","С��",6.0),coffee("����","�б�",8.0),coffee("����","��",10.0) };
					milktea arry_m[3] = { milktea("�̲�","С��",10.0),milktea("�̲�","�б�",12.0),milktea("�̲�","��",14.0) };
					cout << "��ѡ�����빺���������1.����    2.�̲�\n";
					cin >> v;
					if (v == 1)
					{
						cout << "�X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[\n";
						cout << "�U    ��ѡ��������Ҫ�Ĺ��                 �U\n";
						cout << "�U    1.С����6Ԫ��    " << "                      �U\n";
						cout << "�U    2.�б���8Ԫ��         " << "                 �U\n";
						cout << "�U    3.�󱭣�10Ԫ��" << "                         �U\n";
						cout << "�U                                           �U\n";
						cout << "�U                                           �U\n";
						cout << "�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n";
						cin >> k;
						if (k == 1) {
							cout << "��ѡ������Ҫ��Ũ��(1-5)\n";
							cin >> d;
							arry_c[0].setdensity(d);
							cout << "��ѡ������Ҫ���Ƕ�(1-5)\n";
							cin >> d;
							arry_c[0].setsuger(d);
							arry_c[0].display();
							cout << "��������Ҫ���������\n";
							cin >> b;
							y += (b * 6.0);
						}
						else
							if (k == 2)
							{
								cout << "��ѡ������Ҫ��Ũ��(1-5)\n";
								cin >> d;
								arry_c[1].setdensity(d);
								cout << "��ѡ������Ҫ���Ƕ�(1-5)\n";
								cin >> d;
								arry_c[1].setsuger(d);
								arry_c[1].display();
								cout << "��������Ҫ���������\n";
								cin >> b;
								y += (b * 8.0);
							}
							else
								if (k == 3)
								{
									cout << "��ѡ������Ҫ��Ũ��(1-5)\n";
									cin >> d;
									arry_c[2].setdensity(d);
									cout << "��ѡ������Ҫ���Ƕ�(1-5)\n";
									cin >> d;
									arry_c[2].setsuger(d);
									arry_c[2].display();
									cout << "��������Ҫ���������\n";
									cin >> b;
									y += (b * 10.0);
								}
					}
					else
						if (v == 2)
						{
							cout << "�X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[\n";
							cout << "�U    ��ѡ��������Ҫ�Ĺ��                 �U\n";
							cout << "�U    1.С����10Ԫ��    " << "                      �U\n";
							cout << "�U    2.�б���12Ԫ��         " << "                 �U\n";
							cout << "�U    3.�󱭣�14Ԫ��" << "                         �U\n";
							cout << "�U                                           �U\n";
							cout << "�U                                           �U\n";
							cout << "�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n";
							cin >> k;
							if (k == 1) {
								cout << "��ѡ������Ҫ��Ũ��(1-5)\n";
								cin >> d;
								arry_m[0].setdensity(d);
								arry_m[0].display();
								cout << "��������Ҫ���������\n";
								cin >> b;
								y += (b * 10.0);
							}
							else
								if (k == 2)
								{
									cout << "��ѡ������Ҫ��Ũ��(1-5)\n";
									cin >> d;
									arry_m[1].setdensity(d);
									arry_m[1].display();
									cout << "��������Ҫ���������\n";
									cin >> b;
									y += (b * 12.0);
								}
								else
									if (k == 3)
									{
										cout << "��ѡ������Ҫ��Ũ��(1-5)\n";
										cin >> d;
										arry_m[2].setdensity(d);
										arry_m[2].display();
										cout << "��������Ҫ���������\n";
										cin >> b;
										y += (b * 14.0);
									}
						}
				}
				else
				{
					cout << "������ı����Ч����ȷ�Ϻ�����������" << endl;
					this->choose_1_T();
				}
	cout << "�Ƿ��������������Ʒ��\n" << "1.��    2.��" << endl;
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
void pay::choose_1_V()//ѡ�������Ʒ����
{
	Biscuit arryB[] = {
		Biscuit("2019.12.3","����","������",3.0),
		Biscuit("2019.10.23","����","С����",4.5)
	};
	Snack arryS[] = {
		Snack("2019.9.6","���","����",4.2),
		Snack("2019.8.17","��Ƭ","�Ϻü�",3.0),
		Snack("2019.9.7","������","��ʦ��",5.0)
	};
	Drink arryD[] = {
		Drink("2019.12.6","����","��Ȫˮ","����ɽ",5.5),
		Drink("2019.3.8","����","������","�����",3.0),
		Drink("2019.4.8","��","��ˮ","����",4.5)
	};
	int a, b, c, d;
	cout << "�X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[\n";
	cout << "�U    ��ѡ�����빺�����Ʒ��                 �U\n";
	cout << "�U    1.����    " << "                             �U\n";
	cout << "�U    2.��ʳ         " << "                        �U\n";
	cout << "�U    3.����(��ͨ)" << "                           �U\n";
	cout << "�U    4.����" << "                                 �U\n";
	cout << "�U                                           �U\n";
	cout << "�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n";

	cin >> a;
	if (a == 1)
	{
		cout << "�X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[\n";
		cout << "�U    ��ѡ�����빺��ı��ɣ�                 �U\n";
		cout << "�U    1.������--3Ԫ    " << "                      �U\n";
		cout << "�U    2.С����--4.5Ԫ             " << "           �U\n";
		cout << "�U    " << "                                       �U\n";
		cout << "�U                                           �U\n";
		cout << "�U                                           �U\n";
		cout << "�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n";
		cin >> c;
		if (c == 1)
		{
			cout << "����Ʒ��������Ϊ";
			arryB[0].checkdate();
			cout << "\n��������Ҫ���������\n";
			cin >> b;
			arryB[0].buyb_1_V(b);
			y += (b * 3.0);
		}
		else if (c == 2)
		{
			cout << "����Ʒ��������Ϊ\n";
			arryB[1].checkdate();
			cout << "��������Ҫ���������\n";
			cin >> b;
			arryB[1].buyb_2_V(b);
			y += (b * 4.5);
		}
	}
	else
		if (a == 2)
		{
			cout << "�X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[\n";
			cout << "�U    ��ѡ�����빺�����ʳ��                 �U\n";
			cout << "�U    1.��������--4.2Ԫ    " << "              �U\n";
			cout << "�U    2.��Ƭ���Ϻüѣ�--3.0Ԫ             " << "   �U\n";
			cout << "�U    3.�����棨��ʦ����--5.0" << "                �U\n";
			cout << "�U                                           �U\n";
			cout << "�U                                           �U\n";
			cout << "�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n";
			cin >> c;
			if (c == 1)
			{
				cout << "����Ʒ��������Ϊ\n";
				arryS[0].checkdate();
				cout << "��������Ҫ���������\n";
				cin >> b;
				arryS[0].buys_1_V(b);
				y += (b * 4.2);
			}
			else
				if (c == 2)
				{
					cout << "����Ʒ��������Ϊ\n";
					arryS[1].checkdate();
					cout << "��������Ҫ���������\n";
					cin >> b;
					arryS[1].buys_2_V(b);
					y += (b * 3.0);
				}
				else
					if (c == 3)
					{
						cout << "����Ʒ��������Ϊ\n";
						arryS[2].checkdate();
						cout << "��������Ҫ���������\n";
						cin >> b;
						arryS[2].buys_3_V(b);
						y += (b * 5.0);
					}
		}
		else
			if (a == 3)
			{
				cout << "�X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[\n";
				cout << "�U    ��ѡ�����빺������ϣ�                 �U\n";
				cout << "�U    1.����ɽ--8.5Ԫ    " << "                    �U\n";
				cout << "�U    2.�����--3.0Ԫ             " << "           �U\n";
				cout << "�U    3.����--6.0" << "                            �U\n";
				cout << "�U                                           �U\n";
				cout << "�U                                           �U\n";
				cout << "�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n";
				cin >> c;
				if (c == 1)
				{
					cout << "����Ʒ��������Ϊ\n";
					arryD[0].checkdate();
					cout << "�Ƿ�鿴������Ϣ��1.��    2.��\n";
					cin >> b;
					if (b == 1)
					{
						arryD[0].checktemp();
					}
					cout << "��������Ҫ���������\n";
					cin >> b;
					arryD[0].buyd_1_V(b);
					y += (b * 8.5);
				}
				else
					if (c == 2)
					{
						cout << "����Ʒ��������Ϊ\n";
						arryS[1].checkdate();
						cout << "�Ƿ�鿴������Ϣ��1.��    2.��\n";
						cin >> b;
						if (b == 1)
						{
							arryD[0].checktemp();
						}
						cout << "��������Ҫ���������\n";
						cin >> b;
						arryD[1].buyd_2_V(b);
						y += (b * 3.0);
					}
					else
						if (c == 3)
						{
							cout << "����Ʒ��������Ϊ\n";
							arryS[2].checkdate();
							cout << "�Ƿ�鿴������Ϣ��1.��    2.��\n";
							cin >> b;
							if (b == 1)
							{
								arryD[0].checktemp();
							}
							cout << "��������Ҫ���������\n";
							cin >> b;
							arryD[2].buyd_3_V(b);
							y += (b * 6.0);
						}
			}
			else
				if (a == 4)
				{
					int v, k, d;
					coffee arry_c[3] = { coffee("����","С��",6.0),coffee("����","�б�",8.0),coffee("����","��",10.0) };
					milktea arry_m[3] = { milktea("�̲�","С��",10.0),milktea("�̲�","�б�",12.0),milktea("�̲�","��",14.0) };
					cout << "��ѡ�����빺���������1.����    2.�̲�\n";
					cin >> v;
					if (v == 1)
					{
						cout << "�X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[\n";
						cout << "�U    ��ѡ��������Ҫ�Ĺ��                 �U\n";
						cout << "�U    1.С����6Ԫ��    " << "                      �U\n";
						cout << "�U    2.�б���8Ԫ��         " << "                 �U\n";
						cout << "�U    3.�󱭣�10Ԫ��" << "                         �U\n";
						cout << "�U                                           �U\n";
						cout << "�U                                           �U\n";
						cout << "�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n";
						cin >> k;
						if (k == 1) {
							cout << "��ѡ������Ҫ��Ũ�ȣ�1-5��\n";
							cin >> d;
							arry_c[0].setdensity(d);
							cout << "��ѡ������Ҫ���Ƕȣ�1-5��\n";
							cin >> d;
							arry_c[0].setsuger(d);
							arry_c[0].display();
							cout << "��������Ҫ���������\n";
							cin >> b;
							y += (b * 6.0);
						}
						else
							if (k == 2)
							{
								cout << "��ѡ������Ҫ��Ũ�ȣ�1-5��\n";
								cin >> d;
								arry_c[1].setdensity(d);
								cout << "��ѡ������Ҫ���Ƕȣ�1-5��\n";
								cin >> d;
								arry_c[1].setsuger(d);
								arry_c[1].display();
								cout << "��������Ҫ���������\n";
								cin >> b;
								y += (b * 8.0);
							}
							else
								if (k == 3)
								{
									cout << "��ѡ������Ҫ��Ũ�ȣ�1-5��\n";
									cin >> d;
									arry_c[2].setdensity(d);
									cout << "��ѡ������Ҫ���Ƕȣ�1-5��\n";
									cin >> d;
									arry_c[2].setsuger(d);
									arry_c[2].display();
									cout << "��������Ҫ���������\n";
									cin >> b;
									y += (b * 10.0);
								}
					}
					else
						if (v == 2)
						{
							cout << "�X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[\n";
							cout << "�U    ��ѡ��������Ҫ�Ĺ��                 �U\n";
							cout << "�U    1.С����10Ԫ��    " << "                     �U\n";
							cout << "�U    2.�б���12Ԫ��         " << "                �U\n";
							cout << "�U    3.�󱭣�14Ԫ��" << "                         �U\n";
							cout << "�U                                           �U\n";
							cout << "�U                                           �U\n";
							cout << "�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n";
							cin >> k;
							if (k == 1) {
								cout << "��ѡ������Ҫ��Ũ�ȣ�1-5��\n";
								cin >> d;
								arry_m[0].setdensity(d);
								arry_m[0].display();
								cout << "��������Ҫ���������\n";
								cin >> b;
								y += (b * 10.0);
							}
							else
								if (k == 2)
								{
									cout << "��ѡ������Ҫ��Ũ�ȣ�1-5��\n";
									cin >> d;
									arry_m[1].setdensity(d);
									arry_m[1].display();
									cout << "��������Ҫ���������\n";
									cin >> b;
									y += (b * 12.0);
								}
								else
									if (k == 3)
									{
										cout << "��ѡ������Ҫ��Ũ�ȣ�1-5��\n";
										cin >> d;
										arry_m[2].setdensity(d);
										arry_m[2].display();
										cout << "��������Ҫ���������\n";
										cin >> b;
										y += (b * 14.0);
									}
						}
				}
				else
				{
					cout << "������ı����Ч����ȷ�Ϻ�����������" << endl;
					this->choose_1_V();
				}
	cout << "�Ƿ��������������Ʒ��\n" << "1.��    2.��" << endl;
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
	cout << "�X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[\n";
	cout << "�U    ��ѡ��֧����ʽ" << "                         �U\n";
	cout << "�U    1:΢��֧��  2:֧����֧��" << "               �U\n";
	cout << "�U                                           �U\n";
	cout << "�U    " << "                                       �U\n";
	cout << "�U                                           �U\n";
	cout << "�U                                           �U\n";
	cout << "�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n";
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
			cout << "������ı�Ų����ڣ���ȷ������������" << endl;
			this->choose_2_T();
		}
}

void pay::choose_2_V()//ѡ�񸶿ʽ
{
	int x;
	cout << "�X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[\n";
	cout << "�U    ��ѡ��֧����ʽ" << "                         �U\n";
	cout << "�U    1:΢��֧��  2:֧����֧�� 3:�˻����֧��" << "�U\n";
	cout << "�U                                           �U\n";
	cout << "�U    " << "                                       �U\n";
	cout << "�U                                           �U\n";
	cout << "�U                                           �U\n";
	cout << "�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n";
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
				cout << "������ı�Ų����ڣ���ȷ������������" << endl;
				this->choose_2_V();
			}
}
double pay::cash()//�һ���Ǯ
{
	coin c("coin");
	note n("note");
	double change = 0.0;
	cout << "����ǰ���˻����Ϊ:" << account << "Ԫ" << endl;
	cout << "��Ҫ���д˲������������һ��Ǯ�Ĳ����ѣ��Ƿ�������У�\n" << "1 ͬ��      2 ��ͬ��" << endl;
	int i, m, a;
	cin >> i;
	if (i == 1)
	{
		cout << "��ѡ������һ����ֽ����ࣻ1.ֽ��(�ɶһ�5Ԫ��10Ԫ��20Ԫ)    2.Ӳ�ң��ɶһ�һԪ����ǣ�" << endl;
		cin >> m;
		if (m == 1)
		{
			cout << "�������������Ԫ��Ŀ\n";
			cin >> a;
			n.n5_use(a);
			account -= a * 5;
			cout << "�����������ʮԪ��Ŀ\n";
			cin >> a;
			n.n10_use(a);
			account -= a * 10;
			cout << "����������Ķ�ʮԪ��Ŀ\n";
			cin >> a;
			n.n20_use(a);
			account -= a * 20;
			cout << "��ɨ����Ļ��ά��" << endl;
			this->QR_code();
			cout << "��ά�뽫��ʮ�����ʧ" << endl;
			this->sleep(10);
			account -= (a + 0.1);
			if (account > 0)
			{
				system("cls");//clear all the contents in the operator screeen
				system("color 07");//change the color of the background when the QRcode is dismissed
				cout << "�����˻����Ϊ" << account << "Ԫ\n" << "�뼰ʱȡ��������Ǯ" << endl;
				this->cont_V();
			}
			if (account <= 0)
			{
				system("cls");//clear all the contents in the operator screeen
				system("color 07");//change the color of the background when the QRcode is dismissed
				cout << "�����˻����㣬�뼰ʱ��ֵ" << endl;
				this->store();
			}
		}
		else
			if (m == 2)
			{

				cout << "�������������һԪӲ����Ŀ\n";
				cin >> a;
				c.c1_use(a);
				account -= a * 1;
				cout << "����������������Ӳ����Ŀ\n";
				cin >> a;
				c.c5_use(a);
				account -= a * 0.5;
				cout << "��ɨ����Ļ��ά��" << endl;
				this->QR_code();
				cout << "��ά�뽫��ʮ�����ʧ" << endl;
				this->sleep(10);
				account -= (a + 0.1);
				if (account > 0)
				{
					system("cls");//clear all the contents in the operator screeen
					system("color 07");//change the color of the background when the QRcode is dismissed
					cout << "�����˻����Ϊ" << account << "Ԫ\n" << "�뼰ʱȡ��������Ǯ" << endl;
					this->cont_V();
				}
				if (account <= 0)
				{
					system("cls");//clear all the contents in the operator screeen
					system("color 07");//change the color of the background when the QRcode is dismissed
					cout << "�����˻����㣬�뼰ʱ��ֵ" << endl;
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
	cout << "��ѡ�����������Ĳ�����1��������        2�˳�" << endl;
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
			cout << "��ȷ����Ч��������" << endl;
			this->cont_V();
		}
	return 0;
}
int pay::cont_T()
{
	int i;
	cout << "��ѡ�����������Ĳ�����1��������        2�˳�" << endl;
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
			cout << "��ȷ����Ч��������" << endl;
			this->cont_T();
		}
	return 0;
}
void pay::sleep(int s)
{
	time_t tmp1 = time(NULL);
	time_t tmp2 = tmp1;
	while (difftime(tmp2, tmp1) < s)//��ʱs������ 
	{
		tmp2 = time(NULL);
	}
}
void pay::wechat_T()
{
	pay x;
	cout << "��ɨ����Ļ��ά��" << endl;
	x.QR_code();
	cout << "��ά�뽫��ʮ�����ʧ" << endl;
	x.sleep(10);
	system("cls");//clear all the contents in the operator screeen
	system("color 07");//change the color of the background when the QRcode is dismissed
	cout << "֧���ɹ�!" << endl;
	this->cont_T();
}
void pay::Alipay_T(pay x)
{
	cout << "��ɨ����Ļ��ά��" << endl;
	x.QR_code();
	cout << "��ά�뽫��ʮ�����ʧ" << endl;
	x.sleep(10);
	system("cls");//clear all the contents in the operator screeen
	system("color 07");//change the color of the background when the QRcode is dismissed
	cout << "֧���ɹ�!" << endl;
	this->cont_T();
}
void pay::wechat_V()
{
	pay x;
	cout << "��ɨ����Ļ��ά��" << endl;
	x.QR_code();
	cout << "��ά�뽫��ʮ�����ʧ" << endl;
	x.sleep(10);
	system("cls");//clear all the contents in the operator screeen
	system("color 07");//change the color of the background when the QRcode is dismissed
	double b;
	b = y - (0.9 * y);
	account += b;
	cout << "�X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[\n";
	cout << "�U    ֧���ɹ����������Ϊ��" << b << "Ԫ" << "�Ѵ������" << "  �U\n";
	cout << "�U    �����˻����Ϊ��" << account << "Ԫ" << "                 �U\n";
	cout << "�U                                           �U\n";
	cout << "�U                                           �U\n";
	cout << "�U                                           �U\n";
	cout << "�U                                           �U\n";
	cout << "�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n";

	this->cont_V();
}
void pay::Alipay_V(pay x)
{
	cout << "��ɨ����Ļ��ά��" << endl;
	x.QR_code();
	cout << "��ά�뽫��ʮ�����ʧ" << endl;
	x.sleep(10);
	system("cls");//clear all the contents in the operator screeen
	system("color 07");//change the color of the background when the QRcode is dismissed
	double b;
	b = y - (0.9 * y);
	account += b;
	cout << "�X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�[\n";
	cout << "�U    ֧���ɹ����������Ϊ��" << b << "Ԫ" << "�Ѵ������" << "    �U\n";
	cout << "�U    �����˻����Ϊ��" << account << "Ԫ" << "                    �U\n";
	cout << "�U                                           �U\n";
	cout << "�U                                           �U\n";
	cout << "�U                                           �U\n";
	cout << "�U                                           �U\n";
	cout << "�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n";
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
