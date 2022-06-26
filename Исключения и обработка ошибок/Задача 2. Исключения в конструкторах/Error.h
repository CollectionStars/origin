#pragma once

#include <stdexcept>
class Error : public std::domain_error {
public:
	Error(char const* ex);
};



