/*. Suponha que você atrasou uma conta. A cada mês que você deixa de pagar, será cobrado 1% de juros no valor inicial.
Ou seja, se você atrasar um mês, irá pagar 1%. Se atrasar 3 meses, irá pagar 3% etc.
Vamos supor que você pode atrasar, no máximo, 5 meses.
O programa pede, como entrada, dois valores:
O valor de sua dívida inicial e a quantidade de meses de atraso (no máximo 5).
Faça um programa em C que calculo o juros de atraso. Use switch e case acumulados.
É permitida a utilização de SOMENTE 1 COMANDO BREAK*/

#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	float divida=0,juros=0,x=0;
	int mes=0;
	
	
		printf ("qual o valor inicial da divida?\n");	
	scanf ("%f",&divida);
		printf ("quantos meses tá em atrazo a divida?\n");	
	scanf ("%i",&mes);

	
	switch (mes){
		case 5 :		
		  x=x+1;
		  mes--;
		case 4 :
		  x=x+1;
		  mes--;
		case 3 :
		  x=x+1;
		  mes--;
		case 2 :
		  x=x+1;
		  mes--;
		case 1 :
		  x=x+1;
		  mes--;
		break;
		
	}
	juros=(x/100)+1;
	divida=(divida*juros);
	printf ("O valor da divida corrigido é, R$ %.2f\n",divida);
}
