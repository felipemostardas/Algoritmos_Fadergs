/* Faça um programa C que leia uma string e mostre as posições em que se encontram somente as letras do alfabeto.
 Utilize a função isalpha. */ 

#include <stdio.h>
#include <ctype.h>

int main (){
  int i=0;
  char str[50];

	printf("Digite seu nome: ");
		gets(str);
  
	while (str[i]){
    if (isalpha(str[i])) printf (" %c faz parte do alfabeto\n",str[i]);
    i++;
  }
}
