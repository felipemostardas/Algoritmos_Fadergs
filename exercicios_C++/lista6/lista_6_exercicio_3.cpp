/* Faça um algoritmo que leia um vetor de 10 posições de inteiros e mostre a(s) posição(ões) 
onde se encontram os números pares.*/

#include<stdio.h>
#include<locale.h>
#define TAM 10

main(){
	setlocale(LC_ALL,"Portuguese");
	int vet[TAM],i,par=0,impar=0;
	
	for (i=0;i<=9;i++)
	{
		printf ("\nEscreva um numero na posição %i ==>",i+1);
		scanf ("%i",&vet[i]);
	}
	for (i=0;i<=9;i++)
	{
		if(vet[i]%2==0) printf("\n o numero %i é par e encontra-se na posição %i ",vet[i],i);
	}
	}
	
	
		

