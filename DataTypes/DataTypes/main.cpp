#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	cout << (bool)0.000 << endl;
}

/*
----------------------------------
1. ���������� ����: bool (Boolean) 1 Byte true false
	true - 1
	false - 0
	
	0 - ��� false, a true - ��� ���, ��� �� ����!!!

2. ���������� ����: char (Character - ������)
	�������� 1 Byte ������, � �������� ���� ������ � ��������� ASCII

3. �������� ����:
	unsigned
	  signed
	------------
	short	2B
	long	4B
	int		2-4B
	long long 8B
----------------------------------
*/