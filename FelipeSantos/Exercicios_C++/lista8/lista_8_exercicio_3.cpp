/* Faça um programa onde o usuário digite duas strings. Utilize a função 
strlen() para contar quantos caracteres existem em cada string e apresente no final qual string é maior. 
Informe se são iguais no tamanho .*/ 

#include<stdio.h>
#include<locale.h>
#include<string.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	char nome1[50];
	char nome2[50];
	int cont1,cont2;
	
	printf ("digite o primeiro nome: ");
	gets (nome1);
	printf ("digite o segundo nome : ");
	gets (nome2);
	cont1=strlen(nome1);
	cont2=strlen(nome2);
	
	if(cont1>cont2){
		printf("a string maior é a primeira contendo o texto %s",nome1);
	} else {
		printf("a string maior é a Segunda contendo o texto %s",nome2);		
	}
	
}


