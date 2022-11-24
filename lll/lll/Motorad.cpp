#include "Motorad.h"
Motorad::Motorad() {

}

void Motorad::Ausgabe() const
{
	std::cout << "---" << std::endl;
	std::cout << "Motorad" << std::endl;
	std::cout << "Geschwindikeit: " << this->Geschwindigkeit << std::endl;
	std::cout << "Tankstand: " << this->Tankstand << std::endl;
	std::cout << "---" << std::endl;
}
