#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>
#define TAM 2

//Criação das Stucts
typedef struct{
	int codCarro;
	char marca[50];
	char modelo[50];
	int ano;
	char combustivel[1];
	float precoFabrica;
	int quantidade;
}carro;

typedef struct{
	int codCliente;
	char nome[100];
	int idade;
	char end[100];
	float salario;
	
}cliente;

//Prototipação das funções
void cadastrarClientes(cliente dados[TAM]);


main(){
	setlocale(LC_ALL,"Portuguese");
	int opt;
	cliente dados[TAM];
	do{
		printf("\n\n\t ######## REVENDA DE CARRO ########");
		printf("\n\n\t  1 - Cadastrar cliente");
		printf("\n\t  2 - Exibir dados de clientes");
		printf("\n\t  3 - Consultar cliente");
		printf("\n\t  4 - Excluir cliente");
		printf("\n\t  5 - Cadastrar veiculo");
		printf("\n\t  6 - Exibir estoque");
		printf("\n\t  7 - Consultar veiculo");
		printf("\n\t  8 - Excluir veiculo");
		printf("\n\t  9 - Efetuar Venda");
		printf("\n\t 10 - Status caixa");
		printf("\n\t 99 - Sair");
		printf("\n\n\tDigite: ");
		scanf("%i",&opt);
		
		switch(opt){
			case 1:
				system("cls");
				printf("\n\n\t Cadastrando cliente\n\n");
				cadastrarClientes(dados);
				break;
			case 2:
				system("cls");
				printf("\n\n\t Exibindo dados de cliente\n\n");
				break;
			case 3:
				system("cls");
				printf("\n\n\t Consultando cliente\n\n");
				break;
			case 4:
				system("cls");
				printf("\n\n\t Excluindo Cliente\n\n");
				break;
			case 5:
				system("cls");
				printf("\n\n\t Cadastrando Veiculo\n\n");
				break;
			case 6:
				system("cls");
				printf("\n\n\t Exibindo Estoque\n\n");
				break;
			case 7:
				system("cls");
				printf("\n\n\t Consultando Veiculo\n\n");
				break;
			case 8:
				system("cls");
				printf("\n\n\t Excluindo Veiculo\n\n");
				break;
			case 9:
				system("cls");
				printf("\n\n\t Efetuando Venda\n\n");
				break;
			case 10:
				system("cls");
				printf("\n\n\t Status do Caixa\n\n");
				break;
			case 99:
				system("cls");
				printf("\n\n\t Encerrando o programa.. \n\n");
				break;
			default:
				system("cls");
				printf("\n\n\t Digito Inválido..\n\n\n");
		}
	}while(opt != 99);
	
	
}

//Funcões 
void cadastrarClientes(cliente dados[TAM]){
	for(int x; x<TAM; x++){
		printf("Digite o nome: ");
		gets(dados[x].nome);
	}	
}



