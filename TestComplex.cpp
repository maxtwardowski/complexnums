#include <iostream>
#include "Complex.h"
using namespace std;


int main(int argc, char const *argv[]) {
	Complex a(1, 2), b(3, 4), c(5, 6);
	a += b += c;
	cout << "a += b += c" << endl;
	cout << "a --> " << a << endl; // should be a = 9 + 12i
	cout << "b --> " << b << endl; // should be b = 8 + 10i
	cout << "c --> " << c << endl << endl; // should be c = 5 + 6i

	Complex d(1, 2), e(3, 4), f(5, 6);
	d *= e *= f;
	cout << "d += e += f" << endl;
	cout << "d --> " << d << endl; // should be d = -85 + 20i
	cout << "e --> " << e << endl; // should be e = -9 + 38i
	cout << "f --> " << f << endl << endl; // should be f = 5 + 6i*/

	Complex g(7, 8), h, i;
	h = g + 7;
	i = 7 + g;
	cout << "h = g + 7" << endl;
	cout << "h --> " << h << endl;
	cout << "i = 7 + g" << endl;
	cout << "i --> " << i << endl << endl;

	Complex j(9, 10), k, l;
	k = j * 5;
	l = 5 * j;
	cout << "k = j * 5" << endl;
	cout << "k --> " << k << endl;
	cout << "l = 5 * j" << endl;
	cout << "l --> " << l << endl << endl;

	Complex m(11, 12), n, o;
	n = m / 9;
	o = 9 / m;
	cout << "n = m / 9" << endl;
	cout << "n --> " << n << endl;
	cout << "o = 9 / m" << endl;
	cout << "o --> " << o << endl << endl;

	Complex p(13, 14), r, s;
	r = p - 10;
	s = 10 - p;
	cout << "r = p - 13" << endl;
	cout << "r --> " << r << endl;
	cout << "s = 13 - p" << endl;
	cout << "s --> " << s << endl;
	return 0;
}

