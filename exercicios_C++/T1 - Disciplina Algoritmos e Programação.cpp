#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<stdlib.h>

main(){
	setlocale(LC_ALL,"portuguese");
	int sair=0,senha=0,tent_senha=0,menu=0,pesopet=0,produto=0,itens=0,vetnota[5]={0,0,0,0,0};
	char contcompra;
	int banhotosa=0,totalnota=0;
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
					system("cls");
					printf ("\n Serviço de banho e Tosa\n\n");
					printf ("\n Digite o peso do Pet em KG:  ");
					scanf("%i",&pesopet);
						if(pesopet>=1 && pesopet<=5){
							banhotosa=30;
						}
						if(pesopet>=6 && pesopet<=10){
							banhotosa=35;
						}
						if(pesopet>=11 && pesopet<=15){
							banhotosa=40;
						}
						if(pesopet>=16 && pesopet<=20){
							banhotosa=45;
						} 
						if(pesopet>20){
							banhotosa=pesopet+45;
						}
						vetnota[0]=banhotosa;
						printf ("\n valor do Banho e tosa é %i\n\n\n",banhotosa);
					break;
				case 2:
					do{
					system("cls");
					printf ("\n *******    Escolha o Produto Para Compra     *******");
					printf ("\n 1. RAÇÃO PARA GATOS 2KG_____________________R$ 10,00");	
					printf ("\n 2. RAÇÃO PARA CÃES  2KG_____________________R$ 12,50");
					printf ("\n 3. REMEDIO A23 _____________________________R$ 30,10");
					printf ("\n 4. VACINA B87 ______________________________R$ 70,00 \n");
					printf("Que produto deseja comprar  ");
					scanf ("%i",&produto);
					printf ("\n Quantos Itens deste produto será comprado  ");
					scanf ("%i",&itens);
					vetnota[produto]=itens+vetnota[produto];
					printf("\n\n Produto comprado com sucesso \n");
					printf("\n deseja continuar comprando S/N \n");
					fflush(stdin);
					scanf("%c",contcompra);
					//contcompra = toupper(contcompra);
					} while (contcompra=='S');
					
					break;
				case 3:
					totalnota=totalnota+(10*vetnota[1]);
					totalnota=totalnota+(12*vetnota[2]);
					totalnota=totalnota+(30*vetnota[3]);
					totalnota=totalnota+(70*vetnota[4]);
					totalnota=totalnota+vetnota[0];
					system("cls");
					printf ("\n *******             Nota Fiscal         *******");
					printf ("\n    Produto                 itens     Valor ");					
					printf ("\n Banho e Tosa------------- %i Kg----R$ %i",pesopet,vetnota[0]);					
					printf ("\n RAÇÃO PARA GATOS 2KG----- %i-------R$ %i",vetnota[1],10*vetnota[1]);	
					printf ("\n RAÇÃO PARA CÃES  2KG----- %i-------R$ %i",vetnota[2],12*vetnota[2]);
					printf ("\n REMEDIO A23 ------------- %i-------R$ %i",vetnota[3],30*vetnota[3]);
					printf ("\n VACINA B87 -------------- %i-------R$ %i\n",vetnota[4],70*vetnota[4]);
					printf ("\n #########################   Total= R$ %i\n\n\n\n",totalnota);					
					
					break;
				case 4:
					pesopet=0;
					vetnota[0]=0;
					vetnota[1]=0;
					vetnota[2]=0;
					vetnota[3]=0;
					vetnota[4]=0;
					vetnota[5]=0;
					printf ("nota zerada com sucesso");
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
//}while (tent_senha>3 || menu==0); //tentativa frustrada de fazer funcionar	
}while (sair==0);
}
