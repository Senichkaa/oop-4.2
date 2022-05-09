//Circle.h
#pragma once
#include "Figure.h"
class Circle : public Interface
{
private:
	int r;
public:
	Circle();
	Circle(int r);

	int get_r() { return r; }
	void set_R(int value) { r = value; }

	virtual double Perimeter();
	virtual double Square();
	virtual ostream& Print(ostream& out) const;
};

