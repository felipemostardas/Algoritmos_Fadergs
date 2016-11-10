/*Faça um programa que leia o código dos produtos pedidos e as quantidades desejadas; 
calcule e mostre o valor a ser pago por produto (preço * quantidade) e o total do pedido. 
Considere que o cliente deve informar quando o pedido deve ser encerrado.*/

#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<stdlib.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	int quantidadeproduto[5]={0,0,0,0,0},itens=0,ind=0;
	float valorproduto[5]={1.5,2,2.5,3,1.5},totalproduto[5]={0,0,0,0,0},total;
	char sn;	
    do{	
		printf ("\n *******    Escolha o Produto Para Compra     *******");
		printf ("\n Cód       Produto                   Preço (unitário)");
		printf ("\n 1.   Cachorro quente________________________R$ 1,50");	
		printf ("\n 2.    Hamburger     ________________________R$ 2,00");
		printf ("\n 3.   Cheeseburger   ________________________R$ 2,50");
		printf ("\n 4.  Eggcheeseburger ________________________R$ 3,00");
		printf ("\n 5.    Refrigerante  ________________________R$ 1,50");
		printf("\n\n Que produto deseja comprar ==> ");
		scanf ("%i",&ind);
		printf ("\n\n Quantos Itens deste produto será comprado ==> ");
		scanf ("%i",&itens);
		quantidadeproduto[ind-1]=quantidadeproduto[ind-1]+itens;
	
		printf("\n >>> Produto comprado com sucesso <<< ");	
		
		for (ind=0;ind<5;ind++){
			totalproduto[ind]=(quantidadeproduto[ind]*valorproduto[ind]);
			total=total+totalproduto[ind];		
		}
		
		system("cls");

		printf ("\n *******     Produtos Comprados e valor      *******");
		printf ("\n Cód       Produto                   Quantidade          Valor");
		printf ("\n 1.   Cachorro quente_________________   %i    _______    %.2f ",quantidadeproduto[0],totalproduto[0]);	
		printf ("\n 2.    Hamburger     _________________   %i    _______    %.2f ",quantidadeproduto[1],totalproduto[1]);
		printf ("\n 3.   Cheeseburger   _________________   %i    _______    %.2f ",quantidadeproduto[2],totalproduto[2]);
		printf ("\n 4.  Eggcheeseburger _________________   %i    _______    %.2f ",quantidadeproduto[3],totalproduto[3]);
		printf ("\n 5.    Refrigerante  _________________   %i    _______    %.2f ",quantidadeproduto[4],totalproduto[4]);	
		printf ("\n\n	            	Total de Produtos comprados ==> %.2f",total);	
		
	


			printf ("\n\n deseja continuar comprando S/N ==> ");	
			scanf ("%s",&sn);								
	}while (sn=='s');
}
