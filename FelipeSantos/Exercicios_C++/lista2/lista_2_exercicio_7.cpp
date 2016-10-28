/* Desenvolva um programa em C que leia o dia, o mês e o ano de uma data e 
informe se a data é válida ou não. Caso não seja, diga o motivo. Suponha que todos os meses tem 31 dias. */

#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int dia,mes,ano; 
		printf("digite o ano:\n ");
	scanf("%i",&ano);
		printf("digite o mes:\n ");
	scanf("%i",&mes);
		printf("digite o dia:\n ");
	scanf("%i",&dia);	
		if((ano>=0 && ano<=2016) && (mes>=1 && mes<=12) && (dia>=1 && dia<=31)) {
			printf ("\n %i/%i/%i é uma data válida ",dia,mes,ano);
			}else if(ano>2016){
			printf ("\n ainda não chegamos em %i",ano);}
		if(mes>12){
			printf ("\n não existe mês %i",mes);}
		if(dia>31){
			printf ("\n não existe o dia %i",mes);}

}

