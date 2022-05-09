//Figure.h
#pragma once
#include <iostream>
#include <typeinfo>

using namespace std;

class Interface
{
public:
	virtual double Perimeter() = 0;
	virtual double Square() = 0;

	virtual ostream& Print(ostream& out) const = 0;
};

