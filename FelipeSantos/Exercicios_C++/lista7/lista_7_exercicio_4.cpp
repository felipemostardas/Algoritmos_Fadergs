/* Escreva um algoritmo que leia uma matriz 4x3. Em seguida, receba um novo valor do usu�rio
 e verifique se este valor se encontra na matriz. Caso o valor se encontre na matriz, 
 escreva a mensagem �O valor se encontra na matriz�. Caso contr�rio, escreva a mensagem 
 �O valor N�O se encontra na matriz�.   */

#include<stdio.h>
#include<locale.h>
#define L 4
#define C 3

main(){
	setlocale(LC_ALL,"Portuguese");
	int mat[L][C];
	int x,y,busca,cont=0;
	char sn;
	for(x=0;x<L;x++){
		for(y=0;y<C;y++){
			printf ("digite posi��o %i x %i da matriz: ==> ",x,y);
			scanf("%i",&mat[x][y]);
		}
	}
			
	for(x=0;x<L;x++){
		printf("\n");
		for(y=0;y<C;y++){
			printf("%4i",mat[x][y]);
		}
		}
	do{
	cont=0;
	printf ("\n qual numero gostaria de testar se tem na matriz ==> ");
	scanf ("%i",&busca);
	for(x=0;x<L;x++){
		for(y=0;y<C;y++){
			if (mat[x][y]==busca){
				printf ("\n O numero %i foi encontrado na posi��o %i X %i da matriz",busca,x,y);
				cont++;
			} 
				
		}
		}	
		if (cont==0){
				printf ("\n O valor N�O se encontra na matriz");
			}
				printf ("\n\n deseja testar outro numero s/n ==> ");	
			scanf ("%s",&sn);
					
	}while (sn=='s');
}

