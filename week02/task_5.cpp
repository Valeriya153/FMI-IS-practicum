//От клавиатурата се въвежда естествено число. Намерете сбора на цифрите му.

#include <iostream>

using namespace std;

int main() {

	int n, sumOfDigits = 0;
	cin >> n;

	while (n  > 0) {

		int digit = n % 10;
		n = n / 10;
		sumOfDigits += digit;
	}

	cout << "Sum of digits: " << sumOfDigits << endl;

	return 0;
}
