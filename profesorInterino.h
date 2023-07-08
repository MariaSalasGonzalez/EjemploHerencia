#pragma once
#ifndef PROFESORINTERINO_H
#define PROFEOSRINTERINO_H
#include <iostream>
#include <sstream>
#include <string>
#include "profesor.h"
using namespace std;

class profesorInterino:public profesor{

private:
	string fechaInicio;
	string fechaFinal;

public:
	profesorInterino(string = "-", string = "-", string = "-", string = "-", string = "-", string = "-", string = "-");
	void setFechaInicio(string);
	string getFechaInicio();
	void setFechaFinal(string);
	string getFechaFinal();
	string toStringProfeInterino();
	~profesorInterino();

};

#endif // !PROFESORINTERINO_H
