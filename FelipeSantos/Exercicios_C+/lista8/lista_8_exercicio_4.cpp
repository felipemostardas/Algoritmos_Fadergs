/* Faça um programa onde o usuário digite duas strings. Utilize a função 
strcmp()para verificar se elas são idênticas. Informe no final com mensagem adequada. .*/ 

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
		printf("\nA duas strings são iguais");
	} else{
		printf("\nAs strings não são iguais");
	}
	
}


