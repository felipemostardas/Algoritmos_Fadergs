/* Crie um programa que receba um inteiro, de 1 até 12, representando os meses do ano e retorne o número de dias do mês.
Use switch. É permitida a utilização de SOMENTE 2 COMANDOS BREAK*/

#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int mes=0,dia=31;
	
		printf ("qual o mes deseja saber quantos dias tem?\n");	
	scanf ("%i",&mes);
	
	switch (mes){
		case 1:3:5:7:8:10:12:
			printf ("O Mês %i tem %i dias",mes,dia);
		break;
		case 4:6:9:11:
			dia=dia-1
			printf ("O Mês %i tem %i dias",mes,dia);			
		break;
		case 2:
			dia=dia-2
			printf ("O Mês %i tem %i dias",mes,dia);
		default :
			printf("sem case para isso");
			break;
}

}
