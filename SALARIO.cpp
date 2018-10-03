//programa creado por: jhonny mauricio iglesias 
//carnet:if18001
//el programa consiste en que al ingresar la cantidad de ventas del enpleado 
//mstrara en pantalla el salario q recivira

#include <iostream> //libreria
#include <windows.h>

using namespace std;//para usar la palabras abrebiadas dentro de la libreria iostream


int main() {//da inicio al programa
	
	system("color 0A");//canbia el color de la consola
	float n; //declarar el tipo de dato
	float i; ////declarar el tipo de dato
	do{
	
	 cout<<"ingrese la cantidad de ventas  de el enpleado"<<endl; //pedir informacion al enpleado
 	 cin>>n; //recivira informacionq el usuario digite
   }while(n<=0); //mientras se cunpla esta condicion se repetira el bcle
   
	if(n>0 && n<=500000){ //si es verdadera la condicion realizara esta acciones si no pasara al else if
	
		i= 80.0; //igualamos la variable
		cout<<"la cantidad de salario que va a recibir es de : $ "<<i<<endl; //mostramos en pantalla el resultado
	}
	else if(n>=500001 && n<=1000000){ //si es verdadera la condicion realizara esta acciones si no pasara al else if
		i= 160.0; //igualamos la variable
		 cout<<"la cantidad de salario que va a recibir es de : $ "<<i<<endl;//mostramos en pantalla el resultado
	}
	else if(n>=1000001 && n<=1500000){ //si es verdadera la condicion realizara esta acciones si no pasara al else if
		i= 320.0; //igualamos la variable
		 cout<<"la cantidad de salario que va a recibir es de : $ "<<i<<endl; //mostramos en pantalla el resultado
	}
	else if(n>=1500001 && n<=2500000){ //si es verdadera la condicion realizara esta acciones si no pasara al else if
		i= 450.0; //igualamos la variable
		cout<<"la cantidad de salario que va a recibir es de : $ "<<i<<endl; //mostramos en pantalla el resultado
	}
	else if(n>=2500001 && n<=4000000){ //si es verdadera la condicion realizara esta acciones si no pasara al else if
		i= 550.0; //igualamos la variable
		cout<<"la cantidad de salario que va a recibir es de : $ "<<i<<endl; //mostramos en pantalla el resultado
		
	}
	else if(n>4000000){//si es verdadera la condicion realizara esta acciones si no pasara al else if
		i=4000000*0.20; //igualamos la variable
		cout<<"la cantidad de salario que va a recibir es de : $ "<<i<<endl; //mostramos en pantalla el resultado
	}
	
	system("pause"); //esperar un tecla
	system("cls"); //borrar pantalla
	cout<<"FIN"<<endl; //mostramos en pantalla 
	system("pause"); //esperar un tecla
	return 0; //no retorna nada
}
