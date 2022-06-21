#pragma once

#ifndef _ERROR_H_
#define _ERROR_H_
#include <stdexcept>
#include <string>
class Error : public std::domain_error {
	std::string msg;
public:
	Error(std::string ex);
	std::string what();
};

#endif //!_ERROR_H_