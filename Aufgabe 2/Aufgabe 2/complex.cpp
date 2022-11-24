#include "complex.h"
complex::complex(std::string _val) {
	r = static_cast<int>(_val[0]) - 48;
	vz = _val[1];
	c = static_cast<int>(_val[2]) - 48;
}

void complex::PrintComplex()
{
	std::cout << r << vz<< c << "i";
}

void complex::Conjugate()
{
	vz = (vz == '+') ? '-' : '+';
}

void complex::AddComplex(const complex& op)
{
	this->r = (this->r + op.r);
	this->c = (this->c + op.c);
}

void complex::SubComplex(const complex& op)
{
	this->r = (this->r - op.r);
	this->c = (this->c - op.c);
}

void complex::MulComplex(const complex& op)
{
	this->r = ((this->r * op.r) - (this->c * op.c));
	this->c = ((this->r * op.c) + (this->c * op.r));
}

void complex::DivComplex(const complex& op)
{
	if (op.c == 0 && op.r == 0) {
		ComplexDivByZero c;
		throw(c);
	}
	this->r = ((this->r * op.r) + (this->c * op.c)) / ((op.r * op.r) + (op.c * op.c));
	this->c = ((this->c * op.r) - (this->r * op.c)) / ((op.r * op.r) + (op.c * op.c));
}
