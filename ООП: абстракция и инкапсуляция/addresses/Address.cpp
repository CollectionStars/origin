#include <iostream>
#include <fstream>
#include <string>


class Address {
	std::string city;
	std::string street;
	int house;
	int flat;

public:
	Address() {}
	Address(std::string c, std::string s, int h, int f) : city(c), street(s), house(h), flat(f) {}

	std::string get_city() {
		return city;
	}

	std::string get_full_address() {
		std::string temp = city;
		temp += ", " + street + ", " + std::to_string(house) + ", " + std::to_string(flat);
		return temp;
	}
};


int main()
{
	std::ifstream fin("in.txt");

	if (!fin.is_open()) {
		std::cout << "File is not opened!\n";
		return 0;
	}

	int count;
	fin >> count;

	Address* arr = new Address[count];
	for (size_t i = 0; i < count; i++)
	{
		std::string city, street;
		int house, flat;
		fin >> city;
		fin >> street;
		fin >> house;
		fin >> flat;

		arr[i] = Address(city, street, house, flat);
	}

	fin.close();

	std::ofstream fout("out.txt");
	if (!fout.is_open()) {
		std::cout << "File is not opened!\n";
		return 0;
	}

	fout << count << "\n";
	for (int i = count - 1; i >= 0; i--)
	{
		fout << arr[i].get_full_address() << "\n";
	}

	fout.close();
}