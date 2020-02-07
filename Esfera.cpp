#include "Circulo.h"
#include "Esfera.h"
#include <iostream>
using namespace std;

Esfera::Esfera(){

}

Esfera::Esfera(Circulo* circulo){
	this -> circulo=circulo;
}

Circulo* Esfera::getCirculo(){
	return circulo;
}

void Esfera::setCirculo(Circulo* circulo){
	circulo=circulo;
}

double Esfera::Volumen(Circulo* circulo){
	float pi = 3.14159265359;
	double vol=((4*pi)*(circulo->getRadio()*circulo->getRadio()*circulo->getRadio()))/3;
	return vol;
}
Esfera::~Esfera(){
	cout<<"Eliminando Esfera"<<endl;
}
