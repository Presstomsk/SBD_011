//Loops
#include<iostream>
#include<conio.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	//int n;	//���������� ��������
	//int i = 0; //������� �����
	//cout << "������� ���������� ��������: ";
	//cin >> n;
	//while (i < n)
	//{
	//	cout << i++ << " Hello World!\n";
	//}

	char key;
	do
	{
		key = _getch();	//ASCII
		cout << (int)key << "\t" << key << endl;
	} while (true);
}