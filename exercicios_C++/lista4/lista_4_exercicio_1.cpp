/* Chico tem 1,50 metros e cresce 2 cent�metros por ano, enquanto Z� tem 1,10 metros e 
cresce 3 cent�metros por ano. Construa um algoritmo que calcule e imprima quantos anos 
ser�o necess�rios para que Z� seja maior que Chico.*/

#include<stdio.h>
#include<locale.h>
#include<conio.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	float chico=1.50,ze=1.10;
	int ano=0;
	
    while (ze<chico)
    {	
		chico=chico+0.02;
		ze=ze+0.03;
		ano++;
	getch ();
	}
	printf ("para ze ser maior que chico levou %i anos",ano);
}
