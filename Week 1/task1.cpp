#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	//zad7 - Да се напише програма, която определя дали реалното число x принадлежи на интервала [a, b]. 
	//Първо се въвежда x, после интервала.

	double x, a, b;

	cin >> x >> a >> b;
	cout << ((x >= a) && (x <= b));

	return 0;
}