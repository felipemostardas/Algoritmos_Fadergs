/*   Uma imobili�ria solicitou um sistema que fa�a simula��es de valores para compra e loca��o.

Desenvolva um programa em C, utilizando fun��es, com as seguintes especifica��es:
	
	1) Um menu com as op��es: compra, loca��o e sair
	2) No caso de compra, perguntar ao usu�rio se a compra ser� a vista ou com financiamento.

		a. Informar o valor do im�vel
		b. Caso seja a vista, apresentar em tela o valor do ITBI, 
		   que corresponde a 3,5% do valor do im�vel, e o valor final do mesmo com o ITBI.
		c. Se a compra for financiada, o usu�rio deve informar: o valor da entrada, 
		   o valor do FGTS caso o utilize no pagamento e a quantidade de parcelas 
		   que deseja pagar o saldo devedor. Dever� ser aplicado juros de 11% ao ano �s parcelas.

				Apresentar em tela a composi��o dos valores, contendo: o valor da entrada, 
				o valor utilizado do FGTS se for o caso, a quantidade e o valor de cada
 				parcela e o valor do ITBI a pagar, sendo respeitadas as seguintes taxas:

						3,5% para recursos pr�prios
						0,5% para recursos financiados
						0,5% para recursos de FGTS
	
	3) No caso de Loca��o, solicitar que o usu�rio informe o valor do im�vel e o valor do aluguel. 
		Dever� ser apresentada em tela a composi��o dos valores a serem pagos mensalmente, a saber:
		
		a. O valor do condom�nio � calculado de acordo com a metragem do im�vel, sendo cobrado o 
		valor de R$ 5,00 por metro quadrado.
		
		b. Valor da taxa banc�ria: R$ 3,50
		c. Ser� cobrado o valor do IPTU mensalmente, respeitando a seguinte tabela:
						
						im�veis residenciais: 0,85% do valor do im�vel ao ano
						im�veis n�o-residenciais: 1,10% do valor do im�vel ao ano
						terrenos: 1,00% do valor do im�vel ao ano
						im�veis utilizados na produ��o agr�cola: 0,03% do valor do im�vel ao ano  */

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
