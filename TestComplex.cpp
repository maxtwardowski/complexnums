#include <iostream>
#include "Complex.h"
using namespace std;


int main(int argc, char const *argv[]) {
	/*
		a += b += c
		a *= b *= c
		a + 7
		7 + a
		b * 5
		5 * b
	*/

	/*Complex a(7, 1), b(5, 3), c(3, 6), f;

	cout << "a == a: " << (a == a) << endl;
	cout << "a == b: " << (a == b) << endl;

	f = a + b + c;
	cout << "f = a + b + c -->";
	cout << f << endl;

	Complex d;
	d = a * c;
	cout << "d = a * c --> ";
	cout << d << endl;

	b -= c;
	cout << "b -= c --> ";
	cout << b << endl;

	Complex x(1, 1), y(2, 2), z;

	x *= y;
	cout << "x *= y --> ";
	cout << x << endl;

	Complex q(10, 10), w(5, 5), r;
	r = q / w;
	cout << "r = q / w --> ";
	cout << r << endl;*/

	// special cases
	Complex a(1, 2), b(3, 4), c(5, 6);
	a += b += c;
	cout << "a += b += c" << endl;
	cout << "a --> ";
	cout << a << endl; // should be a = 9 + 12i
	cout << "b --> ";
	cout << b << endl; // should be b = 8 + 10i
	cout << "c --> ";
	cout << c << endl; // should be c = 5 + 6i*/

	Complex d(1, 2), e(3, 4), f(5, 6);
	d *= e *= f;
	cout << "d += e += f" << endl;
	cout << "d --> ";
	cout << d << endl; // should be d = -85 + 20i
	cout << "e --> ";
	cout << e << endl; // should be e = -9 + 38i
	cout << "f --> ";
	cout << f << endl; // should be f = 5 + 6i*/

	Complex g(7, 8), h;
	h = g + 7;
	cout << "h = g + 7" << endl;
	cout << "h --> ";
	cout << h << endl;


	return 0;
}

