#include "Haus.h"

Haus::Haus()
{
	this->Temperatur = 20;
}

void Haus::Heizen(float _val)
{
	this->Temperatur += _val;
}
