//calcular un numero factirial utilizando el ciclo for

#include<iostream>
#include<cstdlib>
#include<math.h>

using namespace std;

int factorial(int num){
	for (int x=1; x<=num; x++ )
    {
    	int fact=1;
	  fact = fact*x;
    }
    
    return fact;
}
main(int argc, char *argv[])
{
   int num;
  // int fact=1;
   
   cout<<"dijite un numero: ";
   cin>>num;
   cout<<"el resultado es: "<<factorial (num)<<endl;
    system("pause");
	return 0;
}
