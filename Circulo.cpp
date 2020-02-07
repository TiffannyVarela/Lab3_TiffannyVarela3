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

double Triangulo::getradio(){
	return radio;
}

void Triangulo::setradio(double radio){
	radio=radio;
}

double Triangulo::getdiametro(){
	return diametro;
}

void Triangulo::setdiametro(double diametro){
	diametro=diametro;
}

double Triangulo::getcircunferencia(){
	return circunferencia;
}

void Triangulo::setcircunferencia(double circunferencia){
	circunferencia=circunferencia;
}

double Circulo::Circunferencia(double radio){
	float pi = 3.14159265359;
	double resp = 2*pi*radio;
	return resp;
}

Circulo::~Circulo(){
	cout<<"Eliminado Circulo"<<endl;
}