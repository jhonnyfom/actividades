#include <stdio.h> //LIBRERIAS
#include <stdlib.h>
#include <iostream>
#include <windows.h>

using namespace std; //funcion para usar palabras abreviadas cin y cout

/*Variables globales*/
char tablero[3][3];//Variable de la matriz tipo caracter 
char jugadorActual = 'X';//Variable con que se inicia el juego, esta puede cambiar en el transcurso


/*Declaracion de funciones*/
void inicializar();//Funcion de inicializacion de tablero
bool hayGanador();//Funcion para saber si hay ganador
void desplegarTablero();//Funcion para la aparicion de el tablero en pantalla
bool hayEmpate();//Funcion para saber si hay un empate
void presentacion();//Funcion para el menu
void juego();//Funcion donde esta el juego
void gotoxy(int, int);//Funcion para posicionar el programa


int main() { //se usa como buena practica de programacion para darle entrada al programa
	

	int opcion;//declarar el tipo de datos
	

	do{
		//comienzo del bucle para poder elegir la opciion
		do{			
			presentacion();
		    cout << "\n\t\t\t Introduzca opcion (1-2): "; //mostrar enpantalla
			cin >> opcion; //pedir informacion al usuario
					
			(cin.fail()||opcion<=0);
		    		cin.clear(); 
		    		cin.ignore(1024 , '\n');
			system("cls");//borrar pantalla
		}while(opcion <= 0);//Condicion para salir del bucle de pedir opcion
		
			
		switch( opcion ){ //ingreso al swich mientras se cunpla el numero que se digite ara un caso en especifico
			
			case 1:	
					juego();//llama la funcion con este nombre
		}
	
	}while(opcion != 2); //mientras se cunpla esta fucion se repetira
	
	return 0;
	system("pause");//esperar tecla
}



//funcion para inicializar el tablero
void inicializar(){	
	for(int i = 0; i < 3; i++){	//este for recorre las filas
		for(int j = 0; j < 3; j++){	//este for  recorre las columnas		
			tablero[i][j] = '_';
		}	
	}	
}

/*Funcion que imprime en pantalla el tablero*/
void desplegarTablero(){
	cout << "\n\t\t\t\t el juegodel x y 0"; //Decoracion de tablero
	cout << "\n\t\t\t\t ===============\n";//Decoracion de tablero
	for(int i = 0; i < 3; i++){//Recorrido de filas para la imprecion de tablero
		cout << "\t\t\t\t =";//Decoracion de inicio de filas
		for(int j = 0; j < 3; j++){//Recorrido de columnas para la imprecion de tablero
			cout << " [" << tablero[i][j] <<"]";//impresion de tablero	
		}
		cout << " = \n";
	}
	cout << "\t\t\t\t ===============\n";	
}


bool hayGanador(){ //funcion para saber quien es el ganador
	
	char jugadorEncontrado = tablero[0][0];//variable para saber si se esta jugando
	
	//verificacion para saber si ay un ganador en linea horizontal
	for(int i = 0; i < 3; i++){ 
		for(int j = 0; j < 3; j++){
			if(tablero[i][j] == '_'){
				break; break;
			} 
			if(jugadorEncontrado != tablero[i][j]){
				break; break;
			}
			jugadorEncontrado = tablero [i][j];
			if(j == 2){
				cout << "\n\n\t\t\t HA GANADO: " << jugadorEncontrado;
				return true;
			}
		}

	}
	
	//verificacion para saber si ay un ganador en linea vertical
	jugadorEncontrado = tablero[0][0];
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(tablero[j][i] == '_'){
				break; break;
			} 
			if(jugadorEncontrado != tablero[j][i]){
				break; break;
			}
			jugadorEncontrado = tablero [j][i];
			if(j == 2){
				cout << "\n\n\t\t\t FELICIDADES GRASIASPOR AVER PARTICIPADO.A GANADO: " << jugadorEncontrado;
				return true;
			}
		}
		
	}
	
	//Diagonal de izquierda a derecha
	jugadorEncontrado = tablero[0][0];
	for(int i = 0; i < 3; i++){
			if(tablero[i][i] == '_'){
				break;
			} 
			if(jugadorEncontrado != tablero[i][i]){
				break;
			}
			jugadorEncontrado = tablero [i][i];
			if(i == 2){
				cout << "\n\n\t\t\t FELICIDADES GRASIAS POR AVER PARTICIPADO.A GANADO:: " << jugadorEncontrado; //mostrar en pantalla
				return true;
			}
		
	}
	

	jugadorEncontrado = tablero[0][2];
	for(int i = 2; i >= 0; i--){
			if(tablero[2-i][i] == '_'){
				break;
			} 
			if(jugadorEncontrado != tablero[2-i][i]){
				break;
			}
			jugadorEncontrado = tablero [2-i][i];
			if(i == 0){
				cout << "\n\n\t\t\t FELICIDADES GRASIASPOR HABER PARTICIPADO.A GANADO:: " << jugadorEncontrado;//mostrar en pantalla
				return true;
			}
		
	}
	return false; //retornar la funcion
}

bool hayEmpate(){
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(tablero[i][j] == '_'){
				return false;
			}
		}
	}
	cout << "\n\n\t\t\t ESTO ES UN  EMPATE \n";
	return true;
}

void presentacion(){
	

	system("color 0a"); //colocar color
	//mostrar en pantalla el inicio del juego
	cout << "\n\t\t\t ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
	cout << "\n\t\t\t   Programa elaborado por:JHONNY MAURICIO IGLESIAS FONSECA \n";
	cout << "\n\t\t\t                  JUEGO DEL X Y 0. ""TRES RAYAS"" (DOS JUGADORES)  \n";
    cout << "\n\t\t\t ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
    cout << "\n\t\t\t =                       1. ENTRAR AL JUEGO                         =";
    cout << "\n\t\t\t =                       2. SALIR DEL JUEGO                         =";
    cout << "\n\t\t\t ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
}

void juego(){
	inicializar();
	while(!hayGanador() && !hayEmpate()){
		desplegarTablero();
		int fila = 0;
		int columna = 0;
		cout << endl << "\t\t\t\tFILA EN LA CUAL DESEA JUGAR" << jugadorActual << ":";
		cin >> fila;
		cout << "\t\t\t\tCOLUMNA EN LA CUAL DESEA JUGAR " << jugadorActual << ":";
		cin >> columna;
		if(tablero[fila][columna] != '_'){
			cout << "\t\t\t\tVUELVA A INTENTARLO CASILLA OCUPADA\n";
		}
		else{
			tablero[fila][columna] = jugadorActual;
			if(jugadorActual == 'X'){
				jugadorActual = 'O';
			}
			else{
				jugadorActual = 'X';
			}
		}
		cout << "\n"; //salto de linia
		system("pause"); //esperar tecla
		system("cls"); //borrar pantalla
	}
	cout << "\n"; //salto de linia
	desplegarTablero();
	cout << "\n"; //salto de linia
	system("pause"); //esperar tecla
	system("cls"); //borrar pantalla
}

void gotoxy(int x, int y){
	HANDLE Manipulador;
	COORD Coordenadas;
	Manipulador = GetStdHandle(STD_OUTPUT_HANDLE);
	Coordenadas.X = x;
	Coordenadas.Y = y;
	SetConsoleCursorPosition(Manipulador,Coordenadas);
}
