/*Faça um programa que leia o código dos produtos pedidos e as quantidades desejadas; 
calcule e mostre o valor a ser pago por produto (preço * quantidade) e o total do pedido. 
Considere que o cliente deve informar quando o pedido deve ser encerrado.*/

#include<stdio.h>
#include<locale.h>
#include<conio.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int produto[5]={0,0,0,0,0},itens=0,ind=0;
	
    do{	
		printf ("\n *******    Escolha o Produto Para Compra     *******");
		printf ("\n Cód       Produto                   Preço (unitário)");
		printf ("\n 1.   Cachorro quente________________________R$ 1,50");	
		printf ("\n 2.    Hamburger     ________________________R$ 2,00");
		printf ("\n 3.   Cheeseburger   ________________________R$ 2,50");
		printf ("\n 4.  Eggcheeseburger ________________________R$ 3,00");
		printf ("\n 5.    Refrigerante  ________________________R$ 1,50");
		printf("\n Que produto deseja comprar  ");
		scanf ("%i",&ind);
		printf ("\n Quantos Itens deste produto será comprado  ");
		scanf ("%i",&itens);
		produto[ind]=itens+produto[ind];
					printf("\n\n Produto comprado com sucesso \n");
								
	}while (ind=6);
}
