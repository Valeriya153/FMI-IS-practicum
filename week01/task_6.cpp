//����� ���� �� �� ���� ��� ������.��� � ����� �� ���� �� 1000 �� 1500 ���� �� ������ � ��� - 
//����� 3 USB �����, ��� - ����� 8 GB RAM � SSD ����.��� ����� �������� ���� SSD ��� ��� �� - 
//����� �� 8 GB RAM, ��� �� ���� �� ���� ������ �� 800 ����.�������� ����� �����, ����� �� ���� �� ������, 
//���� USB �������, ���������� RAM � ���� ��� SSD �������� ���� ������ �� �� ���� �������.

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


