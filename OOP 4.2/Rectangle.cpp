//Rectangle.cpp
#include "Rectangle.h"

Rectangle::Rectangle()
    :a(0), b(0)
{
}

Rectangle::Rectangle(int a, int b)
    : a(a), b(b)
{
}

double Rectangle::Perimeter()
{
    double P = 2 * (a + b * 1.0);
    return P;
}

double Rectangle::Square()
{
    double S = 1.0 * a* b;
    return S;
}

ostream& Rectangle::Print(ostream& out) const
{
    out << "Wide: " << a << endl;
    out << "Lenth: " << b << endl;
    out << "Rectangle is visible." << endl;
    return out;
}
#include "Rectangle.h"
