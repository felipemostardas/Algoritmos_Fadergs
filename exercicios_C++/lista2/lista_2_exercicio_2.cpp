/* Uma empresa decidiu dar um aumento escalonado a  seus funcion�rios de acordo com a 
seguinte regra: 13%  para os sal�rios at� R$ 1.200,00;  11%  para os sal�rios 
at� R$ 2.400,00;  9 % para os sal�rios at� R$  3.800,00 e 7% para os demais sal�rios. 
Desenvolva um programa que receba o sal�rio atual de um funcion�rio e  forne�a o valor do seu novo 
sal�rio  */

#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	float salario,novosalario;
	printf("Qual seu sal�rio?\n ");
	scanf("%f",&salario);
	if (salario<=1200.00){
		novosalario=salario*1.13;
		printf ("Novo Salario �:%.2f",novosalario);
}else if (salario<=2400.00){
		novosalario=salario*1.11;
		printf ("Novo Salario �:%.2f",novosalario);
}else if (salario<=3800.00){
		novosalario=salario*1.09;
		printf ("Novo Salario �:%.2f",novosalario);
}else {
	novosalario=salario*1.07;
	printf ("Novo Salario �:%.2f",novosalario);}
}
