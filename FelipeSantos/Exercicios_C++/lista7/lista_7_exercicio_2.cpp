/* Faça um programa leia um matriz 3x3. Em seguida, exiba a soma dos elementos de cada uma das linhas  */

#include<stdio.h>
#include<locale.h>
#define L 3
#define C 3

main(){
	setlocale(LC_ALL,"Portuguese");
	int mat[L][C];
	int x,y,somal1=0,somal2=0,somal3=0;
	for(x=0;x<L;x++){
		for(y=0;y<C;y++){
			printf ("digite posição %i x %i da matriz: ",x,y);
			scanf("%i",&mat[x][y]);
		}
	}
		for(y=0;y<C;y++){
			somal1=somal1+mat[0][y];
		}	
		for(y=0;y<C;y++){
			somal2=somal2+mat[1][y];
		}
		for(y=0;y<C;y++){
			somal3=somal3+mat[2][y];
		}
		printf("\nlinha 1: %i\nlinha 2: %i\nlinha 3: %i\n",somal1,somal2,somal3);
		
}

