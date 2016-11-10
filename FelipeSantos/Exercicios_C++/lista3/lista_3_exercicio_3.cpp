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
		case 1:case 3:case 5:case 7:case 8:case 10:case 12:
			if(mes==1 or mes==3 or mes==5 or mes==7 or mes==8 or mes==10 or mes==12){
			printf ("O Mês %i tem %i dias",mes,dia);
	}
		case 4:case 6:case 9:case 11:
			dia=dia-1;
			if (mes==4 or mes==6 or mes==9 or mes==11){
			printf ("O Mês %i tem %i dias",mes,dia);
		}
		case 2:
			dia=dia-3;
			if (mes==2){	
			printf ("O Mês %i tem %i dias",mes,dia);
		}
			break;
		default :
			printf("sem case para isso");
			break;
}

}
