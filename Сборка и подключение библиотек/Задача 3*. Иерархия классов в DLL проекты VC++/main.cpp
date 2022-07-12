#include <iostream>
#include <string>

#include "Figure.h"
#include "Triangle.h"
#include "Iso_Triangle.h"
#include "Equ_Triangle.h"
#include "Rect_Triangle.h"
#include "Quadrangle.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include "Square.h"
#include "Rhombus.h"


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