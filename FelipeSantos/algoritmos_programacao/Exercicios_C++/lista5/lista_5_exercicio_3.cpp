/* 3. Fa�a um algoritmo que imprima todos os n�meros pares compreendidos entre 85 e 907.
 O algoritmo deve tamb�m calcular a soma e exibir a quantidade destes valores. */
 
 
 #include<stdio.h>
#include<locale.h>
#include<conio.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int soma=0,cont=85,quant=0;
	printf ("Numeros pares entre 85 e 907 \n\n");
    do{	
		if (cont%2==0){
			
			printf (", %i",cont);
			soma=soma+cont;
			quant++;
		}
		cont++;
//	printf ("\n soma %i ",soma);
//	printf ("\n cont %i ",cont);			
	}while (cont<=907);
	printf ("\n\n\n A soma de todos os pares � %i, e entre 85 e 907 existem %i numeros pares ",soma,quant);
}




