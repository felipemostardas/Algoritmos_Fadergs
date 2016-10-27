#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	char nome[100];
	int cont = 0, i;
	printf("Digite seu nome: \n");
	gets(nome);
	
	cont = strlen(nome);
	
	for(i=cont-1; i>=0; i--){
		printf("%c",nome[i]);
	}
}
