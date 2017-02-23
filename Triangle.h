/******************************************************************************
* PROGRAMMED BY  : Jesus Sanchez
* STUDENT ID     : 1024834
* CLASS          : MW: 1:30pm - 2:50pm
* ASSIGNMENT #5  : Abstract Classes and Command Line Parameters
******************************************************************************/

#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include "Shape.h"

class Triangle : public Shape
{
	friend void PrintPerimeter(Triangle triangle);
	friend void PrintArea(Triangle triangle);

public:
	Triangle();
	Triangle(float side1, float side2, float side3);
	~Triangle();
	void SetSides(float side1, float side2, float side3);
	float CalcPerimeter();
	float CalcArea();

private:
	float side1;
	float side2;
	float side3;
};

#endif
