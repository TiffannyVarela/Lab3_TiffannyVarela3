#include "Triangulo.h"
#include <iostream>
using namespace std;

Triangulo::Triangulo(){
}

Triangulo::Triangulo(int l1, int l2, int l3, int high){
	this -> l1=l1;
	this -> l2=l2;
	this -> l3=l3;
	this -> high=high;

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

int Triangulo::Calculo(int l1, int l2, int l3){
	
}
