/* Desenvolva um programa em C que calcule o consumo médio de combustível de um carro,
onde o usuário informa a distância total percorrida e o total de combustível gasto.*/

#include<stdio.h>
#include<locale.h>

main (){
	setlocale(LC_ALL,"Portuguese");
	float distancia,consumo,totalcomb;
		printf ("digite a distância percorrida:\n");
		scanf ("%f",&distancia);
		printf ("digite o consumo total de combustivel:\n");
		scanf ("%f",&totalcomb);
		consumo=distancia/totalcomb;
		printf("Seu carro está fazendo: %.2f KM/litro",consumo);
}
