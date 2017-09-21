//Programa que imprima la tabla del n al m
#include<stdio.h>
int main(int argc, char** argv) {
	
	int inf=0;
	int sup=0;
	int j=0;
	int x=0;
	printf("Ingresa el numero con el que quieres iniciar tus tablas de multiplicar");
	scanf("%d",&x);
	printf("Ingresa el numero con el que quieres que finalicen tus tablas de multiplicar");
	scanf("%d",&sup);
	for(inf=x;inf<=sup;inf=inf+1)
		for(j=1;j<=10;j=j+1)
		printf("%d x %d = %d \n",inf,j,inf*j);
		printf("\n.............\n");
		printf("Fin del programa");
	return 0;
}
