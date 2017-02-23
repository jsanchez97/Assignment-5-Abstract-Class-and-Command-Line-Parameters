/******************************************************************************
* PROGRAMMED BY  : Jesus Sanchez
* STUDENT ID     : 1024834
* CLASS          : MW: 1:30pm - 2:50pm
* ASSIGNMENT #5  : Abstract Classes and Command Line Parameters
******************************************************************************/

#ifndef SHAPE_H_
#define SHAPE_H_

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

class Shape
{
public:
	Shape();
	virtual ~Shape();
	virtual float CalcPerimeter() = 0;
	virtual float CalcArea() = 0;
};

#endif /* SHAPE_H_ */
