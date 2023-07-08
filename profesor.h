#pragma once
#ifndef PROFESOR_H
#define PROFESOR_H
#include <iostream>
#include <sstream>
#include <string>
#include "persona.h"
using namespace std;

class profesor : public persona {

private:
	string categoria;
	string especialidad;

public:
	profesor(string = "-", string = "-", string = "-", string = "-", string = "-");
	void setCategoria(string);
	string getCategoria();
	void setEspecialidad(string);
	string getEspecialidad();
	string toStringProfe();
	~profesor();

};

#endif // !PROFESOR_H
