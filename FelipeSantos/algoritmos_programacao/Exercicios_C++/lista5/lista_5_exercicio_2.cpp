/*Faça um algoritmo que imprima os múltiplos positivos de 7, inferiores a 1000*/

#include<stdio.h>
#include<locale.h>
#include<conio.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int soma=0,cont=0;
	
    do{	
    if (cont%7==0){
		printf ("\n o numero %i é multiplo de 7",cont);
		
//	printf ("\n soma %i ",soma);
//	printf ("\n cont %i ",cont);
	}
	cont++;
//			printf ("cont é %i ",cont);
	}while (cont<=1000);
}
