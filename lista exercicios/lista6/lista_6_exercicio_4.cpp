/* A partir do exerc�cio anterior, crie um novo vetor para armazenar as posi��es dos elementos pares do vetor. Exiba esse novo vetor.*/

#include<stdio.h>
#include<locale.h>
#define TAM 10

main(){
	setlocale(LC_ALL,"Portuguese");
	int vet[TAM],vetpar[TAM],i,par=0,impar=0;
	
	for (i=0;i<=9;i++)
	{
		printf ("\nEscreva um numero na posi��o %i ==>",i+1);
		scanf ("%i",&vet[i]);
	}
	for (i=0;i<=9;i++)
	{
		if(vet[i]%2)
		{
		
	} else 
	{
		printf("\n o numero %i � par e encontra-se na posi��o %i ",vetpar[i]);
	}
	}
	}	
	
		

