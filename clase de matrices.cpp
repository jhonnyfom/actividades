#include<iostream>  //libreria entrada y salidas
#include<stdlib.h>
#include<time.h> //libreria sirve para poder ponerle segundos otienpo al programa
using namespace std; //para poder usar la funciones de la libreria iostream

int main(){ //para dar inicio al programa se usa main como buena practica d eprogramacion
	
		srand(time(NULL)); //llamar funiones que estan dentro de la libreria time
	
	
	int matriz[3][3]; //declaramos una matriz
	for (int i =0; i< 3; i++){ //ciclo for tiene un contador, que va a parar a 3 y va incrementando en una unidad
		
		for (int j =0; j< 3; j++){ //ciclo anidado
		
			matriz[i][j]= rand()% 101; //accion que se realizara con el for
		}
	}
	for (int i =0; i< 3; i++){
		for (int j =0; j< 3; j++){
			cout<<matriz[i][j]<<"    ";
		}
		cout<<endl; //salto de linia
	}
	
system("pause"); //esperar tecla
	return 0; //fin del programa se usa como bena practica de programacion
}
