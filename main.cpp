#include "Piramide.h"
#include "Esfera.h"
#include "Triangulo.h"
#include "Circulo.h"
#include <iostream>
using namespace std;

int Ejercicio1(int);
int menu();
int val(int);

int main(){
	int resp=-1;
	int num;
	Triangulo* triangulo;
	Circulo* circulo;
	Piramide* piramide;
	Esfera* esfera;
	int high;
	int l1, l2,l3;
	double radio;
	cout<<"Lado A: ";
        cin>>l1;
        while(l1<0){
    		cout<<"El numero debe de ser positivo"<<endl;
                cout<<"Lado A: ";
                cin>>l1;
        }
        cout<<"Lado B: ";
        cin>>l2;
        while(l2<0){
        	cout<<"El numero debe de ser positivo"<<endl;
                cout<<"Lado B: ";
                cin>>l2;
        }
        cout<<"Lado C: ";
        cin>>l3;
        while(l3<0){
        	cout<<"El numero debe de ser positivo"<<endl;
        	cout<<"Lado C: ";
                cin>>l3;
        }
        triangulo = new Triangulo(l1, l2,l3);

        cout<<"Radio: ";
        cin>>radio;
        while(radio<0){
        	cout<<"El numero debe de ser positivo"<<endl;
                cout<<"Radio: ";
                cin>>radio;
        }
        circulo = new Circulo(radio);
	do{
		switch(menu()){
			case 1:
				cout<<"Ingrese un numero: ";
				cin>>num;
				while(num<0){
					cout<<"el numero debe de ser positivo"<<endl;
					cout<<"Ingrese un numero: ";
					cin>>num;
				}
				cout<<Ejercicio1(num)<<endl;
				break;

			case 2:
				cout<<"Area: "<<triangulo->getArea()<<endl;
				cout<<"Altura: "<<triangulo->gethigh()<<endl;
				
				break;

			case 3:
				cout<<"Diametro: "<<circulo->getDiametro()<<endl;
				cout<<"Perimetro: "<<circulo->getCircunferencia()<<endl;
				cout<<"Area: "<<circulo->Area(radio)<<endl;
				
				break;

			case 4:
				cout<<"Ingrese la altura: ";
				cin>>high;
				while(high<0){
					cout<<"Altura debe ser positiva"<<endl;
					cout<<"Ingrese altura: ";
					cin>>high;
				}
				piramide = new Piramide(triangulo, high);
				cout<<"Volumen: "<<piramide->Volumen(triangulo, high)<<endl;
				delete piramide;
				break;

			case 5:
				esfera = new Esfera(circulo);
				cout<<"Volumen: "<<esfera->Volumen(circulo)<<endl;
				delete esfera;
				break;
		}
		cout<<"Desea volver?: \n1.Si\n2.No"<<endl;
		cin>>resp;
	}while(resp!=2);
	delete triangulo;
        delete circulo;
	return 0;
}

int menu(){//inicio metodo menu
    while(true){
        cout<<"MENU"<<endl
        <<"1.- Identificar numero triangular previo"<<endl
        <<"2.- Calcular area de triangulo"<<endl
		<<"3.- Calcular area de circulo"<<endl
		<<"4.- Calcular volumen de piramide"<<endl
		<<"5.- Calcular volumen de esfera"<<endl;
        cout<<"Ingrese una opcion: ";
        int opcion =0;
        cin>>opcion;
        if(opcion>=1 && opcion<= 5){
                return opcion;
        }
		else{
        	cout<<"La opcion elegida no es valida, ingrese una opcion entre 1 y 5"<<endl;
        }
 	}//end del while
        return 0;
}//fin metodo menu

int Ejercicio1(int num){
	int op;
	int result =0, result2=0, fin=0;;
	bool resp=false;
	for(int i=1; i<=num; i++){
		op=(i*(i-1))/2;
		if(op==num){
			resp=true;
			result=op;
		//	cout<<"cont: "<<i<<endl;
			break;
		}
		else{
			resp=false;
			if(op<num){
				result2=op;
			}
		//	cout<<"contf: "<<i<<endl;
		}
	}

	if(resp){
		cout<<"El numero es Triangular: ";
		fin=result;
	}
	else{
		cout<<"El numero "<<num<<" no es triangular"<<endl;
		cout<<"El triangular anterior es: ";
		fin=result2;
	}
	return fin;
}


