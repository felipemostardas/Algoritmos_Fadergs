/* Desenvolva um programa em C que leia o dia, o m�s e o ano de uma data e 
informe se a data � v�lida ou n�o. Caso n�o seja, diga o motivo. Suponha que todos os meses tem 31 dias. */

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
			printf ("\n %i/%i/%i � uma data v�lida ",dia,mes,ano);
			}else if(ano>2016){
			printf ("\n ainda n�o chegamos em %i",ano);}
		if(mes>12){
			printf ("\n n�o existe m�s %i",mes);}
		if(dia>31){
			printf ("\n n�o existe o dia %i",mes);}

}

