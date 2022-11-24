#include <iostream>

#include "Fahrzeug.h"
#include "Haus.h"
#include "Fahrrad.h"
#include "Motorad.h"
#include "Pkw.h"
#include "Wohnmobil.h"

//#define doUniTest

#ifdef doUniTest

#include "unit_tests.h"
int main() {
	unit_tests tests;
	Fahrzeug* test_fahrzeug = new Fahrzeug();
	testWerte t;

	std::cout << "Unit tests:" << std::endl;

	//Basisklasse (Fahrzeug)
	//Eingabe
	//Geschwindikeit: 100, Sitzplätze: 4, Tankstand: 20
	test_fahrzeug->Eingabe();
	t = test_fahrzeug->getTestWerte();
	
	//Beschleunigen
	test_fahrzeug->Beschleunigen(10);
	t = test_fahrzeug->getTestWerte();
	tests.add_test("basisklasse fahrzeug",
		"Test 1 fuer Methode: \"Beschleunigen\"",
		(t.Geschwindigkeit == 110));
	
	//Bremsen
	test_fahrzeug->Bremsen(-20);
	t = test_fahrzeug->getTestWerte();
	tests.add_test("basisklasse fahrzeug",
		"Test 1 fuer Methode: \"Bremsen\"",
		(t.Geschwindigkeit == 90));
	//Tanken
	test_fahrzeug->Tanken(25);
	t = test_fahrzeug->getTestWerte();
	tests.add_test("basisklasse fahrzeug",
		"Test 1 fuer Methode: \"Tanken\"",
		(t.Tankstand == 45));

	//Ausgabe
	test_fahrzeug->Ausgabe();

	delete test_fahrzeug;

	tests.run_tests();

}
#else
int main() {
	Fahrzeug* Fahrzeuge[5];
	int typ = 0;

	for (int i = 0; i < 5; i++) {
		std::cout << "Bitte wählen sie einen Fahrzeugtypen für \"Fahrzeug " << i << "\"" << std::endl;
		std::cout << "(1 = Pkw, 2 = Fahrrad, 3 = Motorad) " << std::endl;
		std::cin >> typ;

		if (typ == 1)
		{
			Fahrzeuge[i] = new Pkw();
		}
		else if (typ == 2)
		{
			Fahrzeuge[i] = new Fahrrad();
		}
		else if (typ == 3) {
			Fahrzeuge[i] = new Motorad();
		}
		else {
			std::cout << "Eingabe ungültig" << std::endl;
			i--;
		}
	}
	Fahrzeuge[0]->Tanken(19);
	Fahrzeuge[0]->Beschleunigen(22);

	Fahrzeuge[1]->Bremsen(-10);
	Fahrzeuge[1]->Beschleunigen(420);

	Fahrzeuge[2]->Tanken(8);
	Fahrzeuge[2]->Bremsen(-2);

	Fahrzeuge[3]->Beschleunigen(99);
	Fahrzeuge[3]->Tanken(5);

	Fahrzeuge[4]->Beschleunigen(1);
	Fahrzeuge[4]->Bremsen(-1);

	for (Fahrzeug* f : Fahrzeuge) {
		f->Ausgabe();
		delete f;
	}

	Wohnmobil* nWohnmobil = new Wohnmobil();
	nWohnmobil->Bremsen(-10);
	nWohnmobil->Heizen(12);
	nWohnmobil->Ausgabe();
	delete nWohnmobil;
}
#endif