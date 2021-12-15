#include "Pair.h"
#include <iostream>
Pair::Pair()
{
	a = 0;
	b = 0;
}
Pair::Pair(const Pair& p) {
	a = p.a;
	b = p.b;
}
Pair::Pair(double _a, double _b) {
	a = _a;
	b = _b;
}
Pair operator+(const Pair& p, const Pair& q) {
	return Pair(p.a + q.a, p.b + q.b);
}
Pair operator-(const Pair& p, const Pair& q) {
	return Pair(p.a - q.a, p.b - q.b);
}