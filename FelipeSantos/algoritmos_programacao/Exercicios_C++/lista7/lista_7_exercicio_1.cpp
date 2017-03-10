/* Faça um programa que leia uma matriz 3x3 e exiba a matriz preenchida */

#include<stdio.h>
#include<locale.h>
#define L 3
#define C 3

main(){
	setlocale(LC_ALL,"Portuguese");
	int mat[L][C];
	int x,y;
	for(x=0;x<L;x++){
		for(y=0;y<C;y++){
			printf ("digite posição %i x %i da matriz: ",x,y);
			scanf("%i",&mat[x][y]);
		}
	}
	for(x=0;x<L;x++){
		printf("\n");
		for(y=0;y<C;y++){
			printf (" %4i ",mat[x][y]);
		}
	}
}

