/* Fa�a um programa onde o usu�rio digite uma string. Crie outra string com a express�o: 
�Voc� digitou a string: �. Concatene as duas strings, de modo que o programa exiba no 
final a express�o: Voc� digitou a string: �string digitada pelo usu�rio� .*/ 

#include<stdio.h>
#include<locale.h>
#include<string.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	char nome1[50];
	char nome2[50]="Voc� digitou a string: ";
	
	printf ("digite um nome: ");
	gets (nome1);
	strcat(nome2,nome1);
	printf("\n\n %s",nome2);
}


