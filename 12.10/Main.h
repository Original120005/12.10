#pragma once
#include <iostream>
using namespace std;

class Main {
protected:
	static int people_on_base;
	static int vehicles_on_base;
	static double petrol_on_base;
	static double goods_on_base; 

public:
	Main() {
		people_on_base = 67;
		vehicles_on_base = 5;
		petrol_on_base = 33000;
		goods_on_base = 0.5500;
	}

	Main(int pob, int vob, double ptrlob, double gob) {
		people_on_base = pob;
		vehicles_on_base = vob;
		petrol_on_base = ptrlob;
		goods_on_base = gob;
	}

	void Print() {
		cout << "\nPeople : " << people_on_base << endl;
		cout << "Vehicles : " << vehicles_on_base << endl;
		cout << "Petrol  " << petrol_on_base << " " << endl;
		cout << "Goods : " << goods_on_base << " " << endl << endl;
	}

};
