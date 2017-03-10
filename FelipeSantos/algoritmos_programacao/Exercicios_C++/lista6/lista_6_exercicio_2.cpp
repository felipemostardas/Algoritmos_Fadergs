/* Crie um algoritmo que armazene em um vetor 10 números inteiros . Após, exiba a soma de 
números pares e a soma dos números ímpares constantes no vetor.*/

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
		if(vet[i]%2)
		{
		impar=impar+vet[i];
	} else 
	{
		par=par+vet[i];
	}
	}	
	printf ("\na soma dos pares é ==> %i",par);
	printf ("\na soma dos impares é ==> %i",impar);	
		
}
