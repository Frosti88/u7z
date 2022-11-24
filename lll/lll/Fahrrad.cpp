#include "Fahrrad.h"

Fahrrad::Fahrrad()
{

}

void Fahrrad::Ausgabe() const
{
	std::cout << "---" << std::endl;
	std::cout << "Fahrrad" << std::endl;
	std::cout << "Geschwindikeit: " << this->Geschwindigkeit << std::endl;
	std::cout << "Tankstand: " << this->Tankstand << std::endl;
	std::cout << "---" << std::endl;
}
