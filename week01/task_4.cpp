//Дадени са коефициентите a и b на едно линейно уравнение ax + b = 0. Изведете решението, ако има единствено такова, 
//NO ако няма решение, и INF, ако има безброй много решения. Работим единствено с цели числа.

#include <iostream>
using namespace std;
int main() {

	int a, b, x;

	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;

	if (a == 0 && b != 0)
		cout << "NO";
	else if (a == 0 && b == 0)
			cout << "INF";
	else
 cout << "x = " << -b / a << endl; 
	return 0;
}
