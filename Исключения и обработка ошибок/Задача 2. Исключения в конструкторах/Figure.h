#pragma once

#ifndef _FIGURE_H_
#define _FIGURE_H_

#include <iostream>
#include <string>
#include "Error.h"
class Figure {
protected:
	std::string name;

	Figure();
	Figure(std::string n);
public:

	void print();

	virtual void print_angles();
	virtual void print_sides();

	std::string get_name();
};

#endif // !_FIGURE_H_