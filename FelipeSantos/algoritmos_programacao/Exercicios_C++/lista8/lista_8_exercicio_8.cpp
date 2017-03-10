/* Faça um programa C que leia uma string e mostre a quantidade de cada vogal que a string possui. */

#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

main(){
	char str[50];
	int x=0,a=0,e=0,i=0,o=0,u=0;
	
	printf ("Digite uma string:  ");
	gets (str);
	
	for(x= 0; x < strlen(str);x++){
		
		if (str[x]=='a' || str[x]=='A'){
			a++;}
		if (str[x]=='e' || str[x]=='E'){
			e++;}
		if (str[x]=='i' || str[x]=='I'){
			i++;}
		if (str[x]=='o' || str[x]=='O'){
			o++;}			
		if (str[x]=='u' || str[x]=='U'){
			u++;									
		}
}
	
printf ("\n existem nessa string %i veses a letra A",a);	
printf ("\n existem nessa string %i veses a letra E",e);
printf ("\n existem nessa string %i veses a letra I",i);
printf ("\n existem nessa string %i veses a letra O",o);
printf ("\n existem nessa string %i veses a letra U",u);	
	
}
