#pragma once
#include "Pair.h"
#include <iostream>
class Complex: public Pair
{
public:
	Complex();
	Complex(double _a, double _b);
	Complex(const Pair& _pair);
	Complex(const Complex& _complex);
	~Complex() {};
	friend Complex operator*(const Complex& cn, const Complex& cn2);
	friend Complex operator/(const Complex& cn, const Complex& cn2);
	friend std::ostream& operator<<(std::ostream& os, const Complex& c);
	friend std::istream& operator>>(std::istream& is, Complex& c);
};