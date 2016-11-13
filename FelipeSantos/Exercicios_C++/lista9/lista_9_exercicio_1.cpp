/* Faça uma função C que receba 2 números inteiros e retorne 0 se os números forem iguais, 
1 se o primeiro for maior e 2 se o segundo for maior.   */

#include<stdio.h>
#include<locale.h>
#include<conio.h>

// declarando a função

int num_maior(int a, int b){
	int resultado;
	if (a==b){
		resultado=0;
	}
	if (a>b){
		resultado=1;
	}
	if (a<b){
		resultado=2;
	}
	return 	resultado;
}
// iniciando o programa
main(){
	setlocale(LC_ALL,"Portuguese");

	int a=0,b=0,resultado=0;

printf("1- Digite um numero inteiro ==>  ");
scanf ("%i",&a);
printf("2- Digite um numero inteiro ==>  ");
scanf ("%i",&b);

resultado=num_maior(a,b);

printf("\nO resultado é %i",resultado);

}
