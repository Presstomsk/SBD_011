#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int number;	//�����, �������� �������������
	int reverse_number = 0;	//�����, ���������� ��������
	cout << "������� �����: "; cin >> number;
	int buffer = number;
	while (buffer > 0)
	{
		reverse_number *= 10;	//���������� ����� ��� �������
		reverse_number += buffer % 10;	//����� ������� ����� �� �����
		buffer /= 10;	//������� ������� ����� �� �����
	}
	cout << number << endl;
	cout << reverse_number << endl;
	if (number == reverse_number)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
	cout << endl;
}