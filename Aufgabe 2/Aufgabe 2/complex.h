#pragma once
#include <iostream>
#include <string>
#include <exception>
class ComplexDivByZero :public std::exception
{
public:
	const char* what() const throw ()
	{
		return "Division durch 0";
	}
};

class complex
{
public:
	complex(std::string _val);

	void PrintComplex();
	void Conjugate();
	void AddComplex(const complex& op);
	void SubComplex(const complex& op);
	void MulComplex(const complex& op);
	void DivComplex(const complex& op);

	char vz = '+';
	int r, c;
};

