// tareaHerencia.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "estudianteBecado.h"
#include "profesorInterino.h"
#include "profesorPropietario.h"

int main(){
	cout << "Se crea un estudiante becado: " << endl;
	estudianteBecado* estB = new estudianteBecado("David", "13RT", "SJ", 12, 89.5, "Informatica", "OmarDengo", 100.0);
	cout << estB->toStringEst();
	delete estB;
	cin.get();

	cout << "Se crea un profesor interino: " << endl;
	profesorInterino* profInt = new profesorInterino("Diego", "98EDA", "Heredia", "C1", "Espannol", "10_Octubre", "15_Dic");
	cout << profInt->toStringProfeInterino() << endl;
	delete profInt;
	cin.get();

	cout << "Se crea un profesor con propiedad: " << endl;
	profesorPropietario* profProp = new profesorPropietario("Maria", "1973R", "Alajuela", "A2", "Ciencias", 2010);
	cout << profProp->toStringProfePropiedad() << endl;
	delete profProp;
	cin.get();

    return 0;
}

