#pragma once
#ifndef ESTUDIANTEBECADO_H
#define ESTUDIANTEBECADO_H
#include <iostream>
#include <sstream>
#include <string>
#include "estudiante.h"

using namespace std;
class estudianteBecado : public estudiante {

private:
	string tipoBeca;
	float porcentajeBeca;

public:
	estudianteBecado(string = "-", string = "-", string = "-", int = 0, float = 0.0, string = "-", string = "-", float = 0.0);
	void setTipoBeca(string);
	string getTipoBeca();
	void setPorcentajeBeca(float);
	float getPorcentajeBeca();
	string toStringEstuB();
	~estudianteBecado();

};
#endif // !ESTUDIANTEBECADO_H
