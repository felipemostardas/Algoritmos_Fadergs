/* Desenvolva um programa em C que leia tr�s n�meros inteiros e mostre ao final o maior e o menor dos n�meros digitados. */

#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int num1,num2,num3; 
		printf("digite o Primeiro numero:\n ");
	scanf("%i",&num1);
		printf("digite o Segundo numero:\n ");
	scanf("%i",&num2);
		printf("digite o Terceiro numero:\n ");
	scanf("%i",&num3);	
	if(num1>num2 && num1>num3){
			printf ("\n O maior numero �: %i",num1);
	}else if (num2>num1 && num2>num3){
			printf ("\n O maior numero �: %i",num2);
	}else if (num3>num2 && num3>num1){
			printf ("\n O maior numero �: %i",num3);
}
	if(num1<num2 && num1<num3){
			printf ("\n O menor numero �: %i",num1);
	}else if (num2<num1 && num2<num3){
			printf ("\n O menor numero �: %i",num2);
	}else if (num3<num2 && num3<num1){
			printf ("\n O menor numero �: %i",num3);
}
}
