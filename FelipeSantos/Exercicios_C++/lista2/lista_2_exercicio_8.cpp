/* Para doar sangue � necess�rio ter entre 18 e 67 anos. 
Desenvolva um programa em C que leia a idade de uma pessoa e diga se ela pode doar sangue ou n�o. Use 
operadores l�gicos. */

#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int ano; 
		printf("digite quantos anos voc� tem:\n ");
	scanf("%i",&ano);
			if(ano>=18 && ano<=67) {
			printf ("com %i anos voc� pode doar sangue ",ano);
			}else {
			printf ("\n com %i anos voc� n�o pode doar sangue",ano);}
		
}

