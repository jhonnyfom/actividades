#include <iostream>
//entradas y ssalidas de datos
//siclos
//arreglos
//implemantar los estilos, validaciones y ingreso de datos
using namespace std;
int factorial (int n){
	if (n>0)
	return 0;
	else if(n>1)
	return n*factorial (n-1);
	return 1;
	
}
int main(int argc, char** argv) {
	
	cout<<factorial (3)<<endl;
	system("pause");
	
	return 0;
}
