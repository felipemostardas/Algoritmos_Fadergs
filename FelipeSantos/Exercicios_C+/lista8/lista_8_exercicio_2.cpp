/* Faça um programa onde o usuário digite uma string. Crie outra string com a expressão: 
“Você digitou a string: ”. Concatene as duas strings, de modo que o programa exiba no 
final a expressão: Você digitou a string: ‘string digitada pelo usuário’ .*/ 

#include<stdio.h>
#include<locale.h>
#include<string.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	char nome1[50];
	char nome2[50]="Você digitou a string: ";
	
	printf ("digite um nome: ");
	gets (nome1);
	strcat(nome2,nome1);
	printf("\n\n %s",nome2);
}


