/* Elabore um programa que solicite ao usu�rio que digite 2 n�meros inteiros e ap�s ele 
escolha uma opera��o � realizar, conforme segue:
A - Adi��o
S - Subtra��o
M - Multiplica��o 
D - Divis�o
Mostrar o resultado da opera��o realizada. */

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
		
			
	printf ("\nDigite a op��o de calculo ");
		printf ("\nA - Adi��o");
		printf ("\nS - Subtra��o ");
		printf ("\nM - Multiplica��o ");
		printf ("\nD - Divis�o \n ");
		printf ("==>");
		fflush(stdin);
		scanf("%c",&letra);

	
 printf("\n%i - %i \n",num1,num2);			
// printf("\n %c",letra);	
// printf("\n%i - %",calculo);	

		switch (letra){
				
			case 'A' :
				calculo=num1+num2;
		printf ("A Adi��o de %i + %i = %.f",num1,num2,calculo);
			break;
			case 'S' :
				(calculo=num1-num2);
		printf ("A subtra��o de %i - %i = %.f",num1,num2,calculo);		
			break;
			case 'M' :
				calculo=num1*num2;
		printf ("A Multiplica��o de %i * %i = %.f",num1,num2,calculo);				
			break;
			case 'D' :
				calculo=num1/num2;
		printf ("A Divis�o de %i / %i = %.f",num1,num2,calculo);
			break;
}
}

