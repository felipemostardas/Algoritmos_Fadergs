/*   Uma imobiliária solicitou um sistema que faça simulações de valores para compra e locação.

Desenvolva um programa em C, utilizando funções, com as seguintes especificações:
	
	1) Um menu com as opções: compra, locação e sair
	2) No caso de compra, perguntar ao usuário se a compra será a vista ou com financiamento.

		a. Informar o valor do imóvel
		b. Caso seja a vista, apresentar em tela o valor do ITBI, 
		   que corresponde a 3,5% do valor do imóvel, e o valor final do mesmo com o ITBI.
		c. Se a compra for financiada, o usuário deve informar: o valor da entrada, 
		   o valor do FGTS caso o utilize no pagamento e a quantidade de parcelas 
		   que deseja pagar o saldo devedor. Deverá ser aplicado juros de 11% ao ano às parcelas.

				Apresentar em tela a composição dos valores, contendo: o valor da entrada, 
				o valor utilizado do FGTS se for o caso, a quantidade e o valor de cada
 				parcela e o valor do ITBI a pagar, sendo respeitadas as seguintes taxas:

						3,5% para recursos próprios
						0,5% para recursos financiados
						0,5% para recursos de FGTS
	
	3) No caso de Locação, solicitar que o usuário informe o valor do imóvel e o valor do aluguel. 
		Deverá ser apresentada em tela a composição dos valores a serem pagos mensalmente, a saber:
		
		a. O valor do condomínio é calculado de acordo com a metragem do imóvel, sendo cobrado o 
		valor de R$ 5,00 por metro quadrado.
		
		b. Valor da taxa bancária: R$ 3,50
		c. Será cobrado o valor do IPTU mensalmente, respeitando a seguinte tabela:
						
						imóveis residenciais: 0,85% do valor do imóvel ao ano
						imóveis não-residenciais: 1,10% do valor do imóvel ao ano
						terrenos: 1,00% do valor do imóvel ao ano
						imóveis utilizados na produção agrícola: 0,03% do valor do imóvel ao ano  */

#include<stdio.h>
#include<locale.h>
#include<conio.h>

//•Passagem de parâmetros por valor:
// declarando a função

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
