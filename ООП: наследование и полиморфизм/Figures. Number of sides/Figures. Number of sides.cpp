#include <iostream>
#include <string>


class Figure {
protected:
	int	sides_count;
	std::string name;
public:
	Figure() :sides_count(0), name("Фигура") {}
	Figure(int count, std::string n) :sides_count(count), name(n) {}

	int get_sides_count() {
		return sides_count;
	}

	std::string get_name() {
		return name;
	}
};

class Triangle :public Figure {
public:
	Triangle() :Figure(3, "Треугольник") {}
};

class Quadrangle :public Figure {
public:

	Quadrangle() :Figure(4, "Четырёхугольник") {}
};


int main() {
	setlocale(LC_ALL, "rus");

	std::cout << "Количество сторон: "<<std::endl;

	Figure f;
	std::cout << f.get_name() << ": " << f.get_sides_count() << "\n";


	Triangle t;
	std::cout << t.get_name() << ": " << t.get_sides_count() << "\n";


	Quadrangle q;
	std::cout << q.get_name() << ": " << q.get_sides_count() << "\n";
}