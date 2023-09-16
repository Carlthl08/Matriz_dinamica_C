//Realizar un programa que copie el contenido de una matriz en otra y todo de manera dinamica
/*Ejemplo visual

//**m1 -> *m1->[int][int]
          *m1->[int][int]
          *m1->[int][int]

123    1    -> 2 3   
456    4    -> 5 6  
789    7    -> 8 9
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int filas, colum,i,j;
	int **m1;
	int **m2;
	
	printf("Introduce el numero de filas: \n");
	scanf("%d", &filas);
	printf("Introduce el numero de columnas: \n");
	scanf("%d", &colum);
	
	m1=(int**)malloc(filas*sizeof(int*)); //reservando memoria para la filas 
	if(m1==NULL)
	{
		printf("Error: No se ha podido reservar memoria \n");
		exit(1);
	}
	
	for(i=0; i<filas; i++)
	{
		m1[i]=(int*)malloc(colum*sizeof(int)); //reservando memoria para las columnas
		if(m1[i]==NULL)
		{
			printf("Error: No se ha podido reservar memoria \n");
			exit(1);
		}
	}
	
	system("clear");
	
	for(i=0; i<filas; i++)
	{
		for(j=0; j<colum; j++)
		{
			printf("Ingrese los valores de la matriz: \n");
			scanf("%d", &m1[i][j]);
		}
	}
	
	m2=(int**)malloc(filas*sizeof(int*));
	if(m2==NULL)
	{
		printf("Error: No se ha podido reservar memoria \n");
		exit(1);
	}
	
	system("clear");
	
	for(i=0; i<filas; i++)
	{
		m2[i]=(int*)malloc(colum*sizeof(int));
		if(m2==NULL)
		{
			printf("Error: No se ha podido reservar memoria \n");
			exit(1);
		}
	}
	
	printf("La matriz digitada es: \n\n");
	
	for(i=0; i<filas; i++)
	{
		for(j=0; j<colum; j++)
		{
			m2[i][j]=m1[i][j];
			printf("%d", m2[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	system("pause");
	return 0;
}
