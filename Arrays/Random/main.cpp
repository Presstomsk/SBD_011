#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	//���������� ������� ���������� �������:
	int minRand, maxRand;
	do
	{
		cout << "������� ����������� ��������� �����: "; cin >> minRand;
		cout << "������� ������������ ��������� �����: "; cin >> maxRand;
		if (minRand == maxRand)
		{
			cout << "User lox :-(" << endl;
			system("PAUSE");
			system("CLS");
		}
	} while (minRand == maxRand);
	if (maxRand < minRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}

	//����� ��������� ������� �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//����������:
	for (int i = 0; i < n; i++)	//������� 'i' �������� �������, � ������� ����� ��������� ����������� ��������
	{
		for (int j = i+1; j < n; j++)	//������� 'j' ���������� ��������� ��������, � ������� ������������ ��������
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}

	//����� ���������������� ������� �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}