#pragma once
#include <string>
class Vehicle {
public:
	virtual double result(int dist) = 0;
	virtual void set_chosen(bool) = 0;
	virtual bool get_chosen() = 0;
	virtual bool is_air_vehicle() = 0;
	std::string get_name();
protected:
	std::string name;
};


