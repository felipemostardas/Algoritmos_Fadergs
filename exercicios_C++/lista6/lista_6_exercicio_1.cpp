/* Crie um algoritmo que armazene em um vetor a idade de 5 pessoas. Em seguida, informe a 
idade da pessoa nas posições 0 , 3 e 4 do vetor.*/

#include<stdio.h>
#include<locale.h>
#define TAM 5

main(){
	setlocale(LC_ALL,"Portuguese");
	int idade[TAM],i;
	
	for (i=0;i<=4;i++)
	{
		printf ("\nEscreva a idade da %i pessoa ==>",i+1);
		scanf ("%i",&idade[i]);
	}
	for (i=0;i<=4;i++)
	{
		if(i==0 or i==3 or i==4)
		printf ("\n A idade da %i pessoa é %i",i+1,idade[i]);
		
	}	
		
}
