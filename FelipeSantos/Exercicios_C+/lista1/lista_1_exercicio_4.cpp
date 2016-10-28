/*Desenvolva um programa em C que exibe a idade em dias de uma pessoa.*/

#include<stdio.h>
#include<locale.h>

main (){
	setlocale(LC_ALL,"Portuguese");
	int idade,dias;
		printf ("digite a idade:\n");
		scanf ("%i",&idade);
		dias=idade*365;
		printf("sua idade em dias é: %i",dias); printf(" dias");
}
