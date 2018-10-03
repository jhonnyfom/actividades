//codigo fuente:calculo del total de ventas de cafe con descuento si es que aplica
//y el iva equivalente al 13%

#include <iostream>
//aqui le pediremos al compilador que use la biblioteca iostream

using namespace std ;
//en este apartado del codigo le decimos que utilice el espacio con el nombre iostream 

int main() {
	//con main le decimos al programa que en este punto inicia el programa
	
	//aqui declaramos variables de tipo double para almacenar datos o tambien valores reales
	float vt;
	//la variable vt significa venta total
	//en esta variable se almacenaran los valores de la operacion que se realizara entre
	//el numero de sacos y y el precio de cada saco de cafe el cual es igual a $100.00.
	
	float dsc;
	//la variable dsc significa descuento
	//en esta variable se almacenaran el valor resultante de multiplicar el total a pagar para
	//poder obtener el valor del decuento de su compra.
	
	float iva;
	//la variable iva es el impuesto al valor agregado que en el pais corresponde al 13%
	//pero para este caso la variable iva nos servira para poder calcular el valor deltotal que devemos pagar porel iva que seria del 13%.
	
	float ttiv;
	//la variable ttiv significa total mas iva y nos servira para almacenar el valor al 
	//sumar el valor del iva con el total de la venta hecha.
	
	float ttmndsc;
	//la variable ttmndsc, significa total menos decuento y sera utilizada para almacenar 
	//el valor al restar el total de venta menos el descuento.
	
	float numsc;
	//la variable numsc significa numero de sacos y sera utilizada para almacenar el numero de sacos
	//que el cliente desea comprar.
	
	cout << "//// BIENVENIDOS A AGROEXPORTADORA EL BUEN CAFE//// " << endl;
	//incertamos el titulo de vienvenida para el cliente.
	
	
	cout << " el precio por cada saco de cafe es de: $ 100.00 " << endl;
	//aqui declaramos el precio de cada saco de cafe es constante y es equivalente a $100.00
	//para omitir colocar otra variable
	
	cout << "   cuantos sacos de cafe desea comprar? " << endl;
	//aqui preguntamos al cliente cuantos sacos desea comprar.
	
	cin >>numsc;
	//le decimos al compilador que almacene los datos que el cliente a ingresado en la variable numcs.
	
	if (numsc < 100 ) {
		cout << " no se hace ningun descuento a la compra. " <<endl;
		//aqui realizamos la comparacion que si el numero de sacos a vender es nuemor a 100 no se hace descuento.
		
		vt=numsc*100;
		//el total de la venta se calcula al multiplicar el numero de sacos por el
		//precio de cada saco de cafe
		
		iva=vt*0.13;
		//el iva de cada venta se calculara al multiplicar el total de la venta por el 13%.
		
		ttiv=vt+iva;
		//en esta linea de codigo se sumara el total de la venta mas el iva para sacar el total de cada venta
		//mas el iva queen este caso seria el total a pagar por el cliente ya que no hay descuento.
		
		cout << " el total de la venta es: $ " <<vt<<endl;
		
		cout << " el valor del iva equivale a : " <<iva<<endl;
		
		cout << " el total a pagar seria de : " <<ttiv<<endl;
		//aqui imprimimos en la pantalla el total de la venta, el iva y el total a oagar.
		
	} 
	else if ( numsc >= 100 && numsc <= 200 ){
		//aqui comparamos la variable numsc y ordenamos al compilador que si numsc es mayor a 100 y menor que 200
		//que realice un descuento del 10% al tootal de la venta y luego calcule el iva,el total mas iva y el total a pagar.
		
		vt=numsc*100;
		
		dsc=vt*0.1;
		
		iva=vt*0.13;
		
		ttiv=vt+iva;
		
		ttmndsc=ttiv-dsc;
		
		cout << " el total de la venta es : $ " <<vt<<endl;
		
		cout << " el descuento es del 10% esto equivale a : $ " <<dsc<<endl;
		
		cout << " el valor del IVA equivale a : " <<iva<<endl;
		
		cout << " el total mas el IVA menos el descuento sera de : $ " <<ttmndsc<<endl; 
	} 
	else if ( numsc >= 200 && numsc <= 250 ){
		//aqui comaramos la variable numsc y ordenamos al compilador que si numsc es mayor a 200 y menor a 250
		//que realice un descuento del 15% al total de la venta y luego calcule el iva, el total mas el iva y el total a pagar.
		
		vt=numsc*100;
		
		dsc=vt*0.15;
		
		iva=vt*0.13;
		
		ttiv=vt+iva;
		
		ttmndsc=ttiv-dsc;
		
		cout << " la venta total es de : $ " <<vt<<endl;
		
		cout << " el descuento es del 15% esto equivale a :% " <<dsc<<endl;
		
		cout << " el valor del IVA equivale a : " <<iva<<endl;
		
		cout << " el total mas el IVA menos el descuento  sera de : $ " <<ttmndsc<<endl;
	}
	
	else if (numsc >= 250 && numsc <= 300 ){
		//aqui comparamos la variable numsc y ordenamos alcompilador que si numsc es mayor a 250 ymenor a 300
		//que realice un descuento del 20% al total de la venta y luego calcule el iva, el total mas iva y el total a pagar.
		
		vt=numsc*100;
		
		dsc=vt*0.2;
		
		iva=vt*0.13;
		
		ttiv=vt+iva;
		
		ttmndsc=ttiv-dsc;
		
		cout << " la venta total es de : $ " <<vt<<endl;
		
		cout << " el descuento es del 20% esto equivale a : $ " <<dsc<<endl;
		
		cout << " el valor del IVA equivale a : " <<iva<<endl;
		
		cout << " el total mas el iva menos el descuento sera de : $ " <<ttmndsc<<endl;
		
	}
	
	else if ( numsc >= 300 ){
		//aqui comparamos la variable numsc y ordenamos al compilador que si numsc es mayoy o igual a 300 
		//que realice un descuento del 25% al total de la venta y luego calcule el iva, al total mas iva y eltotal a pagar.
		
		vt=numsc*100;
		
		dsc=vt*0.25;
		
		iva=vt*0.13;
		
		ttiv=vt+iva;
		
		ttmndsc=ttiv-dsc;
		
		cout << " la venta total es de : $ " <<vt<<endl;
		
		cout << " el descuento es del 25% esto equivale a : % " <<dsc<<endl;
		
		cout << " el valor IVA equivale a : " <<iva<<endl;
		
		cout << " el total mas el iva menos el descuento sera de : $ " <<ttmndsc<<endl;
		 
	}
	
	
	return 0;
	//este apartadp le devuelve el control a al aconsola
}
