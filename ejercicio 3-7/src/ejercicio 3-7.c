/*
 ============================================================================
 Name        : ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Ejercicio 3-7: Realizar un programa que: asigne a las variables numero1 y numero2
los valores solicitados al usuario, valide los mismos entre 10 y 100, asigne a la
variable operacion el valor solicitado al usuario, valide el mismo 's'-sumar, 'r'-restar,
realice la operación de dichos valores a través de una función. Mostrar el resultado
por pantalla.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int Sumar(int numero1, int numero2);
int Resta (int numero1, int numero2);

int main(void)
{
	setbuf(stdout,NULL);
	int numero1;
	int numero2;
	int resultado;
	char operacion;

	printf("ingrese numerooooo 1");
	scanf("%d",&numero1);

	while(numero1<10 || numero1>100)
	{
		printf("error reingrese numero 1");
		scanf("%d",&numero1);
	}

	printf("ingrese numero 2");
	scanf("%d",&numero2);

	while(numero2<10 || numero2>100)
	{
		printf("error reingrese numero 1");
		scanf("%d",&numero2);
	}

	printf("ingrese la letra 'r' o 's' ");
	fflush(stdin);
	scanf("%c",&operacion);

	switch(operacion)
	{
	case 'r':
				resultado=Resta(numero1, numero2);
				printf("el resultado de la resta es %d",resultado);
		break;

	case 's':
				resultado=Sumar(numero1, numero2);
				printf("el resultado de la suma es %d",resultado);
		break;
	}
	return 0;
}

int Sumar(int numero1, int numero2)
{
	int resultado;

	resultado= numero1 + numero2;

	return resultado;
}
int Resta (int numero1, int numero2)
{
	int resultado;

	resultado= numero1 - numero2;

	return resultado;
}

