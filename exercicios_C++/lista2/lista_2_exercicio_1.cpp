/* A partir da idade informada de uma pessoa, desenvolva um programa que informe a sua 
classe eleitoral, sabendo que   menores de 16 n�o votam (n�o votante), que o voto � 
obrigat�rio para adultos entre 18 e 65 (eleitor obrigat�rio) e que o voto � opcional para 
eleitores entre 16 e 18, ou maiores de 65 (eleitor facultativo). */

#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int idade;
	printf("Qual sua Idade?\n ");
	scanf("%i",&idade);
	if (idade<16){
		printf ("N�o Votante!");}
	if((idade>=16 && idade<18) || (idade>65)){
		printf("eleitor facultativo");}	
	if (idade>=18 && idade<=65){
		printf ("eleitor obrigat�rio");
	}
}
