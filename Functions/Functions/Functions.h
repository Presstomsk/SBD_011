#pragma once
#include<iostream>
using namespace std;

//VCS - Version Conreol System
//��� - ������� �������� ������
//Commit
//Branches
//Scram, Agile....
//GitHub
//VCS: SVN, Subversion, Jira, .... !!!Git!!!
//GitHub
//Repository - ��� ��������� �������� �����.

#ifdef OVERLOAD_EXAMPLES
void function()
{
	cout << "��� ����������" << endl;
}
int function(int a)
{
	cout << "���� �������� ���� int" << endl;
	return 0;
}
#endif // OVERLOAD_EXAMPLES

const int ROWS = 8;
const int COLS = 5;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int m, const int n);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(char arr[], const int n);
void Print(int arr[ROWS][COLS], const int m, const int n);