/* Fa�a um programa C que leia uma matriz 3x3 de inteiros e mostre a(s) posi��o(�es) 
onde se encontra(m) o(s) n�mero(s) �mpar(es). */

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
			printf ("digite posi��o %i x %i da matriz: ==> ",x,y);
			scanf("%i",&mat[x][y]);
		}
	}
			
	for(x=0;x<L;x++){
		for(y=0;y<C;y++){
			if (mat[x][y]%2!=0){
			
			printf("\n na posi��o %i X %i tem %i que � impar",x,y,mat[x][y]);
		}
		}
		}
}

