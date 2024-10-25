//Направете конзолен калкулатор с основните действия +, -, *, / .

#include<iostream>
using namespace std;
int main() {
	char symbol;
	cin >> symbol;
	double a, b;
	cin >> a >> b;

	switch (symbol)
	{
	case '+':
		cout << a + b << endl;
		break;
	case '-':
		cout << a - b << endl;
		break;
	case '*':
		cout << a * b << endl;
		break;
	case '/':
		cout << a / b << endl;
		break;

	default:
		cout << "wrong operation";
		break;
		return 0;
	}
}
