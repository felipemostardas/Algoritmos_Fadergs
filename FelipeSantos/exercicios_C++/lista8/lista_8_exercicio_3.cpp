/* Fa�a um programa onde o usu�rio digite duas strings. Utilize a fun��o 
strlen() para contar quantos caracteres existem em cada string e apresente no final qual string � maior. 
Informe se s�o iguais no tamanho .*/ 

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
		printf("a string maior � a primeira contendo o texto %s",nome1);
	} else {
		printf("a string maior � a Segunda contendo o texto %s",nome2);		
	}
	
}


