#include"Error.h"

Error::Error(std::string ex) :domain_error(ex), msg(ex) {}
std::string Error::what() {
	return msg;
}