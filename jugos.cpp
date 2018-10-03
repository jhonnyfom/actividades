//programa creado por: jhonny mauricio iglesias  crnet:if 18001
//este programa es realizado con la finaliada que al ingresarle la cantidad de soda 
//o jugo que se le dijite va a mostrar la cantidad de los ingredientes nesesario para producir esa cantidad


#include <iostream> //librerias
using namespace std; //abrebiacion de palabras
void cantidad(int producto){ //funcion sin retorno
	int cantidad; //definir el tipo de datos
	int agua; //definir el tipo de datos
	int azucar;//definir el tipo de datos
	if (producto == 1){ //si se cunple la condicion se realizara esta accion
		cout<<"ingrese la catidad de soda a producir"<<endl; //inprimir en pantalla
		cin>>cantidad; //pedir informacion al usuario
		agua = cantidad =500; //igualar en la variable 
		azucar = cantidad =800;//igualar en la variable 
		
	}
	else if(producto == 2)//si se elije la opcon 2 se ara esta acion
	{
		cout<<"ingrese la catidad de jugo a producir"<<endl;//inprimir en pantalla
		cin>>cantidad;//pedir informacion al usuario
		agua = cantidad =600; //igualar en la variable 
		azucar =cantidad =700; //igualar en la variable 
		 
	}
	cout<<"la cantidad de agua que se va utilizar sera de :"<<agua<<"ml"<<endl; //inprimir en pantalla el resultado
	cout<<"la cantidad total de azucar que se va utilizar sera de :"<<azucar<<"g"<<endl;

}
int main() { //darle entrada al programa
	int producto; //declarar el tipo de dato
	cout <<"elija una bebida : "<<endl; //mostrar en pantalla
	cout<<"1.soda"<<endl;//dar opciones al usuario
	cout<<"2.jugo"<<endl;
	cin>>producto;//esperar a que digite la informacion
	system("cls");//borar pantalla
	cantidad(producto);//llamar a las funciones realizadas con este nombre
	return 0;//no retorna nada
}
