/* Elabore um programa que solicite ao usuário que digite 2 números inteiros e após ele 
escolha uma operação à realizar, conforme segue:
A - Adição
S - Subtração
M - Multiplicação 
D - Divisão
Mostrar o resultado da operação realizada. */

#include<stdio.h>
#include<locale.h>
#include<string.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	int num1=0;
	int num2=1;
	float calculo=0;
	char letra; 
	
	
		printf("digite o primeiro numero:\n ");
			scanf ("%i",&num1);
		printf("digite o segundo numero:\n ");
			scanf ("%i",&num2);
		
			
	printf ("\nDigite a opção de calculo ");
		printf ("\nA - Adição");
		printf ("\nS - Subtração ");
		printf ("\nM - Multiplicação ");
		printf ("\nD - Divisão \n ");
		printf ("==>");
		fflush(stdin);
		scanf("%c",&letra);

	
 printf("\n%i - %i \n",num1,num2);			
// printf("\n %c",letra);	
// printf("\n%i - %",calculo);	

		switch (letra){
				
			case 'A' :
				calculo=num1+num2;
		printf ("A Adição de %i + %i = %.f",num1,num2,calculo);
			break;
			case 'S' :
				(calculo=num1-num2);
		printf ("A subtração de %i - %i = %.f",num1,num2,calculo);		
			break;
			case 'M' :
				calculo=num1*num2;
		printf ("A Multiplicação de %i * %i = %.f",num1,num2,calculo);				
			break;
			case 'D' :
				calculo=num1/num2;
		printf ("A Divisão de %i / %i = %.f",num1,num2,calculo);
			break;
}
}

