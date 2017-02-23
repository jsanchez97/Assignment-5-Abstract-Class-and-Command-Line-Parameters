/******************************************************************************
* PROGRAMMED BY  : Jesus Sanchez
* STUDENT ID     : 1024834
* CLASS          : MW: 1:30pm - 2:50pm
* ASSIGNMENT #5  : Abstract Classes and Command Line Parameters
******************************************************************************/

#include "Square.h"

/******************************************************************************
 * PrintPerimeter
 * ----------------------------------------------------------------------------
 * This friend function prints the perimeter of a Square object by having the
 * object that was passed in call the CalcPerimeter function.
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 *     square - Side of Square must be defined.
 *
 * POST-CONDITIONS:
 *     Prints the perimeter of a Square object.
 *****************************************************************************/
void PrintPerimeter(Square square)
{
	cout << fixed << setprecision(2) << endl
		 << "Perimeter: " << square.CalcPerimeter() << endl;
}

/******************************************************************************
 * PrintArea
 * ----------------------------------------------------------------------------
 * This friend function prints the area of a Square object by having the
 * object that was passed in call the CalcArea function.
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 *     square - Side of Square must be defined.
 *
 * POST-CONDITIONS:
 *     Prints the area of a Square object.
 *****************************************************************************/
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

/******************************************************************************
 * CalcPerimeter
 * ----------------------------------------------------------------------------
 * This function calculates the perimeter of a Square object by multiplying the
 * side by 4 and returns the result.
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 *     There are no pre-conditions.
 *
 * POST-CONDITIONS:
 *     Calculates the area of a Triangle object.
 *****************************************************************************/
float Square::CalcPerimeter()
{
	return side * 4;
}

/******************************************************************************
 * CalcArea
 * ----------------------------------------------------------------------------
 * This function calculates the area of a Square object by squaring the side
 * and returns the result.
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 *     There are no pre-conditions.
 *
 * POST-CONDITIONS:
 *     Calculates the area of a Square object.
 *****************************************************************************/
float Square::CalcArea()
{
	return pow(side, 2);
}
