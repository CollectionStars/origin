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

void sort(Address* arr, int size) {
	Address temp;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j].get_city() > arr[j + 1].get_city()) {
				// меняем элементы местами
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

}

int main() {

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


	sort(arr, count);

	std::ofstream fout("out.txt");
	if (!fout.is_open()) {
		std::cout << "File is not opened!\n";
		return 0;
	}


	fout << count << "\n";
	for (int i = 0; i < count; i++)
	{
		fout << arr[i].get_full_address() << "\n";
	}
}