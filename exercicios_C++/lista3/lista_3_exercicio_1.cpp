/* Elabore um programa que solicite ao usuário que digite 2 números inteiros e após ele 
escolha uma operação à realizar, conforme segue:
A - Adição
S - Subtração
M - Multiplicação 
D - Divisão
Mostrar o resultado da operação realizada. */

#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int num1,num2;
	int calculo;
	char letra; 
		printf("digite o primeiro numero:\n ");
			scanf("%i",&num1);
		printf("digite o segundo numero:\n ");
			scanf("%i",&num2);
		printf ("Digite a opção de calculo ");
		printf ("A - Adição");
		printf ("S - Subtração ");
		printf ("M - Multiplicação ");
		printf ("D - Divisão ");
			scanf ("%c",&letra);
			switch (letra){
				
			case 'A'
				calculo=num1+num2;
		printf ("A Adição de %i + %i = %f",num1,num2,calculo);
			case 'S'
				(calculo=num1-num2);
		printf ("A subtração de %i + %i = %f",num1,num2,calculo);		
			case 'M'
				calculo=num1*num2;
		printf ("A Multiplicação de %i + %i = %f",num1,num2,calculo);				
			case 'D'
				calculo=num1/num2;
		printf ("A Divisão de %i + %i = %f",num1,num2,calculo);
}
}

