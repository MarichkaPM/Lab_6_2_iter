#include <iostream>
#include <ctime>
#include <Windows.h>
using namespace std;

void create(int* a, const int n, const int HIGH, const int LOW);
void print(int* a, const int n);
double calculate(int* a, const int n, const int i, double& serednie_arif,
	int& all_i_elements, int& amount); //��������, �� ���������� �
//{
//	double serednie_arif = 0;
//	bool umova = false;
//	int all_i_elements = 0; // ������ �-��� ��������
//	int amount = 0; // ���� �������
//	//int b = i/2 == 0;
//	//if (a[i] == b);//������� ����� ������ � 
//	for (int i = 0; i < n;)
//	{
//		if (a[i] % 2 == 0)
//		{
//			umova = true; 
//			all_i_elements++;
//			amount += i;
//		}
//		if (umova)
//		{
//			serednie_arif = (1. * amount) / all_i_elements;
//		}
//		i++;
//		//cout << a[i] << " ";//count ���� ��� �� ������� ����� �������� � ������ ��������
//	}
//	return serednie_arif;// �� ������ ��������� �++ �����
//	/*if (umova)
//	{
//		i + Calculate(a, n, i + 1) / count;
//	}*/
//}

int main()
{
	srand(time(NULL));

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	cout << "������ ������� �������� � �����: " << endl;
	cout << "n = "; cin >> n;
	int *a = new int[n];
	const int HIGH = 53;
	const int LOW = -17;
	create(a, n, HIGH, LOW);
	print(a, n);
	double serednie_arif = 0;
	int amount = 0;				//���� ��� �������
	int all_i_elements = 0;		// ������� ������� � ������� ���������� ������
	cout << "������ ����������� ������� ������ �������� ������ = "
	<< calculate(a, n, 0, serednie_arif, amount, all_i_elements) << endl;
	delete[] a;
}
void create(int* a, const int n, const int HIGH, const int LOW)
{
	for (int i = 0; i < n; i++)
	{
		a[i] = LOW + rand() % (HIGH - LOW + 1);
	}
}
void print(int* a, const int n)
{
	cout << "a[] = { ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << "}" << endl;
}
double calculate(int* a, const int n, const int i, double& serednie_arif,
	int& all_i_elements, int& amount)
{
	bool umova = false;
	for (int i = 0; i < n;)
	{
		if (a[i] % 2 == 0)
		{
			umova = true;
			all_i_elements++;
			amount += i;
		}
		if (umova)
		{
			serednie_arif = (1. * amount) / all_i_elements;
		}
		i++;
	}
	return serednie_arif;
}
