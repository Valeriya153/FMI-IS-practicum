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
