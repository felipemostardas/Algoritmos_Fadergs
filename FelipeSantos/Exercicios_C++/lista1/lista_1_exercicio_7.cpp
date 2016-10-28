/*Desenvolva um programa em C para calcular o teorema de Pitágoras.*/

#include<stdio.h>
#include<math.h>
#include<locale.h>

main (){
	setlocale(LC_ALL,"Portuguese");
	int a,c;
	float h;
		printf ("digite o valor de a:\n");
		scanf ("%i",&a);
		printf ("digite o valor de c:\n");
		scanf ("%i",&c);
		h=sqrt((a*a)+(c*c));
		printf("A hipotenusa é: %f",h);		
}
