//Source.cpp
#include "Circle.h"
#include "Rectangle.h"
#include "Trapeze.h"

ostream& operator << (ostream& out, const Interface& r)
{
	return r.Print(out);
}
int main()
{
	Circle A(4);
	cout << A;
	cout << "Perimeter of Circle: " << A.Perimeter() << endl;
	cout << "Square of Circle: " << A.Square() << endl;
	cout << '\n';

	Rectangle B(4, 5);
	cout << B;
	cout << "Perimeter of Rectangle: " << B.Perimeter() << endl;
	cout << "Square of Rectangle: " << B.Square() << endl;
	cout << '\n';

	Trapeze C(7, 5, 3, 4);
	cout << C;
	cout << "Perimeter of Trapeze: " << C.Perimeter() << endl;
	cout << "Square of Trapeze: " << C.Square() << endl;
	cout << '\n';

	Interface* pa = new Circle();
	Interface* pb = new Rectangle();
	Interface* pc = new Trapeze();
	cout << '\n';
	cout << typeid(pa).name() << endl;
	cout << typeid(*pa).name() << endl;
	cout << typeid(pb).name() << endl;
	cout << typeid(*pb).name() << endl;
	cout << typeid(pc).name() << endl;
	cout << typeid(*pc).name() << endl;
	cout << '\n';

	delete pa;
	delete pb;
	delete pc;

	Interface* N[3];

	N[0] = &A; //circle
	N[1] = &B; //rectangle
	N[2] = &C; //trapeze

	cout << '\n';
	cout << "Perimetr of N[0](circle): " << N[0]->Perimeter() << endl;
	cout << "Perimetr of N[1](rect.): " << N[1]->Perimeter() << endl;
	cout << "Square of N[2](trapeze): " << N[2]->Square() << endl;
}