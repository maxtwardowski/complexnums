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
	cout << "Object has been destroyed" << endl;
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

Complex & Complex::operator+ (const Complex & s) {
	return *this;
}

Complex & Complex::operator- (const Complex & s) {
	return *this;
}

Complex & Complex::operator* (const Complex & s) {
	return *this;
}

Complex & Complex::operator/ (const Complex & s) {
	return *this;
}

Complex & Complex::operator+= (const Complex & s) {
	return *this;
}

Complex & Complex::operator-= (const Complex & s) {
	return *this;
}

Complex & Complex::operator*= (const Complex & s) {
	return *this;
}

Complex & Complex::operator/= (const Complex & s) {
	return *this;
}

bool Complex::operator== (const Complex s) {
	if (s.real == this->real && s.imag == this->imag)
		return true;
	return false;
}

Complex & Complex::operator<< (const Complex & s) {
	return *this;
}