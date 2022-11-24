#pragma once
#include "Fahrzeug.h"
class Fahrrad : public Fahrzeug
{
public: 
	Fahrrad();
	void Ausgabe() const override;
};

