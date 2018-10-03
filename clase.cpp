#include <iostream> //libreria entrada y salidas
#include<stdlib.h>

using namespace std; //para poder usar la funciones de la libreria iostream

int main() { //para dar inicio al programa se usa main como buena practica d eprogramacion
	
	int mat[5][5];//declaramos una matriz
	int mat2[5][5];
	int mat3[5][5];
	
	for (int fila=0;fila<5;fila++){//ciclo for tiene un contador, que va a parar a 5 y va incrementando en una unidad
    for (int col=0;col<5;col++){//ciclo anidado
    	mat[fila][col]=0;
    	if(fila==4 || col==2){ //si la condicion se cunple se realizaran las opciones que estan dentro del if
    		mat2[fila][col]=0;
    		mat2[fila][col]=0;//acciones que se realizaran
		}else{ //si la condicion no se cunple para if se realizaran las condiciones dentrodel else
				mat2[fila][col]=1; //acciones que se realizara
		}
    
    	mat3[fila][col]=mat[fila][col]+mat2[fila][col];
	}
	}
	for (int fila=0;fila<5;fila++){
    for (int col=0;col<5;col++){
    	cout<<mat3[fila][col]<<"\t";
	}
	cout<<endl; //un salto de linea para ue la matrises no se distorcionen
}
	system("pause"); //esperar tecla
	return 0; //fin del programa se usa como bena practica de programacion


}
