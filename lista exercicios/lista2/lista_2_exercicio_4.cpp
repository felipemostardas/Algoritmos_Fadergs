/* Desenvolva um programa que verifique se o ano dado � bissexto.
* Os anos bissextos s�o m�ltiplos de 4, n�o m�ltiplos de 
100 (1900  n�o � bissexto) e m�ltiplos de 400 (2000 � bissexto). */

#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int ano; 
	printf("digite um ano para descobrir se ele � bi-sexto:\n ");
	scanf("%i",&ano);
	if(ano%400 == 0){
			printf ("o anos de: %i � bi-sexto",ano);
	}else if ((ano%4 == 0) && (ano%100 != 0)){
		printf ("o anos de: %i � bi-sexto",ano);
	}else{
		printf ("o anos de: %i n�o � bi-sexto",ano);
}
}
