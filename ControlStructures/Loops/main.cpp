//Loops
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int n;	//���������� ��������
	int i = 0; //������� �����
	cout << "������� ���������� ��������: ";
	cin >> n;
	while (i < n)
	{
		cout << i++ << " Hello World!\n";
	}
}