/* Para doar sangue é necessário ter entre 18 e 67 anos. 
Desenvolva um programa em C que leia a idade de uma pessoa e diga se ela pode doar sangue ou não. Use 
operadores lógicos. */

#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int ano; 
		printf("digite quantos anos você tem:\n ");
	scanf("%i",&ano);
			if(ano>=18 && ano<=67) {
			printf ("com %i anos você pode doar sangue ",ano);
			}else {
			printf ("\n com %i anos você não pode doar sangue",ano);}
		
}

