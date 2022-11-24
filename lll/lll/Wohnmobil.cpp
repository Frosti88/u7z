#include "Wohnmobil.h"



Wohnmobil::Wohnmobil():Fahrzeug(0)
{
	this->Eingabe();
}

void Wohnmobil::Eingabe()
{
	std::cout << "Geben sie die Geschwindikeit ein: ";
	std::cin >> this->Geschwindigkeit;
	std::cout << std::endl << "Geben sie die Anzahl der Sitzplätze ein: ";
	std::cin >> this->AnzahlSitzplaetze;
	std::cout << std::endl << "Geben sie den Tankstand ein: ";
	std::cin >> this->Tankstand;
	std::cout << std::endl << "Geben sie die Temperatur ein: ";
	std::cin >> this->Temperatur;
}

void Wohnmobil::Ausgabe() const
{
	std::cout << "---" << std::endl;
	std::cout << "Wohnmobil" << std::endl;
	std::cout << "Geschwindikeit: " << this->Geschwindigkeit << std::endl;
	std::cout << "Tankstand: " << this->Tankstand << std::endl;
	std::cout << "Temperatur: " << this->Temperatur << std::endl;
	std::cout << "---" << std::endl;
}
