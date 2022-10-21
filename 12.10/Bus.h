#pragma once
#include <iostream>
#include "Main.h"
#include "Vehicle.h"
using namespace std;

class Bus : public Vehicle {
	int people;
	int max_people;
	double petrol;
	double max_petrol;

public:
	Bus() {
		people = 0;
		max_people = 0;
		petrol = 0;
		max_petrol = 0;
	}

	Bus(int pe, int mpe, double pl, double mpl) {
		people = pe;
		max_people = mpe;
		petrol = pl;
		max_people = mpl;
	}

	int getPeopleCount() {
		cout << "People on the board: " << people << endl;
		return people;
	}

	int getMaxPeople() {
		cout << "Max people on the board: " << max_people << endl;
		return max_people;
	}

	void Arrive() {
		if (vehicles_on_base < 5 && vehicles_on_base >= 0 && people_on_base >= 10) {
			vehicles_on_base += 1;
			people_on_base += people;
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
			else if (petrol_on_base > petrol && vehicles_on_base > 0 && people_on_base > 0) {
				petrol_on_base -= petrol;
				vehicles_on_base -= 1;
				people_on_base -= people;
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
