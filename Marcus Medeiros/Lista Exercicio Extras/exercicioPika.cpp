#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>	
main(){
	setlocale(LC_ALL,"Portuguese");
	int senha;
	int gambi = 0;
	int tentativa=0;
	int cont;
	float conta =0,acrecimo = 0;
	int nota[30];
	do{
		printf("\n\n\tDigite a senha para iniciar o programa: \n\n\t");
		scanf("%i",&senha);
	
		if(senha == 1){
			system("cls");
			printf("\n\n\t\t\tLogado com sucesso");
			gambi  = 1;
		
			int opt;
			printf("\n\n\t\t## Bem vindo ao sistema ## ");
			do{
		
			printf("\n\n\t ### Conta do cliente: R$ %.2f #",conta);
			printf("\n\n\n\t 1 - Banho e Tosa \n\t 2 - Compra de produtos \n\t 3 - Gerar Nota Fiscal \n\t 4 - Zerar nota fiscal \n\t 0 - Sair do sistema");
			printf("\n\n\n\tDigite: ");
			scanf("%i",&opt);
			
			switch(opt){
				case 1:
					float peso;
					system("cls");
					printf("\n\n\tBanho e tosa");
					printf("\n\n\tDigite o peso do animal : \n\n\t");
					scanf("%f",&peso);
					
					if(peso <= 5){
						conta+=30.00;
						nota[cont] = 10;						
					}else if((peso>5)&&(peso<=10)){
						conta+=35.00;
							nota[cont] = 11;
					}else if((peso>10)&&(peso<=15)){
						conta+=40.00;
							nota[cont] = 12;
					}else if((peso>15)&&(peso<=20)){
						conta+=45.00;	
							nota[cont] = 13;
					}else{
						acrecimo = 45.00+peso;
						conta+=acrecimo;
							nota[cont] = 14;
					}
					
					break;
				case 2: 
					int codigo;
					
					system("cls");
					printf("\n\n\tCompra de produtos");
					printf("\n\n\t1 - Ração para gatos(2KGS).....R$10,00");
					printf("\n\n\t2 - Ração para cães(2KGS)......R$12,50");
					printf("\n\n\t3 - Remédio A23................R$30,10");
					printf("\n\n\t4 - Vacina B87.................R$70,00");
					printf("\n\n\tDigite o código do produto: ");
					scanf("%i",&codigo);
					
					switch(codigo){
						case 1: 
							conta+=10.00;
							nota[cont] = 1;
							break;
						case 2: 
							conta+=12.50;
							nota[cont] = 2;
							break;
						case 3: 
							conta+=30.10;
							nota[cont] = 3;
							break;
						case 4: 
							conta+=70.00;
							nota[cont] = 4;
							break;
						default:
							printf("\n\n\tEsse produto não existe !");
					}
					
				
					break;
				case 3: 
				int x;
					system("cls");
					printf("\n\n\t Nota Fiscal DATA : %s HORA: %s\n",__DATE__,__TIME__);
					for(x = 0; x<cont; x++){
						switch(nota[x]){
							case 1: 
								printf("\n\n\t Ração para gatos(2KGS).....R$10,00");
								break;
							case 2:
								printf("\n\n\t Ração para cães(2KGS)......R$12,50");
								break;
							case 3:
								printf("\n\n\t Remédio A23................R$30,10");
								break;
							case 4:
								printf("\n\n\t Vacina B87.................R$70,00");
								break;
							case 10:
								printf("\n\n\t Banho e Tosa...............R$30,00");
								break;
							case 11:
								printf("\n\n\t Banho e Tosa...............R$30,00");
								break;
							case 12:
								printf("\n\n\t Banho e Tosa...............R$35,00");
								break;
							case 13:
								printf("\n\n\t Banho e Tosa...............R$40,00");
								break;
							case 14:
								printf("\n\n\t Banho e Tosa...............R$%.2f",acrecimo);
								break;
						}
					}
						printf("\n\n\t\tTotal a pagar: %.2f",conta);
					break;
				case 4:
					system("cls");
					for(x=0;x<cont;x++){
						nota[x] = NULL;
					}
					conta = 0;
					printf("\n\n\t NOTA FISCAL ZERADO COM SUCESSO ! ");
					break;
				case 0: 
					system("cls");
					printf("Encerrando sistema..");
					break;
				default:
					system("cls");
					printf("\n\n\tComando inválido..");
			}
				cont++;
		}while(opt!=0);
			
			
		}else{
			system("cls");
			tentativa++;
			printf("\n\n\tSenha invalida");
			
			if(tentativa == 3){
				gambi = 1;
				printf("\n\n\tSessão encerrada por 3 tentativas invalidas");
			}
			
		}
	}while(gambi != 1);
	
}
