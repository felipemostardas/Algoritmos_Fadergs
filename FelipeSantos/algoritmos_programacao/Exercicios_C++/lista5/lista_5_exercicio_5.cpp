/* 5. Escreva um algoritmo que determine o fatorial de um n�mero. Para este problema, 
tem-se como entrada o valor do n�mero do qual se deseja calcular o fatorial. 
O fatorial de 0 � igual a 1. O fatorial de um n�mero N(N!) � definido conforme a seguir:
			N! = 1 * 2 * 3 * 4 * ... * (N-1) * N              
*/

#include <stdio.h>
 
main(){
int fat, n;
printf("Insira um valor para o qual deseja calcular seu fatorial: ");
scanf("%d", &n);
 
for(fat = 1; n > 1; n = n - 1)
fat = fat * n;
 
printf("\nFatorial calculado: %d", fat);
}
