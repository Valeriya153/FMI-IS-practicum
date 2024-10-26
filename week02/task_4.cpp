// Въвеждаме произволен брой числа до въвеждането на 0 и намираме сбора им

#include <iostream>

using namespace std;

int main() {

int n, sum = 0;
do {
	cin >> n;
	sum += n;
} while (n != 0);

cout << sum << endl;
}
