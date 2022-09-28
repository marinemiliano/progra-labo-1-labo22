/*
 ============================================================================
 Name        : ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Ejercicio 3-4: Especializar la función del punto 3.1 y 3.2
 para que valide el número en un rango determinado.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void recibirNumero(int numero);
float ingresoNumero();

int main(void)
{
	setbuf(stdout,NULL);
	float numero;
	float numeroFlotante;

	printf("ingrese un numero");
	scanf("%f",&numero);

	while(numero<0 || numero>5)
	{
		printf("error, reingrese numero");
		scanf("%f",&numero);
	}

	recibirNumero(numero);


	numeroFlotante=ingresoNumero();
	printf("el numero flotante es %.2f",numeroFlotante);



	return 0;
}

void recibirNumero(int numero)
{
	printf("el numero es %d\n",numero);
}

float ingresoNumero()
{
	float numero;

	printf("ingrese numero");
	scanf("%f",&numero);

	while(numero<0 || numero>10)
	{
		printf("error, reingrese numero");
		scanf("%f",&numero);
	}
	return numero;
}
