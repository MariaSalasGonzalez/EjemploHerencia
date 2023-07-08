#include "stdafx.h"
#include "profesor.h"

profesor::profesor(string nom, string id, string direccion, string categoria, string especialidad) : persona(nom, id, direccion){
	this->categoria = categoria;
	this->especialidad = especialidad;
}

void profesor::setCategoria(string categoria){
	this->categoria = categoria;
}

string profesor::getCategoria(){
	return categoria;
}

void profesor::setEspecialidad(string especialidad){
	this->especialidad = especialidad;
}

string profesor::getEspecialidad(){
	return especialidad;
}

string profesor::toStringProfe(){
	stringstream s;
	s << persona::toStringPers();
	s << "Categoria: " << getCategoria() << endl;
	s << "Especialidad: " << getEspecialidad() << endl;
	return s.str();
}

profesor::~profesor(){
	cout << "Se ha eliminado el profesor" << endl;
}
