#pragma once
#ifndef PROFESORPROPIETARIO_H
#define PROFESORPROPIETARIO_H
#include <iostream>
#include <sstream>
#include <string>
#include "profesor.h"

using namespace std;
class profesorPropietario : public profesor{

private: 
	int annioIngreso;

public:
	profesorPropietario(string = "-", string = "-", string = "-", string = "-", string = "-", int = 0);
	void setAnnioIngreso(int);
	int getAnnioIngreso();
	string toStringProfePropiedad();
	~profesorPropietario();

};


#endif // !PROFESORPROPIETARIO_H
