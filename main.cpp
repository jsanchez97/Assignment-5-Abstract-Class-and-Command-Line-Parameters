/******************************************************************************
* AUTHOR        : Jesus Sanchez
* STUDENT ID    : 1024834
* ASSIGNMENT #5 : Abstract Classes and Command Line Parameters
* CLASS         : CS1C
* SECTION       : MW: 1:30pm
* DUE DATE      : 02/27/2017
* ****************************************************************************/

#include "Square.h"
#include "Triangle.h"

/******************************************************************************
 * ABSTRACT CLASSES AND COMMAND LINE PARAMETERS
 * ----------------------------------------------------------------------------
 * This program uses a Square class and a Triangle class that are derived from
 * an abstract class called Shape. The user is prompted to enter the sides of a
 * Square and a Triangle object respectively and the perimeter and area of the
 * shape are printed after the dimensions are entered. Then, the program uses
 * the second and third parameters in the command line which are previously
 * defined as a first and last name and prints the entire name and then the
 * second letter of each name.
 * ----------------------------------------------------------------------------
 * INPUT:
 *    side  : Length of sides of a square.
 *    side1 : Length of first side of a triangle.
 *    side2 : Length of first side of a triangle.
 *    side3 : Length of first side of a triangle.
 *
 * OUTPUT:
 * 	  Perimeter and area of both shapes.
 *
 *****************************************************************************/

void PrintHeader(string labName, char labType, int labNum);

int main(int argc, char *argv[])
{
	Square square;
	Triangle triangle;

	float side;                // Length of sides of a Square.
	float side1, side2, side3; // Length of sides of a Triangle object.

	PrintHeader("Abstract Classes and Command Line Parameters", 'A', 5);

	cout << setw(30) << "----- PART 1 -----" << endl << endl;

	do
	{
		cout << "Enter the length of a side of the square: ";
		cin  >> side;
		cin.ignore(1000, '\n');

		if(side <= 0)
		{
			cout << endl << "Side cannot be negative!" << endl << endl;
		}
	}while(side <= 0);

	square.SetSides(side);

	PrintPerimeter(square);
	PrintArea(square);

	do
	{
		cout << "Enter the length of the first side of the triangle: ";
		cin  >> side1;
		cin.ignore(1000, '\n');

		if(side1 <= 0)
		{
			cout << endl << "Side cannot be negative!" << endl << endl;
		}
	}while(side1 <= 0);

	do
	{
		cout << "Enter the length of the second side of the triangle: ";
		cin  >> side2;
		cin.ignore(1000, '\n');

		if(side2 <= 0)
		{
			cout << endl << "Side cannot be negative!" << endl << endl;
		}
	}while(side2 <= 0);

	do
	{
		cout << "Enter the length of the third side of the triangle: ";
		cin  >> side3;
		cin.ignore(1000, '\n');

		if(side3 <= 0)
		{
			cout << endl << "Side cannot be negative!" << endl << endl;
		}
	}while(side3 <= 0);

	triangle.SetSides(side1, side2, side3);

	PrintPerimeter(triangle);
	PrintArea(triangle);

	cout << setw(30) << "----- PART 2 -----" << endl << endl;

	cout << "My name is ";

	for(int index = 1; index < argc; index++)
	{
		cout << argv[index];

		if(index < argc - 1)
		{
			cout << " ";
		}
		else
		{
			cout << "." << endl;
		}
	}

	cout << "Second Letter in First Name: " << *(*(argv + 1) + 1) << endl
		 << "Second Letter in Last Name: " << *(*(argv + 2) + 1) << endl;

	return 0;
}

/******************************************************************************
 * PrintHeader
 * ----------------------------------------------------------------------------
 * This function prints the project header.
 * ----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 *     labName - Lab Name has to be preciously defined
 *     labType -  Lab Type has to be preciously defined
 *     labNum  - Lab Number has to be preciously defined
 *
 * POST-CONDITIONS:
 *     This function will print the class heading.
 *****************************************************************************/
void PrintHeader(string labName, char labType, int labNum)
{
	cout << left;
	cout << "***************************************************************\n";
	cout << "* PROGRAMMED BY  : Jesus Sanchez";
	cout << "\n* " << setw(15) << "STUDENT ID" << ": 1024834" ;
	cout << "\n* " << setw(15) << "CLASS" << ": MW: 1:30pm - 2:50pm";
	cout << "\n* ";

	if(toupper(labType) == 'L')
	{
		cout << "LAB #" << setw(9);
	}
	else
	{
		cout << "ASSIGNMENT #" << setw(2);
	}

	cout << labNum << " : " << labName;
	cout << "\n***************************************************************\n\n";
	cout << right;
}
