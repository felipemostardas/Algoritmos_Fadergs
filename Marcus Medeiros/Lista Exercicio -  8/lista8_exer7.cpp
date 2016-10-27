#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	char texto[100];
	int i = 0;
	printf("Digite um texto: ");
	gets(texto);
		
	int cont = strlen(texto);
	for(i; i<cont;i++){
		if(isalpha(texto[i])){
			printf("Posição: %i\n",i);
		}
	}
}
