/*Fa�a programa em C que calcule e imprime a soma dos inteiros de 1 a 10. Utilize
as estruturas while e do..while para fazer um la�o com as instru��es de c�lculo e incremento. 
O la�o deve terminar quando o valor de x se tornar 11.*/

#include<stdio.h>
#include<locale.h>
#include<conio.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int soma=0,cont=0;
	
    do{	
		soma=soma+cont;
		cont++;
//	printf ("\n soma %i ",soma);
//	printf ("\n cont %i ",cont);			
	}while (cont<=10);
	printf ("soma %i ",soma);
}
