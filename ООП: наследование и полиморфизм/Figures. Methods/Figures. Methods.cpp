#include <iostream>
#include <string>

class Figure {
protected:
	int sides_count;
	std::string name;
public:
	Figure() :name("Фигура"), sides_count(0) {}
	Figure(int count, std::string n) :sides_count(count), name(n) {}

	virtual bool check() {
		if (sides_count == 0) {
			return true;
		}
		return false;
	}

	virtual void print_info() {
		std::cout << name << ":\n";
		if (check() == true) {
			std::cout << "Правильная\n";
		}
		else {
			std::cout << "Неправильная\n";
		}
		std::cout << "Количество сторон: " << sides_count << "\n";
	}
};

class Triangle :public Figure {
protected:
	//стороны
	int a, b, c;
	//углы
	int A, B, C;

public:
	Triangle() :Figure(3, "Треугольник") {}
	Triangle(int a_, int b_, int c_, int A_, int B_, int C_)
		:a(a_), b(b_), c(c_), A(A_), B(B_), C(C_), Figure(3, "Треугольник") {}

	int get_a() {
		return a;
	}
	int get_b() {
		return b;
	}
	int get_c() {
		return c;
	}
	int get_A() {
		return A;
	}
	int get_B() {
		return B;
	}
	int get_C() {
		return C;
	}

	std::string get_name() {
		return name;
	}

	bool check() override {
		if (A + B + C == 180) {
			return true;
		}
		return false;
	}
	void print_info() override {
		Figure::print_info();
		std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << "\n";
		std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << "\n\n";

	}
};

//равнобедренный
//a==c, A==C
class Iso_Triangle :public Triangle {
public:

	Iso_Triangle() {
		name = "Равнобедренный треугольник";
	}

	Iso_Triangle(int a_, int b_, int A_, int B_) :Triangle(a_, b_, a_, A_, B_, A_)
	{
		name = "Равнобедренный треугольник";
	}

	bool check() override {
		if (Triangle::check() && a == c && A == C) {
			return true;
		}
		return false;
	}

};

//прямоугольный треугольник
class Rect_Triangle :public Triangle {

public:

	Rect_Triangle() {
		name = "Прямоугольный треугольник";
	}


	Rect_Triangle(int a_, int b_, int c_, int A_, int B_) :Triangle(a_, b_, c_, A_, B_, 90)
	{
		name = "Прямоугольный треугольник";
	}

	bool check() override {
		if (Triangle::check() && C == 90) {
			return true;
		}
		return false;
	}
};


//равносторонний
class Equ_Triangle :public Iso_Triangle {
public:
	Equ_Triangle() {
		name = "Равносторонний треугольник";
	}
	Equ_Triangle(int a_) :Iso_Triangle(a_, a_, 60, 60) {
		name = "Равносторонний треугольник";

	}
	bool check() override {
		//проверка a==b тк вызвали проверку у равнобедренного треугольника
		bool equ_sides = a == b;

		//проверка такая, тк остальные проверки излишни тк вызвали проверку у равнобедренного треугольника
		bool equ_corners = A == B && A == 60;
		if (Iso_Triangle::check() && equ_sides && equ_corners) {
			return true;
		}
		return false;
	}
};


class Quadrangle : public Figure {
protected:

	//стороны
	int a, b, c, d;
	//углы
	int A, B, C, D;

public:
	Quadrangle() :Figure(4, "Четырехугольник") {}
	Quadrangle(int a_, int b_, int c_, int d_, int A_, int B_, int C_, int D_)
		:a(a_), b(b_), c(c_), d(d_), A(A_), B(B_), C(C_), D(D_), Figure(4, "Четырехугольник") {}

	int get_a() {
		return a;
	}
	int get_b() {
		return b;
	}
	int get_c() {
		return c;
	}
	int get_d() {
		return d;
	}
	int get_A() {
		return A;
	}
	int get_B() {
		return B;
	}
	int get_C() {
		return C;
	}
	int get_D() {
		return D;
	}

	bool check() override {
		if (A + B + C + D == 360) {
			return true;
		}
		return false;
	}


	void print_info() {
		Figure::print_info();
		std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
		std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n\n";

	}

	std::string get_name() {
		return name;
	}
};



//a==c b==d, A==C B===D
class Parallelogram :public Quadrangle {
public:
	Parallelogram() {
		name = "Параллелограмм";
	}

	Parallelogram(int a_, int b_, int A_, int B_) :Quadrangle(a_, b_, a_, b_, A_, B_, A_, B_)
	{
		name = "Параллелограмм";
	}

	bool check() override {
		if (Quadrangle::check() && a == c && b == d && A == C && B == D) {
			return true;
		}
		return false;
	}
};

//a==c, b==d
class Rectangle :public Parallelogram {
public:
	Rectangle() {
		name = "Прямоугольник";
	}

	Rectangle(int a_, int b_) :Parallelogram(a_, b_, 90, 90)
	{
		name = "Прямоугольник";
	}

	bool check() override {
		if (Parallelogram::check() && A == B && A == 90) {
			return true;
		}
		return false;
	}
};


//a==b==c==d 90,90,90,90
class Square :public Rectangle {
public:
	Square() {
		name = "Квадрат";
	}

	Square(int a_) :Rectangle(a_, a_)
	{
		name = "Квадрат";
	}

	bool check() override {
		if (Rectangle::check() && a == b) {
			return true;
		}
		return false;
	}
};

//a==b==c==d, A==C B==D
class Rhombus : public Parallelogram {
public:
	Rhombus()
	{
		name = "Ромб";
	}

	Rhombus(int a_, int A_, int B_) :Parallelogram(a_, a_, A_, B_)
	{
		name = "Ромб";
	}


	bool check() override {
		if (a == b && Parallelogram::check()) {
			return true;
		}
		return false;
	}
};


int main() {
	setlocale(LC_ALL, "ru");

	Figure f;
	f.print_info();
	std::cout << "\n";

	Triangle t1(10, 20, 30, 50, 60, 70);
	t1.print_info();

	Rect_Triangle t2(10, 20, 30, 50, 60);
	t2.print_info();

	Rect_Triangle t3(10, 20, 30, 50, 40);
	t3.print_info();


	Iso_Triangle t(10, 20, 50, 60);
	t.print_info();

	Equ_Triangle e(30);
	e.print_info();

	Quadrangle q1(10, 20, 30, 40, 50, 60, 70, 80);
	q1.print_info();

	Rectangle q2(10, 20);
	q2.print_info();

	Square q3(20);
	q3.print_info();

	Parallelogram q4(20, 30, 30, 40);
	q4.print_info();

	Rhombus r(30, 30, 40);
	r.print_info();
}
