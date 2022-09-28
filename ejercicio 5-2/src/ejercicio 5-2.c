/*
 ============================================================================
 Name        : ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Ejercicio 5-2: Hacer una función que calcule el
 promedio de los valores del Array que recibe y me devuelva el promedio.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);

	int arrayNumeros[5];
	int suma;
	suma=0;
	int contador;
	contador=0;
	float promedio;

	for(int i=0;i<5;i++)
	{
		printf("ingrese numero");
		scanf("%d",&arrayNumeros[i]);

		contador++;
		suma+=arrayNumeros[i];
	}
	promedio=(float)suma/contador;

	printf("%.2f",promedio);

	return 0;
}
