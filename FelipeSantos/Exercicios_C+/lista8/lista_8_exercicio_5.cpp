/* Desenvolva um programa que receba seu nome a partir do teclado e mostre-o na tela escritode trás para frente. */ 

#include<stdio.h>
#include<locale.h>
#include<string.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	char nome[50];
	int cont;
	
    register int t;

    /* imprime o conteúdo da string de trás para frente */
    printf("%s\n", p);
    for (t = strlen(p)-1; t > -1; t--){
	
printf("%c", p[t]);	
}
	
	
	
	printf ("digite o seu nome: ");
	gets (nome);
	
}


