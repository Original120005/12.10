#pragma once
#include <iostream>
#include "Main.h"
using namespace std;

class Vehicle : public Main {
	double petrol;
	double max_petrol;

public:
	Vehicle() {
		petrol = 0;
		max_petrol = 0;
	}

	Vehicle(double pa, double tv) {
		petrol = pa;
		max_petrol = tv;
	}

	double getTankVolume() {
		cout << "\nTank volume: " << max_petrol << " liters" << endl;
		return max_petrol;
	}

	double getPetrolAmount() {
		cout << "\nPetrol amount: " << petrol << " liters" << endl;
		return petrol;
	}

	void Arrive() { 
		if (vehicles_on_base < 5 && vehicles_on_base >= 0) {
			vehicles_on_base += 1;
		}
		else {
			cout << "\nAll vehicles based" << endl;
		}
	}

	bool Leave() {
		if (petrol_on_base != 0) {
			if (petrol_on_base < petrol) {
				cout << "\nDon't have enough petrol!" << endl;
				return false;
			}
			else if (petrol_on_base > petrol && vehicles_on_base > 0) {
				petrol_on_base -= petrol;
				vehicles_on_base -= 1;
				return true;
			}
		}
		else {
			cout << "\nDon't have petrol!" << endl;
			return false;
		}

		return true;
	}


};
