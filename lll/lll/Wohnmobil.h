#pragma once
#include "Fahrzeug.h"
#include "Haus.h"
class Wohnmobil : public Fahrzeug, public Haus
{
public:
	Wohnmobil();
	void Eingabe() override;
	void Ausgabe() const override;
};

