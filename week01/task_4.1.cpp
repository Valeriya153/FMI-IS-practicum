#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a, b, c;

	cout << "a = ";
	cin >> a;

	cout << "b = ";
	cin >> b;

	cout << "c = ";
	cin >> c;

	int Discriminant = b * b - 4 * a * c;

	if (Discriminant < 0)
		cout << "The equation has no real roots." << endl;
	else if (Discriminant == 0) {
		cout << "x1 = x2 = " << -b / (2 * a) << endl;
	}
	else {
		long int x1 = ((-b + sqrt(Discriminant)) / (2 * a));
		long int x2 = ((-b - sqrt(Discriminant)) / (2 * a));

		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}
	return 0;
}