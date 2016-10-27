/* Faça um programa que lê uma matriz M(5,5) e calcule as somas: 
? da linha 3ª de M; 
? da coluna 4ª de M; 
? da diagonal principal; 
? da diagonal secundária; 
? de todos os elementos da matriz; 
Escreva estas somas e a matriz.   */

#include<stdio.h>
#include<locale.h>
#define L 5
#define C 5

main(){
	setlocale(LC_ALL,"Portuguese");
	int mat[L][C];
	int x,y,soma3l=0,soma4c=0,somadp=0,somads=0;
	for(x=0;x<L;x++){
		for(y=0;y<C;y++){
			printf ("digite posição %i x %i da matriz: ",x,y);
			scanf("%i",&mat[x][y]);
		}
	}
		//soma terceira linha
		for(y=0;y<C;y++){
			soma3l=soma3l+mat[2][y];
		}	
		//soma quarta coluna
		for(x=0;x<L;x++){
			soma4c=soma4c+mat[x][3];
		}
		
		//soma diagoanal principal
	for(x=0;x<L;x++){
		for(y=0;y<C;y++){
			if (x==y){
			somadp=somadp+mat[x][y];
		}
		}
	}
		//soma diagoanal secundaria
	for(x=0;x<L;x++){
		for(y=0;y<C;y++){
			if (x+y==L-1){
			somads=somads+mat[x][y];
		}
		}
	}

	
	for(x=0;x<L;x++){
		printf("\n");
		for(y=0;y<C;y++){
			printf("%4i",mat[x][y]);
		}
		}

printf("\n SOMA LINHA 3: %i",soma3l);
printf("\n SOMA coluna 4: %i",soma4c);	
printf("\n SOMA DP: %i",somadp);	
printf("\n SOMA DS: %i",somads);	

}

