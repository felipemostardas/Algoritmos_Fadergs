#include<stdio.h>
#include<locale.h>
#include<conio.h>

main(){
	setlocale(LC_ALL,"portuguese");
	int sair=0,senha=0,tent_senha=0,menu=0,pesopet=0,produto=0,itens=0;
	do{	
	printf ("\n Digite senha:  ");
	scanf ("%i",&senha);
	if(senha==1){
		printf ("\n Bem vindo ao sistema da Pet");
		do{
		printf ("\n 1. Banho e tosa");
		printf ("\n 2. Compra de produtos");
		printf ("\n 3. Gerar nota fiscal");
		printf ("\n 4. Zerar nota fiscal");
		printf ("\n 0. Encerrar o sistema \n\n");
		scanf("%i",&menu);
		
			switch(menu){
				case 1:
					printf ("\n Serviço de banho e Tosa");
					printf ("\n Digite o peso do Pet em KG:  ");
					scanf("%i",&pesopet);
					break;
				case 2:
					printf ("\n *******    Escolha o Produto Para Compra     *******");
					printf ("\n 1. RAÇÃO PARA GATOS 2KG_____________________R$ 10,00");	
					printf ("\n 2. RAÇÃO PARA CÃES  2KG_____________________R$ 12,50");
					printf ("\n 3. REMEDIO A23 _____________________________R$ 30,10");
					printf ("\n 4. VACINA B87 ______________________________R$ 70,00 \n");
					scanf ("%i",&produto);
					printf ("\n Quantos Itens deste produto será comprado");
					scanf ("%i",&itens);
					
					break;
				case 3:
					break;
				case 4:
					break;
				case 0:
					printf("\n Encerrando o sistema.");
					sair=1;
					break;
				default:
						("Digite uma opção existente");
			}
		}while(menu!=0);		
	} else{
		printf ("\n senha incorreta");
		tent_senha++;
			if(tent_senha==3){
				sair=1;
				printf ("\n deslogando por excesso de tentativas");	
		}
	}
}while (sair==0);
}
