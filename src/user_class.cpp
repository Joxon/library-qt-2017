#include<iostream>
#include<sstream>

using namespace std;

class user
{
private:
	string name;
	int ID[10];
	int academy;
	int class_ID[10];
	int type;
	int credit;
	int balance;


public:
	user()
	{
		cout << "������ѧ������" << endl;
		cin >> name;
		cout << "������ѧ��" << endl;
		for (int i = 0; i < 10; i++)
			cin >> ID[i];
		cout << "������ѧԺ" << endl;
		

	}

};