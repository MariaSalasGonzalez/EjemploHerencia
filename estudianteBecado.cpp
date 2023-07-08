#include "stdafx.h"
#include "estudianteBecado.h"

estudianteBecado::estudianteBecado(string nom, string id, string direccion, int canCreditos, float promedio, string carrera, string tipoBeca, float porcentajeBeca) :estudiante(nom, id, direccion, canCreditos, promedio, carrera){
	this->tipoBeca = tipoBeca;
	this->porcentajeBeca = porcentajeBeca;
}

void estudianteBecado::setTipoBeca(string tipoBeca){
	this->tipoBeca = tipoBeca;
}

string estudianteBecado::getTipoBeca(){
	return tipoBeca;
}

void estudianteBecado::setPorcentajeBeca(float porcentajeBeca){
	this->porcentajeBeca = porcentajeBeca;
}

float estudianteBecado::getPorcentajeBeca(){
	return porcentajeBeca;
}

string estudianteBecado::toStringEstuB(){
	stringstream s;
	s << estudiante::toStringEst();
	s << "Tipo de beca: " << getTipoBeca() << endl;
	s << "Porcentaje de beca: " << getPorcentajeBeca() << endl;
	return s.str();
}

estudianteBecado::~estudianteBecado(){
	cout << "Se ha elimando estudiante becado " << endl;
}
