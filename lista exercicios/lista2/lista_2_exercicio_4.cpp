/* Desenvolva um programa que verifique se o ano dado é bissexto.
* Os anos bissextos são múltiplos de 4, não múltiplos de 
100 (1900  não é bissexto) e múltiplos de 400 (2000 é bissexto). */

#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int ano; 
	printf("digite um ano para descobrir se ele é bi-sexto:\n ");
	scanf("%i",&ano);
	if(ano%400 == 0){
			printf ("o anos de: %i é bi-sexto",ano);
	}else if ((ano%4 == 0) && (ano%100 != 0)){
		printf ("o anos de: %i é bi-sexto",ano);
	}else{
		printf ("o anos de: %i não é bi-sexto",ano);
}
}
