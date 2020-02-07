#include <typeinfo>
#include "Triangulo.h"
#ifndef PIRAMIDE_H
#define PIRAMIDE_H

class Piramide
{
	private:
		Triangulo* triangulo;
		int high;
	public:
		Piramide();
		Piramide(Triangulo*, int);

		Triangulo* getTriangulo();
		void setTriangulo(Triangulo*);

		int gethigh();
        void sethigh(int);

        double Volumen(Triangulo*, int);

		~Piramide();
	
};
#endif