#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RUS");//�������� ��������

	//5! = 1*2*3*4*5 = 120;
	int n;	//�����, ��� �������� ����������� ���������
	double f = 1;	//���������
	cout << "������� �����: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << endl;
	}
	cout << endl;

	//double b, s, g = 1;
	//cout << "������� �����"; cin >> b;
	//cout << "������� �����"; cin >> s;
	//if (s < 0)
	//{
	//	b = 1 / b;
	//	s = -s;
	//}
	//for (int i = 1; i <= s; i = i++)
	//{
	//	//g = g * b;
	//	g *= b;
	//}
	//cout << "�������" << g << endl;

	//cout << "ASCII-������� �� ���������:\n";
	//setlocale(LC_ALL, "C");//���������� ���������
	//for (int i = 0; i < 256; i++)
	//{
	//	if (i % 16 == 0)cout << endl;
	//	cout /*<< i << " " */<< (char)i << " ";
	//}
	//cout << endl;
}
