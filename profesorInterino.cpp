#include "stdafx.h"
#include "profesorInterino.h"

profesorInterino::profesorInterino(string nom, string id, string direccion, string categoria, string especialidad,
string fechaIncio, string fechaFinal) : profesor(nom, id, direccion, categoria, especialidad){
	this->fechaInicio = fechaInicio;
	this->fechaFinal = fechaFinal;
}

void profesorInterino::setFechaInicio(string fechaInicio){
	this->fechaInicio = fechaInicio;
}

string profesorInterino::getFechaInicio(){
	return fechaInicio;
}

void profesorInterino::setFechaFinal(string fechaFinal){
	this->fechaFinal = fechaFinal;
}

string profesorInterino::getFechaFinal(){
	return fechaFinal;
}

string profesorInterino::toStringProfeInterino(){
	stringstream s;
	s << profesor::toStringProfe();
	s << "Fecha en que inicio su nombramiento: " << getFechaInicio() << endl;
	s << "Fecha en que finaliza su nombramiento: " << getFechaFinal() << endl;
	return s.str();
}

profesorInterino::~profesorInterino(){
	cout << "Se ha eliminado el profesor interino " << endl;
}
