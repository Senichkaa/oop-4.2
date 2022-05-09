//Trapeze.cpp
#include "Trapeze.h"

Trapeze::Trapeze()
	:a(0), b(0), c(0), d(0)
{
}

Trapeze::Trapeze(int a, int b, int c, int d)
	: a(a), b(b), c(c), d(d)
{
}

double Trapeze::Perimeter()
{
	double P = (a + b + c + d);
	return P;
}

double Trapeze::Square()
{
	int p = (a + b + c + d) / 2;
	double S = (a + b) / abs(a - b) * sqrt((p - a) * (p - b) * (p - a - c)
		* (p - a - d));
	return S;
}

ostream& Trapeze::Print(ostream& out) const
{
	out << "Basic1: " << a << endl;
	out << "Basic2: " << b << endl;
	out << "Side1: " << c << endl;
	out << "Side2: " << d << endl;
	out << "Trapeze is visible." << endl;
	return out;
}

