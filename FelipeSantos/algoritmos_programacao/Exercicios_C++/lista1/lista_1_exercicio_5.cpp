/*Desenvolva um programa que calcule um sal�rio informado acrescido de 15%. Mostre o 
sal�rio atual e o novo sal�rio corrigido*/

#include<stdio.h>
#include<locale.h>

main (){
	setlocale(LC_ALL,"Portuguese");
	float salario,novosalario;
		printf ("digite seu salario:\n");
		scanf ("%f",&salario);
		novosalario=salario*1.15;
		printf("\n\n\nsalario atual �: %.2f\n",salario);
		printf("Novo salario �: %.2f\n",novosalario);
		
}
