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

//void CargarVector_Generico(int numero[], int tam);
//void MostrarVector_Generico(int numero[],int tam);

int main(void)
{
	setbuf(stdout,NULL);

	int legajo[5];
	int notas [5];
	int max;
	int flag;
	flag=0;
	int flag2;
	flag2=0;

	for(int i=0;i<5;i++)
		{
			printf("ingrese legajo");
			scanf("%d",legajo[i]);

			if(flag==0 || legajo[i]>max)
			{
				max=legajo[i];
				flag=1;
			}
		}

		for(int i=0;i<5;i++)
		{
			printf("ingrese nota");
			scanf("%d",notas[i]);

			if(flag2==0 || legajo[i]>max)
			{
				max=legajo[i];
				flag2=1;
			}
		}

		for(int i=0;i<5;i++)
		{
			printf("%d\n",legajo[i]);
		}

		printf("el legajo mayor es %d",max);

		return 0;

		/*CargarVector_Generico(legajo,T);
		MostrarVector_Generico(legajo,T);*/


	return 0;
}


/*void CargarVector_Generico(int numero[], int tam)
{
	int i;
	for(i=0;i<tam;i++)
	{
		printf("ingrese numero");
		scanf("%d",&numero[i]);
	}

}

void MostrarVector_Generico(int numero[],int tam)
{
	int i;
	for(i=0;i<tam;i++)
	{
		printf("%d \n",numero[i]);
	}
}*/

