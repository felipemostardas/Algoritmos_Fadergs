/* Desenvolva um programa que efetue a leitura de tr�s valores inteiros e apresente os 
n�meros que s�o divis�veis por 2 e por 3. */

#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int num1,num2, num3,*p=0; 
		printf("digite o primeiro numero:\n ");
			scanf("%i",&num1);
		printf("digite o segundo numero:\n ");
			scanf("%i",&num2);
		printf("digite o terceiro numero:\n ");
			scanf("%i",&num3);
		while (p<4)
		{
		
				if (num&p%2==0){
		printf ("o numero %i � divis�vel por 2",num*p);}
				if (num&p%3==0){
		printf ("o numero %i � divis�vel por 3",num*p);}
	 p++;
	}
}

