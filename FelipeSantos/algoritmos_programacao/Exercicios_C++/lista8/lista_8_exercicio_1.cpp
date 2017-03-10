/* Faça um programa onde o usuário digite uma string. Armazene essa string em uma 
variável, e copie - a para outra variável. Apresente as duas strings no final.*/ 

#include<stdio.h>
#include<locale.h>
#include<string.h>

main(){
	
	char nome1[50];
	char nome2[50];
	
	printf ("digite um nome: ");
	gets (nome1);
	strcpy(nome2,nome1);
	printf("nome1 %s \nnome2 %s",nome1,nome2);
}
//

