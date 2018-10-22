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
	cout << "f = a + b + c -->" << f << endl;

	Complex d;
	d = a * c;
	cout << "d = a * c --> " << d << endl;

	b -= c;
	cout << "b -= c --> " << b << endl;

	Complex x(1, 1), y(2, 2), z;

	x *= y;
	cout << "x *= y --> " << x << endl;

	Complex q(10, 10), w(5, 5), r;
	r = q / w;
	cout << "r = q / w --> " << r << endl;

	// special cases
	Complex a(1, 2), b(3, 4), c(5, 6);
	a += b += c;
	cout << "a += b += c" << endl;
	cout << "a --> " << a << endl; // should be a = 9 + 12i
	cout << "b --> " << b << endl; // should be b = 8 + 10i
	cout << "c --> " << c << endl; // should be c = 5 + 6i*/

	Complex d(1, 2), e(3, 4), f(5, 6);
	d *= e *= f;
	cout << "d += e += f" << endl;
	cout << "d --> " << d << endl; // should be d = -85 + 20i
	cout << "e --> " << e << endl; // should be e = -9 + 38i
	cout << "f --> " << f << endl; // should be f = 5 + 6i*/

	Complex g(7, 8), h, i;
	h = g + 7;
	i = 7 + g;
	cout << "h = g + 7" << endl;
	cout << "h --> " << h << endl;
	cout << "i = 7 + g" << endl;
	cout << "i --> " << i << endl;

	Complex j(9, 10), k, l;
	k = j * 5;
	l = 5 * j;
	cout << "k = j * 5" << endl;
	cout << "k --> " << k << endl;
	cout << "l = 5 * j" << endl;
	cout << "l --> " << l << endl;
	return 0;
}

