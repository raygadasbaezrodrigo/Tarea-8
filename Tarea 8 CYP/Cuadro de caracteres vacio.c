//Programa que imprima el cuadrado de caracteres vacios
#include <stdio.h>

int main()
{
	int r=0,c=0;
	
	
	for(r=1; r<=6; r=r+1){
		if(r==1){
			for(c=1; c<=6; c=c+1){
				printf("+");
			}
		}
		if(r>=2&&r<=5){
			for(c=1; c<=6; c=c+1)
{
				if(c==1){
					printf("+");
				}
				if(c>=2&&c<=5){
					printf(" ");
				}
				if(r==6){
					printf("+");
				}
			}
		}
		if(r==6){
			for(c=1; c<=6; c=c+1){
				printf("+");	
			}
		}
	}
}
