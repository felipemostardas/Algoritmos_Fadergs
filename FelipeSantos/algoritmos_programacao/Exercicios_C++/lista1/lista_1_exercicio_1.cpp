/* Desenvolva o programa em C com as seguintes funções:
Imprimir o seu nome na tela;
Imprimir o seu número de matricula;
Imprimir o preço do litro da gasolina e do etanol;
Ajuste os comandos para que apareça a  identificação de cada item impresso. */

#include<stdio.h>
#include<locale.h>
#include<string.h>

main (){
	setlocale(LC_ALL, "Portuguese");
	char nome[50];
	float gasolina=0,etanol=0;
	int matricula;
	
	printf ("\n Qual seu Nome ==>");
	scanf ("%s",&nome);
//	strcpy( nome, "Felipe");
	printf ("\n digite valor da gasolina ==>");
	scanf ("%f",&gasolina);	
//	gasolina=3,79;
	printf ("\n digite valor do etanol ==>");
	scanf ("%f",&etanol);
//	etanol=2,79;
	printf ("\n digite valor da matricula ==>");
	scanf ("%i",&matricula);	
//	matricula=12345;			
		printf ("\n o nome é: %s",nome);
		printf ("\n o numero da matricula é: %i",matricula);
		printf ("\n o valor da gasolina é: %.3f",gasolina);
		printf ("\n o valor da etanol é: %.3f",etanol);
}
