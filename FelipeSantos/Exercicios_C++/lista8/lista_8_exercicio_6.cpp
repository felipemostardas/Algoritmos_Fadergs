/* Desenvolva um programa que receba uma string a partir do teclado e a armazene em uma vari�vel. 
O programa dever� armazenar a string informada invertida em outra vari�vel. Ap�s, a invers�o, 
 mostrar o conte�do das duas vari�veis. */ 

#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>


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
system("cls");
printf("%s\n",str1);
printf("%s\n",str2);

getch();
}


