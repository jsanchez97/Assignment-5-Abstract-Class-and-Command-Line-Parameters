/******************************************************************************
* PROGRAMMED BY  : Jesus Sanchez
* STUDENT ID     : 1024834
* CLASS          : MW: 1:30pm - 2:50pm
* ASSIGNMENT #5  : Abstract Classes and Command Line Parameters
******************************************************************************/

#ifndef SQUARE_H_
#define SQUARE_H_

#include "Shape.h"

class Square : public Shape
{
public:
	Square();
	Square(float side);
	~Square();
	void SetSides(float side);
	float CalcPerimeter();
	float CalcArea();

private:
	float side;
};

void PrintPerimeter(Square square);
void PrintArea(Square square);

#endif /* SQUARE_H_ */
