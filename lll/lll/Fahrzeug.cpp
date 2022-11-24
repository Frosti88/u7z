#include "Fahrzeug.h"

Fahrzeug::Fahrzeug()
{
	this->Geschwindigkeit = 0;
	this->AnzahlSitzplaetze = 0;
	this->Tankstand = 0;

	this->Eingabe();
}

Fahrzeug::Fahrzeug(int f)
{
}

void Fahrzeug::Beschleunigen(int _val)
{
	if (_val > 0) {
		this->Geschwindigkeit += _val;
	}
	else {
		throw(std::invalid_argument("Kann nicht um einen negativen wert beschleunigen."));
	}
}

void Fahrzeug::Bremsen(int _val)
{
	if (_val < 0) {
		this->Geschwindigkeit += _val;
	}
	else {
		throw(std::invalid_argument("Geschwindigkeit kann nicht um einen positiven Wert gesenkt werden."));
	}
}

void Fahrzeug::Tanken(float _val)
{
	if (_val > 0) {
		this->Tankstand += _val;
	}
	else {
		throw(std::invalid_argument("Tankstand kann nicht um einen ngativen wert befüllt werden."));
	}
}

void Fahrzeug::Eingabe()
{
	std::cout << "Geben sie die Geschwindikeit ein: ";
	std::cin >>this->Geschwindigkeit;
	std::cout << std::endl << "Geben sie die Anzahl der Sitzplätze ein: ";
	std::cin >> this->AnzahlSitzplaetze;
	std::cout << std::endl << "Geben sie den Tankstand ein: ";
	std::cin >> this->Tankstand;
}

void Fahrzeug::Ausgabe() const
{
	std::cout << "---" << std::endl;
	std::cout << "Geschwindikeit: " << this->Geschwindigkeit << std::endl;
	std::cout << "Tankstand: " << this->Tankstand << std::endl;
	std::cout << "---" << std::endl;
}

testWerte Fahrzeug::getTestWerte()
{
	testWerte werte;

	werte.Geschwindigkeit = this->Geschwindigkeit;
	werte.AnzahlSitzplaetze = this->AnzahlSitzplaetze;
	werte.Tankstand = this->Tankstand;

	return werte;
}
