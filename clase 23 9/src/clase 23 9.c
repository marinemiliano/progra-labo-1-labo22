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

typedef struct
{
	int id;
	char nombre[51];
	char apellido[51];
	float salario;
	int sector;
	int isEmpty;

}eEmpleado;

int inicializarEmpleado(eEmpleado empleado[],int tam);

int main(void)
{
	setbuf(stdout,NULL);
	int
	eEmpleado empleado[TAM];

	if(empleado != NULL && tam >0)
	{

	}

	return EXIT_SUCCESS;
}

int cargarEmpleado(eEmpleado empleado[],int tam)
{
	int retorno;
	int i;

	if(empleado != NULL && tam > 0)
	{
		i=buscarLbre(empleado,tam)
	}
}

eEmpleado crearEmpleado(int id)
{
	eEmpleado empleado;

	empleado.id=id;
	printf("ingrese su nombre");

	return empleado;
}

int buscarLbre(eEmpleado[],int tam)
{
	int retorno;
	retorno=-1;

	for(int i=0;i<tam;i++)
	{
		if()
		retorno=
	}
}

int inicializarEmpleado(eEmpleado empleado[],int tam)
{
	int retorno;
	retorno=1;

	if(empleado != NULL)
	{
		for(int i=0;i<tam;i++)
		{
			empleado[i].isEmpty=1;
		}
		retorno=0;
	}
	return retorno;
}
