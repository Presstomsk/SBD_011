#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	
	/*int temperature;
	cout << "������� ����������� �������: ";
	cin >> temperature;*/

	/*if (temperature > 10 && temperature <=25)
	{
		cout << "�� ����� �����" << endl;
	}
	else if(temperature<=10)
	{
		cout << "�� ����� �������" << endl;
	}
	else
	{
		cout << "�� �� ������ �������!" << endl;
	}*/

	/*if (temperature > 70)
	{
		cout << "�� �� ������ �������" << endl;
	}
	else if (temperature > 50)
	{
		cout << "�� � �������" << endl;
	}
	else if (temperature > 35)
	{
		cout << "����� �����" << endl;
	}
	else if (temperature > 25)
	{
		cout << "�����" << endl;
	}
	else if (temperature > 15)
	{
		cout << "�����" << endl;
	}
	else
	{
		cout << "�������" << endl;
	}*/
	
	/*
	
	if (Condition1)
	{
		....;
		code1;
		....;
	}
	else if(Condition2)
	{
		....;
		code2;
		....;
	}
	else if(Condition3)
	{
		...;
		code3;
		....;
	}
	........
	........
	........
	else if(ConditionN)
	{
		....;
		codeN;
		...;
	}
	else
	{
		....;
		default code;
		....;
	}
	


	Condition - ��� �������.
	������� - ��� ���������.*/


	char key;
	cout << "�� ��������? (y/n)"; cin >> key;
	if (key == 'y')	cout << "Yes" << endl;
	else if (key == 'n')	cout << "No" << endl;
	else cout << "I don't know" << endl;

	//LOOP - ��� ����������� ���������, 
	//������� ����������� ��������� ������������ ���.
}

/*
-------------------------------

while - ���� � ������������
do...while - ���� � ������������
for - ���� �� �������� ����� ��������

-------------------------------
*/