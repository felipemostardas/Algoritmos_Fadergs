/* Elabore um programa que solicite ao usu�rio que digite 2 n�meros inteiros e ap�s ele 
escolha uma opera��o � realizar, conforme segue:
A - Adi��o
S - Subtra��o
M - Multiplica��o 
D - Divis�o
Mostrar o resultado da opera��o realizada. */

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
		printf ("Digite a op��o de calculo ");
		printf ("A - Adi��o");
		printf ("S - Subtra��o ");
		printf ("M - Multiplica��o ");
		printf ("D - Divis�o ");
			scanf ("%c",&letra);
			switch (letra){
				
			case 'A'
				calculo=num1+num2;
		printf ("A Adi��o de %i + %i = %f",num1,num2,calculo);
			case 'S'
				(calculo=num1-num2);
		printf ("A subtra��o de %i + %i = %f",num1,num2,calculo);		
			case 'M'
				calculo=num1*num2;
		printf ("A Multiplica��o de %i + %i = %f",num1,num2,calculo);				
			case 'D'
				calculo=num1/num2;
		printf ("A Divis�o de %i + %i = %f",num1,num2,calculo);
}
}

