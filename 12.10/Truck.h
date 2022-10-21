#pragma once
#include <iostream>
#include "Main.h"
#include "Vehicle.h"
using namespace std;

class Truck : public Vehicle {
	double load;
	double max_load;
	double petrol;
	double max_petrol;

public:
	Truck() {
		load = 0;
		max_load = 0;
		petrol = 0;
		max_petrol = 0;
	}

	Truck(double l, double ml, double pl, double mpl) {
		load = l;
		max_load = ml;
		petrol = pl;
		max_petrol = mpl;
	}

	int getCurrentLoad() {
		cout << "Current machine load: " << load << endl;
		return load;
	}

	int getMaxLoad() {
		cout << "Max current machine load: " << max_load << endl;
		return max_load;
	}

	void Arrive() {
		if (vehicles_on_base < 5 && vehicles_on_base >= 0) {
			vehicles_on_base += 1;
			goods_on_base += load;
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
