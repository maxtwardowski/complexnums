#include <iostream>
#include <math.h>
#include "Complex.h"

using namespace std;

Complex::Complex() {
	this->real = 0;
	this->imag = 0;
}

Complex::Complex(double real, double imag) {
	this->real = real;
	this->imag = imag;
}

Complex::Complex(double real) {
	this->real = real;
	this->imag = 0;
}

Complex::~Complex() {
	//cout << "Object has been destroyed" << endl;
}

double Complex::getReal() {
	return this->real;
}

double Complex::getImag() {
	return this->imag;
}

double Complex::getAmp() {
	return sqrt(pow(this->real, 2) + pow(this->imag, 2));
}

double Complex::getPhase() {
	return pow(tan(this->imag / this->real), -1);
}

Complex Complex::operator+ (const Complex & s) {
	return Complex(*this) += s;
}

Complex Complex:: operator+(double num) {
	return Complex(this->real + num, this->imag);
}

Complex Complex::operator- (const Complex & s) {
	return Complex(*this) -= s;
}

Complex Complex::operator* (const Complex & s) {
	return Complex(*this) *= s;
}

Complex Complex::operator/ (const Complex & s) {
	return Complex(*this) /= s;
}

Complex & Complex::operator+= (const Complex & s) {
	this->real += s.real;
	this->imag += s.imag;
	return *this;
}

Complex & Complex::operator-= (const Complex & s) {
	this->real -= s.real;
	this->imag -= s.imag;
	return *this;
}

Complex & Complex::operator*= (const Complex & s) {
	double newreal = this->real * s.real - this->imag * s.imag;
	double newimag = this->real * s.imag + this->imag * s.real;
	this->real = newreal;
	this->imag = newimag;
	return *this;
}

Complex & Complex::operator/= (const Complex & s) {
	Complex conjugate = Complex(s.real, -s.imag);
	Complex numerator = Complex(*this) * conjugate;
    double denominator = s.real * s.real + s.imag * s.imag;
    this->real = numerator.real / denominator;
    this->imag = numerator.imag / denominator;
    return *this;
}

bool Complex::operator== (const Complex s) {
	return (s.real == this->real && s.imag == this->imag) ? true : false;
}

void Complex::print() {
	cout << "Re: " << this->getReal() << ", Im: " << this->getImag() << endl;
}