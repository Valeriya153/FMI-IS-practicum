//Да се напише програма, която по въведено 4-цифрено естествено число проверява дали първата му цифра е нечетна 
//и е най-голямата сред всички цифри.

#include<iostream>
using namespace std;
int main() {
	int number;
	cout << "Enter four digit number: ";
	cin >> number;

	int firstDigit = number / 1000;

	if (firstDigit % 2 != 0)
		cout << "Digit is odd." << endl;
	else
		cout << "Digit is not odd." << endl;

	int secondDigit = (number / 100) % 10;
	int thirdDigit = (number / 10) % 10;
	int fourthDigit = number % 10;

	if (firstDigit > secondDigit && firstDigit > thirdDigit && firstDigit > fourthDigit)
		cout << "First digit is the gratest." << endl;
	else
		cout << "First digit is not the gratest." << endl;

	return 0;
}