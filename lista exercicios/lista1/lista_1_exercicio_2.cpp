/* Desenvolva um programa em C que receba dois números e exiba o resultado da sua soma*/

#include<stdio.h>
#include<locale.h>

main (){
	setlocale(LC_ALL,"Portuguese");
	int num1,num2,soma;
		printf ("digite o primeiro numero:\n");
		scanf ("%i",&num1);
		printf ("digite o segundo numero:\n");
		scanf ("%i",&num2);
		soma=num1+num2;
		printf("A soma é: %i",soma);
}
