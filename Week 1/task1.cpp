#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	//zad7 - �� �� ������ ��������, ����� �������� ���� �������� ����� x ���������� �� ��������� [a, b]. 
	//����� �� ������� x, ����� ���������.

	double x, a, b;

	cin >> x >> a >> b;
	cout << ((x >= a) && (x <= b));

	return 0;
}