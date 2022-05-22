#include <iostream>
#include <fstream>


void print(int* arr, int size) {
	for (size_t i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n\n";
}

int main() {
	std::ifstream fin("in.txt");

	if (!fin.is_open()) {
		std::cout << "file is not opened!\n";
		return 0;
	}

	int size1;
	fin >> size1;
	
	if (size1 < 0) {
		std::cout << "Некорректный размер массива!\n";
		return 0;
	}

	int* arr1 = new int[size1];

	for (size_t i = 0; i < size1; i++)
	{
		fin >> arr1[i];
	}


	int size2;
	fin >> size2;

	int* arr2 = new int[size2];

	for (size_t i = 0; i < size2; i++)
	{
		fin >> arr2[i];
	}

	fin.close();


	//changing arr1
	int temp1 = arr1[0];

	for (size_t i = 0; i < size1 - 1; i++)
	{
		arr1[i] = arr1[i + 1];
	}
	arr1[size1 - 1] = temp1;

	//print(arr1, size1);



	//changing arr2

	int temp2 = arr2[size2 - 1];
	for (size_t i = size2 - 1; i > 0; i--)
	{
		arr2[i] = arr2[i - 1];
	}

	arr2[0] = temp2;


	print(arr2, size2);

	std::ofstream fout("out.txt");

	if (!fout.is_open()) {
		std::cout << "Out file is not opened!\n";
		return 0;
	}

	fout << size2 << "\n";
	for (size_t i = 0; i < size2; i++)
	{
		fout << arr2[i] << " ";
	}
	fout << "\n";


	fout << size1 << "\n";
	for (size_t i = 0; i < size1; i++)
	{
		fout << arr1[i] << " ";
	}

}
