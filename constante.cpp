// constante.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include "conio.h"
#include"math.h"

using namespace std;

int main(){
	int n , mayor, menor, numero, i;
	float promedio, suma;
	cout<<"ingrese una cantidad n de numeros"<<endl;
	cin>>n;
	i=1;
	suma=0;
	cout<<"ingrese un valor: ";
	cin>>numero;

	mayor=numero; // se coloca el primer valor pedido
	menor=numero; // se coloca el primer valor pedido

	while(i<=n)
	{
		i=i+1; // aumentar el contador
		suma=suma+numero; // acumulador de la suma 

		if (mayor<numero)
			mayor = numero;
		if (menor>numero)
			menor= numero;
		if (i<=n){
			cout<<"ingrese un valor: ";
	        cin>>numero;
		}
	}

	cout<<"el resultado quedo en la variable mayor: " <<mayor<<endl;
	cout<<"el resultado quedo en la variable menor: " <<menor<<endl;
	cout<<"el promedio es : "<<suma/n;
	getch();
}

	


