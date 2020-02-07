#include <typeinfo>
#ifndef CIRCULO_H
#define CIRCULO_H 

class Circulo
{
	private:
		double radio, diametro, circunferencia;
		double Circunferencia(double);

	public:
		Circulo();
		Circulo(double);

		double getRadio();
		void setRadio(double);

		double getDiametro();
		void setDiametro(double);

		double getCircunferencia();
		void setCircunferencia(double);

		double Area(double);
		double Perimetro(double);

		~Circulo();
	
};

#endif
