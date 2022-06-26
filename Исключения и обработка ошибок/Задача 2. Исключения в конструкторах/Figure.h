#pragma once

#include <iostream>
#include <string>
#include "Error.h"
class Figure {
protected:
	std::string name;

	Figure();
	Figure(std::string n);
public:

	virtual void print();

	virtual void print_angles();
	virtual void print_sides();

	std::string get_name();
};

