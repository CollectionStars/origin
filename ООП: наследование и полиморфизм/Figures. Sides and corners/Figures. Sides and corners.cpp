#include <iostream>
#include <string>

class Figure {
public:
	void print() {
		std::cout << name << "\n";
		std::cout << "Стороны: ";
		print_sides();
		std::cout << "Углы: ";
		print_angles();
	}

	virtual void print_angles() {}
	virtual void print_sides() {}


	std::string get_name() {
		return name;
	}
protected:
	std::string name;

	Figure(std::string n) {
		name = n;
	}

};


class Triangle : public Figure {
public:


	Triangle(int a_, int b_, int c_, int A_, int B_, int C_)
		:a(a_), b(b_), c(c_), A(A_), B(B_), C(C_), Figure("Треугольник:") {}

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


	void print_angles() override {
		std::cout << "A=" << A << " B=" << B << " C=" << C << "\n\n";
	}

	void print_sides() override {
		std::cout << "a=" << a << " b=" << b << " c=" << c << "\n";
	}

protected:
	//стороны
	int a, b, c;
	//углы
	int A, B, C;

};

//равнобедренный
//a==c, A==C
class Iso_Triangle :public Triangle {
public:
	Iso_Triangle(int a_, int b_, int A_, int B_) :Triangle(a_, b_, a_, A_, B_, A_)
	{
		name = "Равнобедренный треугольник:";
	}
};

//равносторонний
class Equ_Triangle :public Iso_Triangle {
public:
	Equ_Triangle(int a_) :Iso_Triangle(a_, a_, 60, 60) {
		name = "Равносторонний треугольник:";

	}
};


//прямоугольный треугольник
class Rect_Triangle :public Triangle {
public:

	Rect_Triangle(int a_, int b_, int c_, int A_, int B_) :Triangle(a_, b_, c_, A_, B_, 90)
	{
		name = "Прямоугольный треугольник:";
	}
};


class Quadrangle :public Figure {
public:

	Quadrangle(int a_, int b_, int c_, int d_, int A_, int B_, int C_, int D_)
		:a(a_), b(b_), c(c_), d(d_), A(A_), B(B_), C(C_), D(D_), Figure("Четырехугольник:") {}

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

	void print_sides() override {
		std::cout << "a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
	}
	void print_angles() override {
		std::cout << "A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n\n";
	}

protected:
	//стороны
	int a, b, c, d;
	//углы
	int A, B, C, D;
};


//a==c b==d, A==C B===D
class Parallelogram :public Quadrangle {
public:
	Parallelogram(int a_, int b_, int A_, int B_) :Quadrangle(a_, b_, a_, b_, A_, B_, A_, B_)
	{
		name = "Параллелограмм:";
	}

};

//a==c, b==d
class Rectangle :public Parallelogram {
public:
	Rectangle(int a_, int b_) :Parallelogram(a_, b_, 90, 90)
	{
		name = "Прямоугольник:";
	}
};


//a==b==c==d 90,90,90,90
class Square :public Rectangle {
public:
	Square(int a_) :Rectangle(a_, a_)
	{
		name = "Квадрат:";
	}
};

//a==b==c==d, A==C B==D
class Rhombus : public Parallelogram {
public:
	Rhombus(int a_, int A_, int B_) :Parallelogram(a_, a_, A_, B_)
	{
		name = "Ромб:";
	}
};


int main() {
	setlocale(LC_ALL, "ru");

	Triangle t1(10, 20, 30, 50, 60, 70);
	t1.print();

	Rect_Triangle t2(10, 20, 30, 50, 60);
	t2.print();

	Iso_Triangle t(10, 20, 50, 60);
	t.print();

	Equ_Triangle e(30);
	e.print();

	Quadrangle q1(10, 20, 30, 40, 50, 60, 70, 80);
	q1.print();

	Rectangle q2(10, 20);
	q2.print();

	Square q3(20);
	q3.print();

	Parallelogram q4(20, 30, 30, 40);
	q4.print();

	Rhombus r(30, 30, 40);
	r.print();
}
