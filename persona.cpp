#include "stdafx.h"
#include "persona.h"

persona::persona(string nom, string id, string direccion){
	this-> nom = nom;
	this-> id = id;
	this-> direccion = direccion;
}

void persona::setNom(string nom){
	this->nom = nom;
}

string persona::getNom(){
	return nom;
}

void persona::setId(string id){
	this->id = id;
}

string persona::getId(){
	return id;
}

void persona::setDireccion(string direccion){
	this->direccion = direccion;
}

string persona::getDireccion(){
	return direccion;
}

string persona::toStringPers(){
	stringstream s;
	s << "Nombre: " << getNom() << endl;
	s << "ID: " << getId() << endl;
	s << "Direccion: " << getDireccion() << endl;
	return s.str();
}

persona::~persona(){
	cout << "Se ha eliminado la persona" << endl;
}
