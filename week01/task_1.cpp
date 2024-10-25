//По въведена година проверете дали тя е високосна.(hint: Една година е високосна, когато тя се дели на 4 без остатък. 
//Специално правило се прилага, когато последните две цифри на годината са нули. 
//Тогава допълнителното условие годината да е високосна е да се дели на 400 без остатък. )

#include<iostream>
using namespace std;
int main() {
	int year;
	cout << "Enter a year: ";
	cin >> year;
	
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		cout << year << " is a leap year." << endl;
	}
	else {
		cout << year << " is not a leap year." << endl;
	}
	return 0;
}