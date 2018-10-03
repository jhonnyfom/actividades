//una enpresa de telefonia nesesita calcular el total a pagar 
//por cada cliente segun la siguiente tabla

//1 a 10 minutos se paga $0.05
//11 a 15 minutos se paga $0.08
//+15  minutos se paga $0.10

//hacer un programa que calcule el total a pagar por cada llamada
//inplementando ciclos y funciones.


#include <iostream>

using namespace std;
float costos ( float min){
	float costo;
	do
	{
		cout<<"ingrese los minutos ablados"<<endl;
		cin>>min;
		
	}while (min<=0);
	if(min <= 10){
		costo = min * 0.05;
	}
	else if(min<=15){
		costo = min * 0.08;
		
	}
	else if(min>15){
	costo = min * 0.1;
	
	}
	return costo;
}

int main() {
	float min;
	cout<<"total a cancelar:"<< costos(min)<<endl;
	system("pause");
	
	return 0;
}
