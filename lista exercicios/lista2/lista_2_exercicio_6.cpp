/* Desenvolva um programa em C que leia um n�mero inteiro e  informe se o n�mero � par 
ou �mpar. */

#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int num; 
		printf("digite um numero:\n ");
	scanf("%i",&num);
		if(num%2==0){
			printf ("\n O numero %i � par",num);
	}else {
	printf ("\n O numero %i � impar",num);
}
}
