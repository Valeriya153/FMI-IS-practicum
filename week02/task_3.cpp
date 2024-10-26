//По въведено естествено число n изведете n-тото число от редицата на Фибоначи.

#include <iostream>
using namespace std;
int main()
{
	
	int n;
	cout << "n = ";
	cin >> n;

	int fib1 = 0, fib2 = 1, temp;

	for (int i = 2; i < n; i++) {

		temp = fib1 + fib2;
		fib1 = fib2;
		fib2 = temp;
	}

	cout << fib2;
	return 0;
}