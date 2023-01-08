#include <algorithm>
#include <list>
#include <iostream>
#include <conio.h>
#include "Evaporator.h"
using namespace std;


int main() {
	list<Evaporator> list_of_parts;
	list<Evaporator>::iterator i;

	Evaporator* evaporator1 = new Evaporator();
	Evaporator* evaporator2 = new Evaporator("Evaporator", 5, 10, 20);
	list_of_parts.push_back(*evaporator1);
	list_of_parts.push_back(*evaporator2);

	cout << "\nItems in list:\n";
	for (i = list_of_parts.begin(); i != list_of_parts.end(); ++i) {
		i->Evaporator_INFO();
	}
	list_of_parts.sort();
	cout << "\nItems in list after sorting:\n";
	for (i = list_of_parts.begin(); i != list_of_parts.end(); ++i) {
		i->Evaporator_INFO();
	}
	cout << "\nSearch in list:\n";
	i = find(list_of_parts.begin(), list_of_parts.end(), Evaporator("default name", 20, 10, 5));
	if (i != list_of_parts.end()) {
		cout << "Found element: ";
		i->Evaporator_INFO();
		cout << endl;
	}
	else
		cout << "Item not Found" << endl;
}