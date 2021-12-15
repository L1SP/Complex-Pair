#include "Complex.h"
#include <iostream>
#include <string>
Complex::Complex() {
	a = 0;
	b = 0;
}
Complex::Complex(double _a, double _b) {
	a = _a;
	b = _b;
}
Complex::Complex(const Pair& _pair) {
	a = _pair.getFirst();
	b = _pair.getSecond();
}
Complex::Complex(const Complex& _complex) {
	a = _complex.a;
	b = _complex.b;
}
Complex operator*(const Complex& cn, const Complex& cn2){
	return Complex(cn.a * cn2.a - cn.b * cn2.b, cn.a * cn2.b + cn2.a * cn.b);
}
Complex operator/(const Complex& cn, const Complex& cn2){
	return Complex((cn.a * cn2.a + cn.b * cn2.b) / (cn2.a * cn2.a + cn2.b * cn2.b), (cn.b * cn2.a - cn.a * cn2.b) / (cn2.a * cn2.a + cn2.b * cn2.b));
}
std::ostream& operator<<(std::ostream& os, const Complex& c) {
	if (c.a == 0) {
		if (c.b == 0)
			os << 0 << '\n';
		else
			os << c.b << "i\n";
	}
	else if (c.b == 0)
		os << c.a << '\n';
	else {
		if (c.b > 0)
			os << c.a << "+" << c.b << "i\n";
		else
			os << c.a << c.b << "i\n";
	}
	return os;
}
std::istream& operator>>(std::istream& is, Complex& c) {
	std::string comp;
	is >> comp;
	std::string first="";
	std::string second="";
	for (unsigned int i = 1; i < comp.length(); i++) {
		if (comp[i] == '+' || comp[i] == '-') {
			first = comp.substr(0, i);
			second = comp.substr(i, comp.length() - i - 1);
			break;
		}
	}
	if (first == "" && comp[comp.length() - 1] != 'i') {
		first = comp;
		second = "0";
	}
	else if (first == "" && comp[comp.length() - 1] == 'i') {
		first = "0";
		second = comp.substr(0, comp.length() - 1);
	}
	c.a = std::stod(first);
	c.b = std::stod(second);
	return is;
}