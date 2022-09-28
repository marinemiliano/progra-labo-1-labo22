/*
 ============================================================================
 Name        : ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Ejercicio 2-4:
Ingresar 8 números enteros, distintos de cero. Mostrar:
a. El menor número ingresado.
b. De los pares el mayor número ingresado.
c. Producto de los negativos.
d. En qué lugar fue ingresado el mayor numero
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);

	int numero;
	int menorNumero;
	int flagMenor;
	int flagPar;
	int mayorNumeroPar;
	int productoNegativos;
	int mayorNumero;
	int posicion;

	productoNegativos=1;
	flagMenor=0;
	flagPar=0;

	for(int i=0;i<3;i++)
	{
		printf("ingrese numero");
		scanf("%d",&numero);

		while(numero==0)
		{
			printf("error, reingrese numero");
			scanf("%d",&numero);
		}

		if(numero<menorNumero || flagMenor==0)
		{
			menorNumero=numero;
			flagMenor=1;
		}

		if(numero % 2 == 0)
		{
			if(numero>mayorNumeroPar || flagPar==0)
			{
				mayorNumeroPar=numero;
				flagPar=1;
			}
		}

		if(numero<0)
		{
			productoNegativos*=numero;
		}

		if(i==0 || numero>mayorNumero)
		{
			mayorNumero=numero;
			posicion=i;
		}

	}
	printf("el menor numero es el %d\n",menorNumero);
	printf("el numero par mayor es el %d\n",mayorNumeroPar);
	printf("el numero mas grande esta en la posicion %d\n",posicion+1);

	if(numero<0)
	{
		printf("el producto de los negativos es el %d\n",productoNegativos);
	}
	else
	{
		printf("no se ingresaron numeros negativos");
	}

	return EXIT_SUCCESS;
}
