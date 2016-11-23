/* Faça uma função C que receba como parâmetros uma string e um caracter e indique quantas vezes este
 caracter está presente na string.
Ex. função conta_caracter(“casa”,’a’) -> 2 */

#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

int conta_caracter(char str[50], char letra[1]){
	int x,y;
	for(y= 0; y < strlen(str);y++){
		
		if (str[y] == letra[0]){
			x++;
		}
	}
		return x;
	
}


main(){
	setlocale(LC_ALL,"Portuguese");
	char str[50];
	char letra[1];
	int x=0;
	
	printf ("Digite uma string:  ");
	gets (str);
	printf ("Digite uma letra para ver quantas ocorencias tem:  ");
	gets(letra);
	
	x=conta_caracter(str,letra);
		
	printf ("\n existem nessa string %i veses a letra %s ",x,letra);	

}
