#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	double a, b;	//�����, �������� � ����������
	char s;	//Sign - ���� �������� +-*/
	cout << "������� ���������: ";
	cin >> a >> s >> b;
	if (s == '+')
	{
		cout << a << " + " << b << " = " << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << " - " << b << " = " << a - b << endl;
	}
	else if (s == '*')
	{
		cout << a << " * " << b << " = " << a * b << endl;
	}
	else if (s == '/')
	{
		cout << a << " / " << b << " = " << a / b << endl;
	}
	else
	{
		cout << "Error: No operation" << endl;
	}
}