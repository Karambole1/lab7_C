#pragma once
#include <string>
using namespace std;

class Evaporator
{
protected:
	string name;		// Название
	int diameter;		// Диамерт
	int watts;			// Ватты
	int resistance;		// Сопративление
	int secret_part = 1800;

public:
	Evaporator();
	Evaporator(string name);
	Evaporator(string name, int diameter, int watts, int resistance);
	~Evaporator();

	void Evaporator_INFO();
	virtual void Evaporator_INFO_1();

	void set_name(string name);
	string get_name();

	void set_diameter(int diameter);
	int get_diameter();

	void set_watts(int watts);
	int get_watts();

	void set_resistance(int resistance);
	int get_resistance();
	bool operator < (const Evaporator&);
	bool operator == (const Evaporator&);

};

class super_Evaporator : public Evaporator {

private:
	int more_secret_part;

public:
	super_Evaporator(int secret_part);
	void set_secret_part();
	using Evaporator::Evaporator_INFO;
	void Evaporator_INFO(int smth);
	void Evaporator_INFO_1() override;
	super_Evaporator& operator = (Evaporator& other);
};

