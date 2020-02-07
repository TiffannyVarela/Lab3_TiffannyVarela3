#include <iostream>
using namespace std;

int Ejercicio1(int);
int menu();

int main(){
	int resp=-1;
	int num;
	do{
		switch(menu()){
			case 1:
				cout<<"Ingrese un numero: ";
				cin>>num;
				cout<<Ejercicio1(num)<<endl;
				break;

			case 2:
				break;

			case 3:
				break;

			case 4:
				break;

			case 5:
				break;
		}
		cout<<"Desea volver?: \n1.Si\n2.No"<<endl;
		cin>>resp;
	}while(resp!=2);
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
