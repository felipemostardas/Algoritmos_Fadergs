#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	char texto[100];
	int i = 0,vogal=0;
	printf("Digite um texto: ");
	gets(texto);
		
	int cont = strlen(texto);
	for(i; i<cont;i++){
		if(isalpha(texto[i])){
			switch(texto[i]){
				case 'a':
					vogal++;
					break;
				case 'e':
					vogal++;
					break;
				case 'i':
					vogal++;
					break;
				case 'o':
					vogal++;
					break;
				case 'u':
					vogal++;
					break;
			}
		}
	}
	printf("\n\n A String %s possui %i vogais.",texto,vogal);
}
