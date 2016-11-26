// Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

// Defines
#define TAM 100 // Tamanho generico
#define LIMITECLIENTES 5
#define LIMITEVEICULOS 5

// Estruturas
typedef struct
{
	int codCliente;
	char nome[TAM];
	int idade;
	char endereco[TAM];
	float salario;
} cliente;

typedef struct
{
	int codVeiculo;
	char modelo[TAM];
	float preco;
} veiculo;

typedef struct
{
	cliente listaClientes[LIMITECLIENTES];
	int qntdClientes;
	int codCorridoClientes;
	
	veiculo listaVeiculos[LIMITEVEICULOS];
	int qntdVeiculos;	
	int codCorridoVeiculos;
	
} DB;

// Prototipos de funcoes
void menuPrincipal(DB *banco);
void cadastrarCliente(DB *banco);
void mostrarTodosClientes(DB *banco);

int main (void)
{	
	// Localizacao
	setlocale(LC_ALL, "");
	
	// Inicializacao de variaveis
	DB banco;
	banco.qntdClientes = 0;
	banco.codCorridoClientes = 1;
	banco.qntdVeiculos = 0;
	banco.codCorridoVeiculos = 1;
	
	// Chamada do menu principal
	menuPrincipal(&banco);
	
	return 0;	
}

void menuPrincipal(DB *banco)
{
	system("cls");
	char escolha;
	
	printf (" -- MENU PRINCIPAL -- \n");
	printf (" 1 - Cadastrar Cliente \n");
	printf (" 2 - Mostrar Todos Clientes \n");
	printf (" 3 - Procurar Cliente \n");
	printf (" 4 - Deletar Cliente \n");
	printf (" 5 - Cadastrar Veículo \n");
	printf (" 6 - Exibir Estoque \n");
	printf (" 7 - Consultar Veículo \n");
	printf (" 8 - Excluir Veículo \n");
	printf (" 9 - Vender Veiculo \n");
	printf (" 10 - Caixa \n");
	printf (" S - Sair do programa \n");
	
	scanf("%c", &escolha);
	fflush(stdin);
	
	switch (tolower(escolha))
	{
		case '1': // CADASTRAR CLIENTE
			cadastrarCliente(banco);
			break;
		case '2': // MOSTRAR TODOS CLIENTES
			mostrarTodosClientes(banco);
			break;
		case 's': // SAIR
			printf ("\n[PROGRAMA FINALIZADO]");
			exit(0);
			break;
		default:
			return menuPrincipal(banco);
			break;
	}
}

// FUNCOES CLIENTE
void cadastrarCliente (DB *banco)
{
	// PROGRAMACAO PARA CADASTRAR CLIENTE VIRA AQUI
	system("cls");
	printf (" -- CADASTRAR CLIENTE -- \n");
	
	// Guardar os dados do cliente novo
	cliente clienteNovo;
	clienteNovo.codCliente = banco->codCorridoClientes;
	printf (" - Informe o nome do cliente: ");
	gets(clienteNovo.nome);
	printf (" - Informe idade do cliente: ");
	scanf ("%d", &clienteNovo.idade);
	fflush(stdin);
	printf (" - Informe o endereço do cliente: ");
	gets(clienteNovo.endereco);
	printf (" - Informe salário do cliente: ");
	scanf ("%f", &clienteNovo.salario);
	fflush(stdin);
	
	// Salvar o cliente novo no vetor
	banco->listaClientes[banco->qntdClientes] = clienteNovo;
	
	// Preparando para o proximo cadastro
	banco->qntdClientes++;
	banco->codCorridoClientes++;
	
	// Volta para o menu principal
	system("pause");
	return menuPrincipal(banco);
}

void mostrarTodosClientes (DB *banco)
{
	// PROGRAMACAO PARA MOSTRAR TODOS CLIENTES VIRA AQUI
	system("cls");
	printf ("\t -- MOSTRAR TODOS CLIENTES -- \n\n");
	
	for (int posicao = 0; posicao < banco->qntdClientes; posicao++)
	{
		printf ("\t [CLIENTE COD %d] \n", banco->listaClientes[posicao].codCliente);
		printf ("\t Nome: %s \n", banco->listaClientes[posicao].nome);
		printf ("\t Idade: %d \n", banco->listaClientes[posicao].idade);
		printf ("\t Endereço: %s \n", banco->listaClientes[posicao].endereco);
		printf ("\t Salário: R$ %.2f \n\n", banco->listaClientes[posicao].salario);
	}
	
	// Volta para o menu principal
	printf ("\t [FIM EXIBIÇÃO DE CLIENTES] \n");
	system("pause");
	return menuPrincipal(banco);
}

