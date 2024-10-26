//Изкарайте всички главни букви от английската азбука, които са съгласни.

#include <iostream>

using namespace std;

int main() {

	for (char letter = 'A'; letter <= 'Z'; letter++) 
	{

		if (letter != 'A' && letter != 'E' && letter != 'I' && letter != 'O' && letter != 'U') 
		{
			cout << letter << ", ";
		}
	}

	return 0;
}
