#include<iostream>
using namespace std;

/*
-------------------------
Reference - ��� ����������, ������� �������� ����� ������ ����������.
-------------------------
*/

void main()
{
	setlocale(LC_ALL, "");
	int a = 2;
	int& ra = a;
	ra += 3;
	cout << &a << endl;
	cout << &ra << endl;
}