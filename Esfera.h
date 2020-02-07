#include <typeinfo>
#include "Circulo.h"
#ifndef ESFERA_H
#define ESFERA_H

class Esfera
{
	private:
		Circulo* circulo;
	public:
		Esfera();
		Esfera(Circulo*);

		Circulo* getCirculo();
		void setCirculo(Circulo*);

		double Volumen(Circulo*);

		~Esfera();
	
};

#endif