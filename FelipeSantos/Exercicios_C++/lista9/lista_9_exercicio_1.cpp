/* Fa�a uma fun��o C que receba 2 n�meros inteiros e retorne 0 se os n�meros forem iguais, 
1 se o primeiro for maior e 2 se o segundo for maior.   */

#include<stdio.h>
#include<locale.h>
#include<conio.h>

//�Passagem de par�metros por valor:
// declarando a fun��o

void troca(int a, int b){
int temp;
temp=a;
a=b;
b=temp;
}
// iniciando o programa
main(){
int a=2,b=3;
printf("Antes de chamar a funcao:\na=%d\nb=%d\n",a,b);
troca(a,b);
printf("Depois de chamar a funcao:\na=%d\nb=%d\n",a,b);
getch();
}
