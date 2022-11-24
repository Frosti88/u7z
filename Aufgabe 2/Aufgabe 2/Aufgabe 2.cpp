#include <iostream>
#include <string>
#include "complex.h"

int main() {
	std::string cmplx_1 = "0+0i";
	std::string cmplx_2 = "0+0i";
	complex complex_1(cmplx_1);
	complex complex_2(cmplx_2);
	int operation = 0;
	while (operation == 0 || operation < 0 || operation >5) {
		std::cout << "Bitte wählen sie eine Operation:" << std::endl;
		std::cout << "1 = conj" << std::endl;
		std::cout << "2 = add" << std::endl;
		std::cout << "3 = sub" << std::endl;
		std::cout << "4 = mul" << std::endl;
		std::cout << "5 = div" << std::endl;
		std::cin >> operation;
	}
	switch (operation) {
	case 1:
		std::cout << "Geben sie eine komplexe Zahl ein: ";
		std::cin >> cmplx_1;
		std::cout << std::endl;
		new (&complex_1) complex(cmplx_1);
		complex_1.Conjugate();
		complex_1.PrintComplex();
		std::cout << std::endl;
		operation = 0;
		break;
	case 2:
		std::cout << "Geben sie die erste komplexe Zahl ein: ";
		std::cin >> cmplx_1;
		std::cout << std::endl;
		std::cout << "Geben sie die zweite komplexe Zahl ein: ";
		std::cin >> cmplx_2;
		std::cout << std::endl;
		new (&complex_1) complex(cmplx_1);
		new (&complex_2) complex(cmplx_2);
		complex_1.AddComplex(complex_2);
		complex_1.PrintComplex();
		std::cout << std::endl;
		operation = 0;
	case 3:
		std::cout << "Geben sie die erste komplexe Zahl ein: ";
		std::cin >> cmplx_1;
		std::cout << std::endl;
		std::cout << "Geben sie die zweite komplexe Zahl ein: ";
		std::cin >> cmplx_2;
		std::cout << std::endl;
		new (&complex_1) complex(cmplx_1);
		new (&complex_2) complex(cmplx_2);
		complex_1.SubComplex(complex_2);
		complex_1.PrintComplex();
		std::cout << std::endl;
		operation = 0;
	case 4:
		std::cout << "Geben sie die erste komplexe Zahl ein: ";
		std::cin >> cmplx_1;
		std::cout << std::endl;
		std::cout << "Geben sie die zweite komplexe Zahl ein: ";
		std::cin >> cmplx_2;
		std::cout << std::endl;
		new (&complex_1) complex(cmplx_1);
		new (&complex_2) complex(cmplx_2);
		complex_1.MulComplex(complex_2);
		complex_1.PrintComplex();
		std::cout << std::endl;
		operation = 0;
	case 5:
		try {
			std::cout << "Geben sie die erste komplexe Zahl ein: ";
			std::cin >> cmplx_1;
			std::cout << std::endl;
			std::cout << "Geben sie die zweite komplexe Zahl ein: ";
			std::cin >> cmplx_2;
			std::cout << std::endl;
			new (&complex_1) complex(cmplx_1);
			new (&complex_2) complex(cmplx_2);
			complex_1.DivComplex(complex_2);
			complex_1.PrintComplex();
			std::cout << std::endl;
			operation = 0;
		}
		catch (const ComplexDivByZero& e) {
			std::cout << "Sie können nicht durch Null dividiren.";
		}
	}
	return 0;
}
