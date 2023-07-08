#pragma once
#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <iostream>
#include <sstream>
#include <string>
#include "persona.h"

using namespace std;
class estudiante : public persona {

private:
	int canCreditos;
	float promedio;
	string carrera;

public:
	estudiante(string = "-", string = "-", string = "-", int = 0, float = 0.0, string = "-");
	void setCanCreditos(int);
	int getCanCreditos();
	void setPromedio(float);
	float getPromedio();
	void setCarrera(string);
	string getCarrera();
	string toStringEst();
	~estudiante();

};

#endif // !ESTUDIANTE_H
