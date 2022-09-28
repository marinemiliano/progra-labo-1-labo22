/*
 ============================================================================
 Name        : ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Ejercicio 5-1: Pedir 5 números enteros, guardarlos en un Array.
 Calcular la sumatorio de los mismos y mostrar los impares ingresados.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	setbuf(stdout,NULL);
	int arrayNumeros[5];

	for(int i=0;i<5;i++)
	{
		printf("ingrese un entero");
		scanf("%d",&arrayNumeros[i]);
	}

	for(int i=0;i<5;i++)
	{
		printf("%d\n",arrayNumeros[i]);
	}

	return 0;
}
