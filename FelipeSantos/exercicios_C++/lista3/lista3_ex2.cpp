/* Suponha que voc� atrasou uma conta. A cada m�s que voc� deixa de pagar, ser� cobrado 
1% de juros no valor inicial. Ou seja, se voc� atrasar um m�s, ir� pagar 1%. Se atrasar 3 
meses, ir� pagar 3% etc. Vamos supor que voc� pode atrasar, no m�ximo, 5 meses.
O programa pede, como entrada, dois valores: O valor de sua d�vida inicial e a quantidade
de meses de atraso (no m�ximo 5). Fa�a um  programa em C que calculo o juros de atraso. Use switch e case acumulados.
� permitida a utiliza��o de SOMENTE 1 COMANDO BREAK. */

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
