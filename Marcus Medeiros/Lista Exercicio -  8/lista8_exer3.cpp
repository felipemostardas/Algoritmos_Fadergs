#include <stdio.h>
#include <string.h>
#include <locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	
	char texto1[100];
	char texto2[100];
	int cont1 = 0, cont2 = 0;
	
	printf("Digite o primeiro texto: ");
	gets(texto1);
	
	printf("Digite o segundo texto: ");
	gets(texto2);
	
	cont1 = strlen(texto1);
	cont2 = strlen(texto2);
	
	if(cont1 > cont2){
		printf("O Primeiro Texto (%s) é maior",texto1);
	}else if(cont1 == cont2){
		printf("\n\nOs textos possuem o mesmo tamanho! \ntexto 1 = (%s)\ntexto 2 = (%s)",texto1,texto2);
	}else{
		printf("O Segundo Texto (%s) é maior",texto2);
	}
	
	
}
