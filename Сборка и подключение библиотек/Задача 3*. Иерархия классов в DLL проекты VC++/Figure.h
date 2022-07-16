#pragma once
#ifdef DLLCLASSES_EXPORTS
#define DLLCLASSES_API __declspec(dllexport)
#else
#define DLLCLASSES_API __declspec(dllimport)
#endif

#include <iostream>
#include <string>
class  Figure {
protected:
	std::string name;

	DLLCLASSES_API Figure();
	DLLCLASSES_API Figure(std::string n);
public:

	DLLCLASSES_API void print();

	DLLCLASSES_API virtual void print_angles();
	DLLCLASSES_API virtual void print_sides();

	DLLCLASSES_API std::string get_name();
};

