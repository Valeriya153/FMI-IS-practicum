//Тишко иска да си купи нов лаптоп.Той е готов да даде от 1000 до 1500 лева за лаптоп с най - 
//малко 3 USB порта, най - малко 8 GB RAM и SSD диск.Ако обаче лаптопът няма SSD или има по - 
//малко от 8 GB RAM, той не иска да даде повече от 800 лева.Напишете булев израз, който по цена на лаптоп, 
//брой USB портове, количество RAM и дали има SSD определя дали Трайчо ще си купи лаптопа.

#include<iostream>
using namespace std;
int main() {
	double laptopPrise;
	int USBports, RAMspace;
	bool SSDdisk;

	cout << "Laptop prise is ";
	cin >> laptopPrise;

	cout << "USB ports: ";
	cin >> USBports;

	cout << "RAM: ";
	cin >> RAMspace;

	cin >> SSDdisk;

	if (USBports >= 3 && RAMspace >= 8 && SSDdisk == true && (laptopPrise >= 1000 && laptopPrise <= 1500)) {
		cout << "He will buy the laptop";
	}
	else {
		if (RAMspace <= 8 && SSDdisk == false && laptopPrise <= 800) {
			cout << "He will buy the laptop";
		}
		else {
			cout << "He will not buy the laptop";
		}
	}
	return 0;
}


