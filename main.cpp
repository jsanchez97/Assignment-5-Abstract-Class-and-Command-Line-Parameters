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
 *    side                : Length of sides of a square.
 *    side1, side2, side3 : Lengths of sides of a triangle.
 *
 * OUTPUT:
 * 	  Perimeter and area of both shapes.
 *
 *****************************************************************************/

void PrintHeader(string labName, char labType, int labNum);

int main(int argc, char *argv[])
{
	Square square;     // Square object.
	Triangle triangle; // Triangle object.

	float side;                // Length of sides of a Square.
	float side1, side2, side3; // Length of sides of a Triangle object.

	PrintHeader("Abstract Classes and Command Line Parameters", 'A', 5);

	cout << setw(30) << "----- PART 1 -----" << endl << endl;

	// Prompts the user to enter the length of a square's sides and ensures that
	// the value entered is positive.
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

	// Sets the length of the square's sides.
	square.SetSides(side);

	// Prints the perimeter of the square.
	PrintPerimeter(square);
	PrintArea(square);

	// Prompts the user for the lengths of the sides of the triangle and ensures
	// that the values entered are positive at each step.
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

	// Sets the values of the sides of the triangle.
	triangle.SetSides(side1, side2, side3);

	// Prints the perimeter and area of the triangle.
	PrintPerimeter(triangle);
	PrintArea(triangle);

	cout << setw(30) << "----- PART 2 -----" << endl << endl;

	cout << "My name is ";

	// Offsets the index of argv and outputs the remaining parameters in the
	// command line.
	for(int index = 1; index < argc; index++)
	{
		cout << argv[index];

		if(index < argc - 1)
		{
			cout << " ";
		}
		else
		{
			cout << "." << endl << endl;
		}
	}

	// Offsets the address that argv is pointing to, dereferences that, and then
	// offsets the address one more time and dereferences that to print the
	// second character in the string it is pointing to.
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
