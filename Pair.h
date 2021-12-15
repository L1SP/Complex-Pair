#pragma once
#include <iostream>
class Pair
{
protected:
	double a;
	double b;
public:
	Pair(double _a, double _b);
	Pair();
	Pair(const Pair& p);
	void setFirst(double _a) { a = _a; }
	void setSecond(double _b) { b = _b; }
	double getFirst() const { return a; }
	double getSecond() const { return b; }
	~Pair() {};
	friend Pair operator+(const Pair& p, const Pair& q);
	friend Pair operator-(const Pair& p, const Pair& q);
};

