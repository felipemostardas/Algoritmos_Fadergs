/*Desenvolva um programa que calcule um salário informado acrescido de 15%. Mostre o 
salário atual e o novo salário corrigido*/

#include<stdio.h>
#include<locale.h>

main (){
	setlocale(LC_ALL,"Portuguese");
	float salario,novosalario;
		printf ("digite seu salario:\n");
		scanf ("%f",&salario);
		novosalario=salario*1.15;
		printf("\n\n\nsalario atual é: %.2f\n",salario);
		printf("Novo salario é: %.2f\n",novosalario);
		
}
