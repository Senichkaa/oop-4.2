//Circle.cpp
#include "Circle.h"

Circle::Circle()
	:r(0)
{
}

Circle::Circle(int r)
	: r(r)
{
}

double Circle::Perimeter()
{
	const double PI = atan(1) * 4;
	double P = 2 * PI * r;
	return P;
}

double Circle::Square()
{
	const double PI = atan(1) * 4;
	double S = PI * r * r;
	return S;
}

ostream& Circle::Print(ostream& out) const
{
	out << "Raduis= " << r << endl;
	out << "Circle is visiable." << endl;
	return out;
}
