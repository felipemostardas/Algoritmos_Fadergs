/* Desenvolva um programa em C que onde o usu�rio informe 2 valores inteiros
e o pr�prio algoritmo efetue a troca de valores de forma que a vari�vel A passe a possuir o valor da 
vari�vel B e a vari�vel B passe a possuir o valor da vari�vel  A. Apresentar os valores trocados.*/

#include<stdio.h>
#include<locale.h>
//Programa Principal
main(){
	int a;
	int b;
	int c;
	
	printf("\n\n\t Digite o Valor de A: ");
	scanf("%i",&a);
	printf("\n\n\t Digite o Valor de B: ");
	scanf("%i",&b);
	
	c=a;
	a=b;
	b=c;
	
	printf("\n\n O valor de A: %i",a);
	printf("\n\n O valor de B: %i",b);
}
