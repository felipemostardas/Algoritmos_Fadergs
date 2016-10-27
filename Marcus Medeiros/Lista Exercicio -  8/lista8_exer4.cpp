#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	char texto1[100];
	char texto2[100];
	int verifica = 0;
	printf("Digite o texto 1: ");
	gets(texto1);
	printf("Digite o texto 2: ");
	gets(texto2);
	
	verifica = strcmp(texto1,texto2);
	
	if(verifica == 0){
		printf("\nOs textos são iguais ! ");
	}else{
		printf("\nOs textos são diferentes ! ");
	}
	
	
}
