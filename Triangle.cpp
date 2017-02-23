/******************************************************************************
* PROGRAMMED BY  : Jesus Sanchez
* STUDENT ID     : 1024834
* CLASS          : MW: 1:30pm - 2:50pm
* ASSIGNMENT #5  : Abstract Classes and Command Line Parameters
******************************************************************************/

#include "Triangle.h"

void PrintPerimeter(Triangle triangle)
{
	cout << fixed << setprecision(2) << endl
		 << "Perimeter: " << triangle.CalcPerimeter() << endl;
}

void PrintArea(Triangle triangle)
{
	cout << fixed << setprecision(2)
		 << "Area: " << triangle.CalcArea() << endl << endl;
}

Triangle::Triangle() : side1(0), side2(0), side3(0)
{
}

Triangle::Triangle(float side1, float side2, float side3)
{
	this->side1 = side1;
	this->side2 = side2;
	this->side3 = side3;
}

Triangle::~Triangle()
{
}

void Triangle::SetSides(float side1, float side2, float side3)
{
	this->side1 = side1;
	this->side2 = side2;
	this->side3 = side3;
}

float Triangle::CalcPerimeter()
{
	return side1 + side2 + side3;
}

float Triangle::CalcArea()
{
	float s = (side1 + side2 + side3) / 2.0;

	return sqrt(s * (s - side1) * (s - side2) * (s - side3));
}
