/* Fa�a um programa onde o usu�rio digite uma string. Armazene essa string em uma 
vari�vel, e copie - a para outra vari�vel. Apresente as duas strings no final.*/ 

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

