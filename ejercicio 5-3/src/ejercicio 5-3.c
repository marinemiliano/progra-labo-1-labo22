/*
 ============================================================================
 Name        : ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Ejercicio 5-3: Realizar una función que reciba como parámetros un array de enteros y
un entero por referencia. La función calculara el máximo valor de ese array y utilizara
el valor por referencia para retornar ese valor.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void array(int *entero,int listaNumeros[],int tam);

int main(void)
{
	setbuf(stdout,NULL);

	int arrayNumeros[5]={1,6,50,8,9};
	int entero;

	array(&entero,arrayNumeros,5);

	printf("el numero por referencia es el %d\n",entero);

	return 0;
}

void array(int *entero,int listaNumeros[],int tam)
{
	int flag;
	int mayor;
	flag=0;
	int numero;
	numero=10;
	*entero=numero;

	for(int i=0;i<5;i++)
	{
		if(flag==0 || listaNumeros[i] > mayor )
		{
			mayor=listaNumeros[i];
			flag=1;
		}
	}
	printf("el numero mayor es %d \n",mayor);
}
