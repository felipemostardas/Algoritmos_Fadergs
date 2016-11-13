/* Faça uma função em C para calcular o teorema de Pitágoras */


#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

float pitagoras(float cat_a, float cat_b){
	float hipotenusa;
	hipotenusa= (cat_a*cat_a)+(cat_b*cat_b);
	return hipotenusa;
	
}


main (){
	float cat_a=0,cat_b=0,hipotenusa=0;
	
	printf ("Digite o tamanho do cateto a:  ");
	scanf ("%f",&cat_a);
	printf ("Digite o tamanho do cateto b:  ");
	scanf ("%f",&cat_b);
	
	hipotenusa=pitagoras (cat_a,cat_b);
	printf ("\n Hipotenusa:  %.2f",sqrt(hipotenusa));	
	
}
