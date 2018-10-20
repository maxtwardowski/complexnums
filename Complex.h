#pragma once

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
	Complex &operator- (const Complex & s);
	Complex &operator* (const Complex & s);
	Complex &operator/ (const Complex & s);
	Complex &operator+= (const Complex & s);
	Complex &operator-= (const Complex & s);
	Complex &operator*= (const Complex & s);
	Complex &operator/= (const Complex & s);
	bool operator== (const Complex s);
	Complex &operator<< (const Complex & s);
};