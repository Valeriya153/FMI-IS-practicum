#include<iostream>
using namespace std;
int main() {
	int season;
	cin >> season;

	switch (season)
	{
	case 12:
	case 1:
	case 2:
		cout << "The season is winter!" << endl;
		break;
	case 3:
	case 4:
	case 5:
		cout << "The season is spring!" << endl;
		break;
	case 6:
	case 7:
	case 8:
		cout << "The season is summer!" << endl;
		break;
	case 9:
	case 10:
	case 11:
		cout << "The season is autumn!" << endl;
		break;

	default:
		cout << "Wrong number" << endl;
		break;
	}
	return 0;
}