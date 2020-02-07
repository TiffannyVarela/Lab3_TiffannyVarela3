#include "Circulo.h"
#include <math.h>
#include <iostream>
using namespace std;

Circulo::Circulo(){
	double radio=0;
	double diametro=0;
	double circunferencia=0;
}

Circulo::Circulo(double radio){
	this->radio=radio;
	diametro=2*radio;
	circunferencia=Circunferencia(radio);
}

double Circulo::getRadio(){
	return radio;
}

void Circulo::setRadio(double radio){
	radio=radio;
}

double Circulo::getDiametro(){
	return diametro;
}

void Circulo::setDiametro(double diametro){
	diametro=diametro;
}

double Circulo::getCircunferencia(){
	return circunferencia;
}

void Circulo::setCircunferencia(double circunferencia){
	circunferencia=circunferencia;
}

double Circulo::Circunferencia(double radio){
	float pi = 3.14159265359;
	double resp = 2*pi*radio;
	return resp;
}

double Circulo::Area(double radio){
	float pi = 3.14159265359;
	double area=pi*(radio*radio);
}


Circulo::~Circulo(){
	cout<<"Eliminado Circulo"<<endl;
}