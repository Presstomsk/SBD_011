#include <iostream>
using namespace std;

#define CHESS_2

void main()
{

#ifndef CHESS_2
	setlocale(LC_ALL, "");

	cout << "������� ����� ������: ";
	int n; cin >> n;

	setlocale(LC_ALL, "C");

	/*for (int i = 0; i < n; i++)
	{
		cout << i << " " << (char)i << endl;
		cout << oct << 219 << "\t" << hex << 219 << endl;
		cout << (char)0xDB << (char)0333 << endl;
	}*/

	cout << "\n\t" << (char)218;
	for (int i = 0; i < n * 2; i++) cout << (char)196;
	cout << (char)191 << endl;

	for (int i = 1; i <= n; i++) //n ����� ���������
	{
		cout << "\t" << (char)179;
		if (i % 2) //���� i �������
		{
			for (int k = 1; k <= n; k++) //���� ������ ������ �������� ���
			{
				if (k % 2) cout << (char)0xDB << (char)219; // 0xDB � 0xdb ����������������� 219
				else cout << "  ";
			}
			cout << (char)179 << endl;
		}
		else
		{
			for (int k = 1; k <= n; k++) //���� ������ ������ ������ ���
			{
				if (k % 2) cout << "  ";
				else cout << (char)0333 << (char)0xdb; // 0333 ������������ 219
			}
			cout << (char)179 << endl;
		}
	}
	cout << "\t" << (char)192;
	for (int i = 0; i < n * 2; i++) cout << (char)196;
	cout << (char)217 << endl;
#endif // !CHESS_2    

#ifdef CHESS_2
	setlocale(LC_ALL, "");
	cout << "������� ����� ������: ";
	int n; cin >> n;
	for (int i = 1; i <= n; i++) //n ����� ���������
	{
		for (int j = 1; j <= n; j++) //n ����� ��������� � ��������
		{
			if (i % 2)
			{
				for (int k = 1; k <= n; k++) //���� ������ ��������� � �������� �������� ���
				{
					if (k % 2)
						for (int kk = 1; kk <= n; kk++) cout << "* ";
					else
						for (int kk = 1; kk <= n; kk++) cout << "  ";
				}
				cout << endl;
			}
			else
			{
				for (int k = 1; k <= n; k++) //���� ������ ��������� � �������� ������ ���
				{
					if (k % 2)
						for (int kk = 1; kk <= n; kk++) cout << "  ";
					else
						for (int kk = 1; kk <= n; kk++) cout << "* ";
				}
				cout << endl;
			}

		}
	}
#endif // CHESS_2

}