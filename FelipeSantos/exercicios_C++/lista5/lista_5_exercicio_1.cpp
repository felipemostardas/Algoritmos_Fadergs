/*Some os números de 1 a 100 e imprima o valor*/

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
	}while (cont<=100);
	printf ("soma %i ",soma);
}
