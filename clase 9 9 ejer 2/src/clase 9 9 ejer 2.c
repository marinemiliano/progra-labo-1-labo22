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
//#define T 5

int obtenerValor(int *resultado, int arrayEnteros[], int tam);
int inicializarArray(int entero, int arrayEnteros[],int tam);

int main(void)
{
	setbuf(stdout,NULL);

	//devolver el elemento que nos hayan pasado en el indice

	int array[5]={1,20,5,8,6};
	int resultado;

	int resultadoSuma;

	inicializarArray(-1,array,5);

	resultado=obtenerValor(&resultadoSuma,array,5);

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

//no estamos devolvinedo por return ni por referencia
//cuando pasamos el array con corchetes en realidad estamos pasandole
//un puntero. los array guardan varios elementos y los elementos estan
//guardados en un espacio de memoria.
//no se hacen copias de valores sino de referencia, que apunten
//modifico el array que me pasan como cuando me pasan el "&" o sea la
//direccion de memoria que yo podia modificarlo, aca pasa lo mismo

//me pasan el puntero se modifica en memoria y todos los que accedan a ese
//array no se copia el array, porque cualquiera que lo modifique se va a pasar a funcion

int obtenerValor(int *resultado, int arrayEnteros[], int tam)
{
	int i;
	i=0;
	int suma;
	suma=0;
	int retorno;
	retorno=0;

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

//el valor del entero -1 es el que va a estar en todas las posiciones
//inicializa el array -1 sabemos de esta forma si esta vacio o no
//si es -1 es que esta vacio
//cuando llames a obtener valor ahi pones para que sea
//distinto al que inicializaste antes
int inicializarArray(int entero, int arrayEnteros[],int tam)
{
	for(int i=0;i<tam;i++)
	{
		arrayEnteros[i]=entero;
	}

	return 0;
}

