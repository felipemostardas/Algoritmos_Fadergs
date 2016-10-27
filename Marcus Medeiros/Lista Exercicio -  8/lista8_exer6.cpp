#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	char texto[100];
	char textoInv[100];
	int cont = 0, i,x=0;
	printf("Digite um texto: \n");
	gets(texto);
	
	cont = strlen(texto);
	
	for(i=cont-1; i>=0; i--){
		textoInv[x]= texto[i];
		x++;
	}
	
	printf("\n\n Correto => %s\n Invertido => %s",texto,textoInv);
}
