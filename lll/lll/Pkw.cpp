#include "Pkw.h"

Pkw::Pkw()
{
}

void Pkw::Ausgabe() const
{
	std::cout << "---" << std::endl;
	std::cout << "PKW" << std::endl;
	std::cout << "Geschwindikeit: " << this->Geschwindigkeit << std::endl;
	std::cout << "Tankstand: " << this->Tankstand << std::endl;
	std::cout << "---" << std::endl;
}
