/* Desenvolva um programa em C que calcule o consumo m�dio de combust�vel de um carro,
onde o usu�rio informa a dist�ncia total percorrida e o total de combust�vel gasto.*/

#include<stdio.h>
#include<locale.h>

main (){
	setlocale(LC_ALL,"Portuguese");
	float distancia,consumo,totalcomb;
		printf ("digite a dist�ncia percorrida:\n");
		scanf ("%f",&distancia);
		printf ("digite o consumo total de combustivel:\n");
		scanf ("%f",&totalcomb);
		consumo=distancia/totalcomb;
		printf("Seu carro est� fazendo: %.2f KM/litro",consumo);
}
