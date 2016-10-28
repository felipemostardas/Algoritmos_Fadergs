/* Desenvolva um programa em C que leia um número inteiro e  informe se o número é par 
ou ímpar. */

#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int num; 
		printf("digite um numero:\n ");
	scanf("%i",&num);
		if(num%2==0){
			printf ("\n O numero %i é par",num);
	}else {
	printf ("\n O numero %i é impar",num);
}
}
