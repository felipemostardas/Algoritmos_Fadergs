/* Desenvolva um programa que receba seu nome a partir do teclado e mostre-o na tela escrito de trás para frente. */ 

#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<conio.h>


main(){
char str1[50],str2[50];
int cont1,cont2;
printf("Digite seu nome: ");
gets(str1);
cont2 = strlen(str1) - 1 ;
for(cont1 = 0; cont1 < strlen(str1);cont1++)
{
str2[cont2] = str1[cont1];
cont2--;
}
str2[cont1] = '\0';
printf("%s\n",str2);
getch();
}
