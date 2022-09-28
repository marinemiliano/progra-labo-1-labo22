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

int obtenerValor(int *resultado, int arrayEnteros[], int tam);
//int obtenerValor(int *indice, int arrayEnteros[]);

int main(void)
{
	setbuf(stdout,NULL);

	int arrayEnteros[5]={20,5,35,78,1};
	int resultado;
	int resultadoSuma;

	resultado=obtenerValor(&resultadoSuma,arrayEnteros,5);

	if(resultado==0)
		{
			printf("no se pudo calcular");
		}
		else
		{
			printf("el resultado de la suma es %d",resultadoSuma);
		}
	return 0;
}

//como accedemos al array que nos pasan a la posicion que nos pasan
//el array se inicializa con basura, lo que tenemos que hacer es cargarlo
//devolver el valor que esta en el indice que nos pasaron

/*int obtenerValor(int indice, int arrayEnteros[])
{
	int i;
	i=0;
	int suma;
	suma=0;
	int retorno;
	retorno=0;
	printf("%d\n",indice);

			si el i es mayor a 0 y menor al tamaño comienza a iterar
			for(i=0;i<tam;i++)
			{
				suma+=arrayEnteros[i];
			}

			si el i es mayor a 0 y menor al tamaño comienza a iterar
			if(i > 0)
			{
			*resultado=suma;
			retorno=1;
			}
		return retorno;

	return arrayEnteros[indice];
}*/

int obtenerValor(int *resultado, int arrayEnteros[],int tam)
{
	int i;
	i=0;
	int suma;
	suma=0;
	int retorno;
	retorno=0;
	//si el tamaño es mayor a 0 ya entra al for. y hace todas las operaciones

	if(tam > 0 && arrayEnteros != NULL)
		{
			for(i=0;i<tam;i++)
				{
					suma+=arrayEnteros[i];
				}
			*resultado=suma;
			retorno=1;
		}
		return retorno;
}


