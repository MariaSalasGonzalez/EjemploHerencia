#include "stdafx.h"
#include "estudiante.h"

estudiante::estudiante(string nom, string id, string direccion, int canCreditos, float promedio, string carrera):persona(nom, id, direccion){
	this->canCreditos = canCreditos;
	this->promedio = promedio;
	this->carrera = carrera;
}

void estudiante::setCanCreditos(int canCreditos){
	this->canCreditos = canCreditos;
}

int estudiante::getCanCreditos(){
	return canCreditos;
}

void estudiante::setPromedio(float promedio){
	this->promedio = promedio;
}

float estudiante::getPromedio(){
	return promedio;
}

void estudiante::setCarrera(string carrera){
	this->carrera = carrera;
}

string estudiante::getCarrera(){
	return carrera;
}

string estudiante::toStringEst(){
	stringstream s;
	s << persona::toStringPers();
	s << "Cantidad de Creditos: " << getCanCreditos() << endl;
	s << "Promedio: " << getPromedio() << endl;
	s << "Carrera: " << getCarrera() << endl;
	return s.str();
}

estudiante::~estudiante(){
	cout << "Se ha eliminado estudiante " << endl;
}
