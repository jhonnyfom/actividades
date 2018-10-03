#include<iostream> //libreria entrada y salidas
using namespace std; //para poder usar la funciones de la libreria iostream
int main (){  //para dar inicio al programa se usa main como buena practica d eprogramacion
 
 bool a=true;//significa que la variable a es falsa o verdadera
  if (a || 5>6){ //si la condicion se cunple se realizaran las acciones dentro de if 
     cout<<"5 > 6"; //acciones si la condicion es verdadera
  }
  else if(!a){ //si la condicion es verdadera para else if si no pasara al else
  	cout<<"2323"; //acciones si la condicion es verdadera
  }
  else{ //si la condicion es verdadera para else 
  	cout<<"6 > 5"; //acciones si la condicion es verdadera
  }


return 0; //fin del programa se usa como bena practica de programacion
}
