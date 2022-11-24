#pragma once
#include <iostream>
struct testWerte{
	int Geschwindigkeit;
	int Tankstand;
	int AnzahlSitzplaetze;
};

class Fahrzeug
{
public:	
	Fahrzeug();
	Fahrzeug(int f);
	
	void Beschleunigen(int _val);
	void Bremsen(int _val);
	void Tanken(float _val);
	
	virtual void Eingabe();
	virtual void Ausgabe() const;

	testWerte getTestWerte();

protected:
	int Geschwindigkeit = 0;
	float Tankstand = 0;
	int AnzahlSitzplaetze = 0;

};

