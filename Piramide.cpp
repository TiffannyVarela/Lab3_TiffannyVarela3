#include "Triangulo.h"
#include "Piramide.h"
#include <iostream>
using namespace std;

Piramide::Piramide(){
	high=0;
}

Piramide::Piramide(Triangulo* triangulo, int high){
	this -> triangulo=triangulo;
	this -> high=high;
}

Triangulo* Piramide::getTriangulo(){
	return triangulo;
}

void Piramide::setTriangulo( Triangulo* triangulo){
	triangulo=triangulo;
}

int Piramide::gethigh(){
	return high;
}

void Piramide::sethigh(int high){
	high=high;
}

double Piramide::Volumen(Triangulo* triangulo, int high){
	double volumen=((triangulo->getL2()*triangulo->getL2())*high)/3;
	return volumen;
}

Piramide::~Piramide(){
	cout<<"Eliminado Piramide"<<endl;
}
