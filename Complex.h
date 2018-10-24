#pragma once
#include <math.h>
using namespace std;

class Complex {
private:
	double real, imag;
public:
	Complex();
	Complex(double real, double imag);
	Complex(double real);
	~Complex();
	double getReal();
	double getImag();
	double getAmp();
	double getPhase();
	Complex operator+ (const Complex & s);
	Complex operator+(double num);
	Complex operator- (const Complex & s);
	Complex operator- (double num);
	Complex operator* (const Complex & s);
	Complex operator* (double num);
	Complex operator/ (const Complex & s);
	Complex operator/ (double num);
	Complex &operator+= (const Complex & s);
	Complex &operator-= (const Complex & s);
	Complex &operator*= (const Complex & s);
	Complex &operator/= (const Complex & s);
	bool operator== (const Complex s);
	Complex getConjugate() const;
	friend ostream & operator << (ostream & s, const Complex & c) {
		s << "Re: " << c.real << ", Im: " << c.imag;
		return s;
	}
	friend Complex operator+ (double num, const Complex & s) {
		return Complex(s.real + num, s.imag);
	}
	friend Complex operator- (double num, const Complex & s) {
		return Complex(num - s.real, -s.imag);
	}
	friend Complex operator* (double num, const Complex & s) {
		return Complex(s.real * num, s.imag * num);
	}
	friend Complex operator/ (double num, const Complex & s) {
		Complex numerator = num * s.getConjugate();
		double denominator = pow(s.real, 2) + pow(s.imag, 2);
		return Complex(
			numerator.real / denominator,
			numerator.imag / denominator
		);
	}
};