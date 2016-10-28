/* Um a empresa decidiu dar um aumento escalonado a  seus funcionários de acordo com a 
seguinte regra: 13%  para os salários até R$ 1.200,00;  11%  para os salários 
até R$ 2.400,00;  9 % para os salários até R$ 3.800,00 e 7% para os demais salários. 
Desenvolva um programa que receba o salário atual de um funcionário e  forneça o valor do seu novo 
salário */

#include<stdio.h>
#include<locale.h>

main(){
	float salario=0;
	printf("\n\n\t Digite o Valor do salario Atual:");
	scanf("%f",&salario);
	if (salario<=1200,00)
	{ 
	salario=salario*1,13
	} else if (salario<=2400,00){
		salario=salario*1,11
	}	
	
}
