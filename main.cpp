#include <iostream>
using namespace std;

int Ejercicio1(int);

int main(){
	return 0;
}

int menu(){//inicio metodo menu
    while(true){
        cout<<"MENU"<<endl
        <<"1.- Identificar numero triangular previo"<<endl
        <<"2.- Calcular area de triangulo"<<endl
		<<"3.- Calcular area de circulo"<<endl
		<<"4.- Calcular volumen de piramide"<<endl
		<<"5.- Calcular volumen de esfera"<<endl
		<<"6.- Salir"<<endl;
        cout<<"Ingrese una opcion: ";
        int opcion =0;
        cin>>opcion;
        if(opcion>=1 && opcion<= 6){
                return opcion;
        }
		else{
        	cout<<"La opcion elegida no es valida, ingrese una opcion entre 1 y 6"<<endl;
        }
 	}//end del while
        return 0;
}//fin metodo menu
