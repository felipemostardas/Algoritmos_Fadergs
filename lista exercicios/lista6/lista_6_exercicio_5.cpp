/* Escreva um algoritmo que leia dois vetores de 10 posi��es e fa�a a soma dos elementos de 
mesmo �ndice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante. */

#include<stdio.h>
#include<locale.h>
#define TAM 10

main(){
	setlocale(LC_ALL,"Portuguese");
	int vet1[TAM],vet2[TAM],vetsoma[TAM],i,par=0,impar=0;
	
	for (i=0;i<=9;i++)
	{
		printf ("\nEscreva um numero na posi��o %i no vetor 1 ==>",i+1);
		scanf ("%i",&vet1[i]);
		printf ("\nEscreva um numero na posi��o %i no vetor 2 ==>",i+1);
		scanf ("%i",&vet2[i]);
		vetsoma[i]=vet1[i]+vet2[i];
	}
	for (i=0;i<=9;i++)
	{
		printf("\n valor na posi��o %i � a soma de %i + %i = %i ",i,vet1[i],vet2[i],vetsoma[i]);
	}
	}
	
		

