//По даден месец и година изведете броя дни от месеца.
//(hint: 1,3,5,7,8,10,12 имат по 31 дни, а 4,6,9,11 имат 30 !Февруари - 29!)

#include<iostream>
using namespace std;
int main() {
	int month, year;
	cin >> month >> year;
	switch (month) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		cout << 31 << endl;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		cout << 30 << endl;
		break;
	case 2:
		cout << 28 + (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
		break;
	default:
		cout << "Wrong data" << endl;
		break;
	}
}
