/* Fa�a um programa onde o usu�rio digite duas strings. Utilize a fun��o 
strcmp()para verificar se elas s�o id�nticas. Informe no final com mensagem adequada. .*/ 

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
	
	if(strcmp(nome1,nome2)==0){
		printf("\nA duas strings s�o iguais");
	} else{
		printf("\nAs strings n�o s�o iguais");
	}
	
}


