#include <iostream>
#include<stdlib.h>

using namespace std;
    int mat[5][5];//declaramos una matriz
	int mat2[5][5];
	int mat3[5][5];
	int fila,col;
	
	void llenarMat();
	void imprimirMat();
	
void llenarMat(){
	for (int fila=0;fila<5;fila++){
    for (int col=0;col<5;col++){
    	if(fila==col || fila%2==0 && col%2==0 || fila%2==1 && col%2==1){
    		mat3[fila][col]=0;
		}else{
				mat3[fila][col]=1;
		      }
	}
	}
}

void imprimirMat(){
		for (int fila=0;fila<5;fila++){
    for (int col=0;col<5;col++){
    	cout<<mat3[fila][col]<<"\t";
	}
	cout<<endl;
}

int main (int argc, char *argv[]){
llenarMat();
imprimirMat();
	
}
	






