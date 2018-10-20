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

	Complex a(5, 3), b(5, 3);

	Complex c;
	c = a + b;
	cout << "C real: " << c.getReal() << endl;
	cout << "C imag: " << c.getImag() << endl;
	return 0;
}


