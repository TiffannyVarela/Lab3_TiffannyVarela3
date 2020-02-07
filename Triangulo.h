#include <typeinfo>
#ifndef TRIANGULO_H
#define TRIANGULO_H
using namespace std;

class Triangulo
{
	private:
		int l1, l2, l3;
		int high;
		double area;
		double Calculo(int,int,int);

	public:
		Triangulo();
		Triangulo(int,int,int);

		int getL1();
		void setL1(int);

		int getL2();
        void setL2(int);

		int getL3();
        void setL3(int);

        int gethigh();
        void sethigh(int);

        double getArea();

		~Triangulo();
	
};
#endif
