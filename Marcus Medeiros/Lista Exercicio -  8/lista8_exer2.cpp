#include <stdio.h>
#include <string.h>
#include <locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	char texto[100];
	char texto2[100] = "Você digitou a string: ";
	
	printf("Digite uma string: ");
	gets(texto);
	
	strcat(texto2,texto);
	
	printf("%s",texto2);
}
