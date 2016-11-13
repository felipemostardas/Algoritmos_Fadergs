/* Faça uma função C que receba como parâmetros um vetor de 10 posições de inteiros e um número
 inteiro e retorne a posição em que se encontra o número informado no vetor. 
 Caso não seja encontrado, retornar -1. */
 
#include<stdio.h>
#include<locale.h>

int func_posicao(int vet[10],int num){
	int posicao,y,x=0;
		
		for(y= 0; y < 10;y++){
				if (vet[y]==num){
					posicao=y;
					x++;
			}
			
		}
		
			if (x<=0){
				posicao=-1;
			}
		//	printf ("x e %i",x);
		return posicao;
}



main (){
	int vet[10]{9,8,7,6,5,4,3,2,1,0},num=0,posicao;
	
	printf ("Digite um numero:  ");
	scanf ("%i",&num);
	
	posicao= func_posicao (vet,num);
	printf ("\n posicao  %i",posicao);	
	
}
