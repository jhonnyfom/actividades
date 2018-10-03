#include<cstdlib>
#include<iostream>
#include<windows.h>
//TAREA:tablas de multipicar de 10
using namespace std;

int main(int argc, char *argv[])
{  
	float notas[5] ;
	float suma=0;
	float promedio;
	for(int i=0 ; i<=4 ; i++)
	
	{ do{
		system("cls");
	cout<<"ingrese la nota " << i+1<<endl;
	cin>>notas[i];
} while(notas[i]<0 || notas[1>10]);
suma=suma+notas[i];//acumula la sumatoria de notas
}/*salida de datos en la pantalla*/
system("cls");

    /*for(int i=0 ; i<=4 ; i++)
	{
    	cout<<"la nota es: "<<i++<<endl;
	}*/
     promedio=suma/5;
     cout<<"el promedio es de:  "<<promedio<<endl;

   system("pause");
   return EXIT_SUCCESS;
}
