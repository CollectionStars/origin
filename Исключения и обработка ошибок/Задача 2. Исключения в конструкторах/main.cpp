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
	try {
		Triangle t1(10,20,30, 50, 60, 70);
		std::cout << "����������� (�������: 10,20,30; ����: 50,60,70) ������\n";
	}
	catch (Error e) {
		std::cout <<"����������� (�������: 10,20,30; ����: 50,60,70) �� ������. �������: "<< e.what() << "\n";
	}

	try {
		Rect_Triangle t2(10, 20, 30, 50, 60);
		std::cout << "������������� ����������� (�������: 10,20,30; ����: 50,60,90)  ������.\n";
	}
	catch (Error e) {
		std::cout << "������������� ����������� (�������: 10,20,30; ����: 50,60,90) �� ������. �������: " << e.what() << "\n";
	}


	try {
		Iso_Triangle t(10, 20, 50, 60);
		std::cout << "�������������� ����������� (�������: 10,20,10; ����: 50,60,50) ������\n";

	}
	catch (Error e) {
		std::cout << "�������������� ����������� (�������: 10,20,10; ����: 50,60,50) �� ������. �������: " << e.what() << "\n";
	}

	try {
		Equ_Triangle e(30);
		std::cout << "�������������� ����������� (�������: 30,30,30; ����: 60,60,60) ������\n";
	}
	catch (Error e) {
		std::cout << "�������������� ����������� (�������: 30,30,30; ����: 60,60,60) �� ������. �������: " << e.what() << "\n";
	}

	try {
		Quadrangle q1(10, 20, 30, 40, 50, 60, 70, 80);
		std::cout << "��������������� (�������: 10,20,30,40; ����: 50,60,70,80) ������\n";
	}
	catch (Error e) {
		std::cout <<"��������������� (�������: 10,20,30,40; ����: 50,60,70,80) �� ������. �������: "<< e.what() << "\n";
	}

	try {
		Rectangle q2(10, 20);
		std::cout << "������������� (�������: 10,20,10,20; ����: 90,90,90,90) ������\n";
	}
	catch (Error e) {
		std::cout << "������������� (�������: 10,20,10,20; ����: 90,90,90,90) �� ������. �������: " << e.what() << "\n";
	}

	try {
		Square q3(20);
		std::cout << "������� (�������: 30,30,30,30; ����: 90,90,90,90) ������\n";
	}
	catch (Error e) {
		std::cout << "������� (�������: 30,30,30,30; ����: 90,90,90,90) �� ������. �������: " << e.what() << "\n";
	}
	try {
		Parallelogram q4(20, 30, 30, 40);
		std::cout << "�������������� (�������: 20,30,20,30; ����: 30,40,30,40) ������\n";
	}
	catch (Error e) {
		std::cout << "�������������� (�������: 20,30,20,30; ����: 30,40,30,40) �� ������. �������: " << e.what() << "\n";
	}

	try {
		Rhombus r(30, 30, 40);
		std::cout << "���� (�������: 30,30,30,30; ����: 30,40,30,40) ������\n";
	}
	catch (Error e) {
		std::cout << "���� (�������: 30,30,30,30; ����: 30,40,30,40) �� ������. �������: " << e.what() << "\n";
	}
}