/* Fa�a um algoritmo que leia um vetor de 10 posi��es de inteiros e mostre a(s) posi��o(�es) 
onde se encontram os n�meros pares.*/


/* A partir do exerc�cio anterior, crie um novo vetor para armazenar as posi��es dos elementos pares do vetor.
 Exiba esse novo vetor.*/

#include<stdio.h>
#include<locale.h>
#define TAM 10

main(){
	setlocale(LC_ALL,"Portuguese");
	int vet[TAM]={0,0,0,0,0,0,0,0,0,0},i,par=0,impar=0,indvetpar=0,ind=0;
	
	for (i=0;i<=9;i++){
		printf ("\nEscreva um numero na posi��o %i ==>",i+1);
		scanf ("%i",&vet[i]);
	}
	for (i=0;i<=9;i++){
		
		if(vet[i]%2==0){
		printf("\n o numero %i � par e encontra-se na posi��o %i ",vet[i],i);
		indvetpar++;
		}
		
		}
	
	int vetpar[indvetpar];
//	printf ("\n\n %i",indvetpar);
	printf ("\n\n segunda parte do algoritmo, vetor par");
	
	for (i=0;i<=9;i++){
		if(vet[i]%2==0){
			vetpar[ind]=vet[i];
			ind++;
		}		 
	}
	for (i=0;i<indvetpar;i++){
		printf("\n o numero %i � par e encontra-se na posi��o %i ",vetpar[i],i);
		}		
	
	}
