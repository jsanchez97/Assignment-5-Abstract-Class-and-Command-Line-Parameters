/******************************************************************************
* PROGRAMMED BY  : Jesus Sanchez
* STUDENT ID     : 1024834
* CLASS          : MW: 1:30pm - 2:50pm
* ASSIGNMENT #5  : Abstract Classes and Command Line Parameters
******************************************************************************/

#include "Square.h"

void PrintPerimeter(Square square)
{
	cout << fixed << setprecision(2) << endl
		 << "Perimeter: " << square.CalcPerimeter() << endl;
}

void PrintArea(Square square)
{
	cout << fixed << setprecision(2)
		 << "Area: " << square.CalcArea() << endl << endl;
}

Square::Square() : side(0)
{
}

Square::Square(float side)
{
	this->side = side;
}

Square::~Square()
{
}

void Square::SetSides(float side)
{
	this->side = side;
}

float Square::CalcPerimeter()
{
	return side * 4;
}

float Square::CalcArea()
{
	return side * side;
}
