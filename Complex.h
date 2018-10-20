#pragma once

class Complex {
private:
	double real, imag;
public:
	Complex();
	~Complex();
	double getReal();
	double getImag();
	void getAmp();
	void getPhase();
	Complex &operator+ (const Complex & s);
	Complex &operator- (const Complex & s);
	Complex &operator* (const Complex & s);
	Complex &operator/ (const Complex & s);
	Complex &operator+= (const Complex & s);
	Complex &operator-= (const Complex & s);
	Complex &operator*= (const Complex & s);
	Complex &operator/= (const Complex & s);
	Complex &operator== (const Complex & s);
	Complex &operator<< (const Complex & s);
}