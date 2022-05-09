//Trapeze.h
#pragma once
#include "Figure.h"
class Trapeze : public Interface 
{
private:
	int a;
	int b;
	int c;
	int d;
public:
	Trapeze();
	Trapeze(int a, int b, int c, int d);

	int get_a() { return a; }
	int get_b() { return b; }
	int get_c() { return c; }
	int get_d() { return d; }

	void set_a(int value) { a = value; }
	void set_b(int value) { b = value; }
	void set_c(int value) { c = value; }
	void set_d(int value) { d = value; }

	virtual double Perimeter();
	virtual double Square();

	virtual ostream& Print(ostream& out) const;
};

