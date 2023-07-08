#include "stdafx.h"
#include "profesorPropietario.h"

profesorPropietario::profesorPropietario(string nom, string id, string direccion, string categoria, 
string especialidad, int annioIngreso) : profesor(nom, id, direccion, categoria, especialidad){
	this->annioIngreso = annioIngreso;
}

void profesorPropietario::setAnnioIngreso(int annioIngreso){
	this->annioIngreso = annioIngreso;
}

int profesorPropietario::getAnnioIngreso(){
	return annioIngreso;
}

string profesorPropietario::toStringProfePropiedad(){
	stringstream s;
	s << profesor::toStringProfe();
	s << "Fecha que se ingreso la propiedad: " << endl;
	return s.str();
}

profesorPropietario::~profesorPropietario(){
	cout << "Se ha eliminado el profesor con propiedad" << endl;
}
