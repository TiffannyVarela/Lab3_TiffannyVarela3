#include <typeinfo>
#ifndef CIRCULO_H
#define CIRCULO_H 

class Circulo
{
	private:
		double radio, diametro, circunferencia;
		double Circunferencia(int);

	public:
		Circulo();
		Circulo(int);

		double getRadio();
		void setRadio(double);

		double setDiametro();
		void getDiametro(double);

		double getCircunferencia();
		void setCircunferencia(double);

		~Circulo();
	
};

#endif
