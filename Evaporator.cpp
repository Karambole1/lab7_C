#include "Evaporator.h"
#include <string>
#include <iostream>
using namespace std;

Evaporator::Evaporator() {
	name = "default name";
	diameter = 20;
	watts = 10;
	resistance = 5;
	cout << "Evaporator was created with default params!\n";
}

Evaporator::Evaporator(string name) {
	this->name = name;
	diameter = 20;
	watts = 10;
	resistance = 5;
	cout << "Evaporator was created\n";
}
Evaporator::Evaporator(string name, int diameter, int watts, int resistance) {
	this->name = name;
	this->diameter = diameter;
	this->watts = watts;
	this->resistance = resistance;
	cout << "\nNew Evaporator was created";
}

Evaporator::~Evaporator() {
	cout << "\nEvaporator " << name << " was removed";
}

void Evaporator::Evaporator_INFO() {
	cout << "\nInfo\n\tname: " << name << "\n\tdiameter: " << diameter << "\n\twatts: " << watts << "\n\tresistance: " << resistance << "\n";
}

void Evaporator::Evaporator_INFO_1() {
	cout << "Evaporator Info\n";
}

void Evaporator::set_name(string name) {
	this->name = name;
}
string Evaporator::get_name() {
	return name;
}

void Evaporator::set_diameter(int diameter) {
	this->diameter = diameter;
}
int Evaporator::get_diameter() {
	return diameter;
}

void Evaporator::set_watts(int watts) {
	this->watts = watts;
}
int Evaporator::get_watts() {
	return watts;
}

void Evaporator::set_resistance(int resistance) {
	this->resistance = resistance;
}
int Evaporator::get_resistance() {
	return resistance;
}

super_Evaporator::super_Evaporator(int more_secret_part) {
	this->more_secret_part = more_secret_part;
	cout << "some changes?\n";
}

void super_Evaporator::set_secret_part() {
	more_secret_part = secret_part;
	cout << "smth changed in secret part...\n";
}

void super_Evaporator::Evaporator_INFO(int smht) {
	cout << "If u need it: " << more_secret_part << endl;
}

super_Evaporator& super_Evaporator::operator = (Evaporator& other) {
	this->name = other.get_name();
	this->diameter = other.get_diameter();
	this->watts = other.get_watts();
	this->resistance = other.get_resistance();
	return *this;
}

void super_Evaporator::Evaporator_INFO_1() {
	cout << "super Evaporator info\n";
}

bool Evaporator::operator < (const Evaporator& evaporator) {
	return this->diameter < evaporator.diameter;
}
bool Evaporator::operator == (const Evaporator& evaporator) {
	return this->name == evaporator.name;
}