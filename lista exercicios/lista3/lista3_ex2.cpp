/* Suponha que você atrasou uma conta. A cada mês que você deixa de pagar, será cobrado 
1% de juros no valor inicial. Ou seja, se você atrasar um mês, irá pagar 1%. Se atrasar 3 
meses, irá pagar 3% etc. Vamos supor que você pode atrasar, no máximo, 5 meses.
O programa pede, como entrada, dois valores: O valor de sua dívida inicial e a quantidade
de meses de atraso (no máximo 5). Faça um  programa em C que calculo o juros de atraso. Use switch e case acumulados.
É permitida a utilização de SOMENTE 1 COMANDO BREAK. */

#include<stdio.h>

main(){
	float val_conta=0,juros=0,taxa;
	int mes=0,x;
	printf("Digite o valor de sua divida: \n");
	scanf ("%f",&val_conta);
	printf("quantos meses em atrazo: \n");
	scanf ("%i",&mes);

	switch(x){
		case 5:
			juros++;
		case 4:
			juros++;
		case 3:
			juros++;
		case 2:
			juros++;
		case 1:
			juros++;
			break;
			default:
	printf("Invalido");
}	
taxa=(juros/100)+1;
val_conta=val_conta*taxa;
printf("divida= %.2f\n",val_conta);
}
