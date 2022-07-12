#include "Greeter.h"

namespace Greeter_class {
	std::string Greeter::greet(std::string name)
	{
		return "Здравствуйте, " + name + "!";
	}
}