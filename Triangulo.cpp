#include "Triangulo.h"
#include <math.h>
#include <iostream>
using namespace std;

Triangulo::Triangulo(){
	l1=0;
	l2=0;
	l3=0;
	area=0;
	high=0;
}

Triangulo::Triangulo(int l1, int l2, int l3){
	this -> l1=l1;
	this -> l2=l2;
	this -> l3=l3;
	area=Calculo(l1,l2,l3);
	high=(2*area)/l2;
}

int Triangulo::getL1(){
	return l1;
}

void Triangulo::setL1(int l1){
	l1=l1;
}

int Triangulo::getL2(){
	return l2;
}

void Triangulo::setL2(int l2){
	l2=l2;
}

int Triangulo::getL3(){
	return l3;
}

void Triangulo::setL3(int l3){
	l3=l3;
}

int Triangulo::gethigh(){
	return high;
}

void Triangulo::sethigh(int high){
	high=high;
}

double Triangulo::Calculo(int l1, int l2, int l3){
	int s = (l1+l2+l3)/2;
	double area = sqrt(s*((s-l1)*(s-l2)*(s-l3)));
	return area;
}

double Triangulo::Area(int l1, int l2, int l3){
	int s = (l1+l2+l3)/2;
	double area = sqrt(s*((s-l1)*(s-l2)*(s-l3)));
	return area;
}

double Triangulo::getArea(){
	return area;
}

Triangulo::~Triangulo(){
	cout<<"Eliminado Triangulo"<<endl;
}
