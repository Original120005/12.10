#include <iostream>
#include "Main.h"
#include "Vehicle.h"
#include "Bus.h"
#include "Truck.h"
using namespace std;

int Main::vehicles_on_base = 0;
int Main::people_on_base = 0;
double Main::goods_on_base = 0;
double Main::petrol_on_base = 0;

int main() {
	Main main;
	Vehicle vehicle(50, 50);
	Bus bus(10, 10, 100, 100);
	Truck truck(2.5, 10, 250, 400);

	int answer, ans;
	bool exit = false;

	while (exit != true) {
		cout << "1. Base\n2. Vehicle\n3. Bus\n4. Truck\n5. Exit\n-> ";
		cin >> answer;

		switch (answer) {
		case 1:
			main.Print();
			break;

		case 2:
			cout << "\n1. Leave\n2. Arrive\n3. Tank Volume\n4. Petrol Amount\n-> ";
			cin >> ans;
			cin.ignore();
			cout << "\n";
			switch (ans) {
			case 1:
				vehicle.Leave();
				break;

			case 2:
				vehicle.Arrive();
				break;

			case 3:
				vehicle.getTankVolume();
				break;

			case 4:
				vehicle.getPetrolAmount();
				break;
			}
			break;

		case 3:
			cout << "\n1. Leave\n2. Arrive\n3. People Count\n4. Maximal People\n-> ";
			cin >> ans;
			cin.ignore();
			cout << "\n";
			switch (ans) {
			case 1:
				bus.Leave();
				break;

			case 2:
				bus.Arrive();
				break;

			case 3:
				bus.getPeopleCount();
				break;

			case 4:
				bus.getMaxPeople();
				break;
			}
			break;

		case 4:
			cout << "\n1. Leave\n2. Arrive\n3. Current Load\n4. Maximal Load\n-> ";
			cin >> ans;
			cin.ignore();
			cout << "\n";
			switch (ans) {
			case 1:
				truck.Leave();
				break;

			case 2:
				truck.Arrive();
				break;

			case 3:
				truck.getCurrentLoad();
				break;

			case 4:
				truck.getMaxLoad();
				break;
			}
			break;

		case 5:
			exit = true;
			break;
		}
	}





}