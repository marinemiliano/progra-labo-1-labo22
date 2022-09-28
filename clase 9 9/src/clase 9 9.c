/*
 ============================================================================
 Name        : clase.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int Dividir(int divisor, int dividendo, float *resultado);

int main(void)
{
	setbuf(stdout,NULL);

	int divisor;
	int dividendo;
	float resultado;
	int retorno;

	printf("ingrese divisor");
	scanf("%d",&divisor);

	printf("ingrese dividendo");
	scanf("%d",&dividendo);

	retorno= Dividir(divisor,dividendo,&resultado);

	if(retorno==0)
	{
		printf("no se pudo calcular la division \n");
	}
	else
	{
		printf("el resultado da %.2f",resultado);
	}
	return 0;

}

int Dividir(int divisor, int dividendo, float *resultado)
{
	int retorno;
	retorno=0;
	float resultadoDivision;

	if(dividendo != 0)
	{
		resultadoDivision= (float)divisor / dividendo;
		retorno =1;

		*resultado= resultadoDivision;
	}

	return retorno;
}
