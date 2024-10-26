// зад. 6 Напишете програма, която, по дадено число а и степенен показател n, намира а нa n-та степен.

#include <iostream>

using namespace std;

int main() {

	int a, n, sum = 1;

	cout << "a = ";
	cin >> a;

	cout << "n = ";
	cin >> n;

	if (a == 0) {
		cout << "1" << endl;
	}
	else {
		for (int i = 1; i <= n; i++) {
			sum *= a;
		}
	}

	cout << sum << endl;

	return 0;
}
