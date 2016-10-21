/* Desenvolva um programa que efetue a leitura de dois valores inteiros e apresente a difer
ença entre o maior e o menor. (obs.: não sabemos a ordem em que serão  digitados, o 
maior pode ser tanto o primeiro quanto o segundo). */

#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int num1,num2,aux;
	printf("digite um numero inteiro:\n ");
	scanf("%i",&num1);
	printf("digite o segundo numero inteiro:\n ");
	scanf("%i",&num2);
	if (num1>=num2){
		aux=num1-num2;
		printf ("a diferença entre os dois numeros é :%i",aux);
	}else{
 		aux=num2-num1;
	printf ("a diferença entre os dois numeros é :%i",aux);
}
}
