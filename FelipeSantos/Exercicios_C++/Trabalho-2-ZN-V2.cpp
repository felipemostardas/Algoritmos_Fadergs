// Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#include <string.h>

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
	char marca[TAM];
	char modelo[TAM];
	int ano;
	char combustivel;
	float precoFabrica;
	int quantidade;
} veiculo;

typedef struct
{
	cliente listaClientes[LIMITECLIENTES];
	int qntdClientes;
	int codCorridoClientes;
	
	veiculo listaVeiculos[LIMITEVEICULOS];
	int qntdVeiculos;	
	int codCorridoVeiculos;
	
	float caixaAtual;
	
} DB; // globais

// Prototipos de funcoes
	// Menus
	void menuPrincipal(DB *banco);
	void menuClientes(DB *banco);
	void menuVeiculos(DB *banco);
	void menuFinanceiro(DB *banco);
	// Clientes
	void cadastrarCliente(DB *banco);
	void mostrarCliente(DB *banco, int posicao);
	void mostrarTodosClientes(DB *banco);
	int buscarCliente(DB *banco, bool pause);
	int buscarClienteCod (DB *banco, int codigo);
	int deletarCliente (DB *banco);
	// Veiculos
	void cadastrarVeiculo(DB *banco);
	void mostrarVeiculo(DB *banco, int posicao);
	void mostrarTodosVeiculos(DB *banco);
	int buscarVeiculo(DB *banco, bool pause);
	int buscarVeiculoCod (DB *banco, int codigo);
	int deletarVeiculo (DB *banco);
	// Financeiro
	void menuFinanceiro(DB *banco);
	
	
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
	printf (" 1 - Menu Clientes \n");
	printf (" 2 - Menu Veículos \n");
	printf (" 3 - Menu Financeiros \n");
	printf (" S - Sair do programa \n -> ");
	
	scanf("%c", &escolha);
	fflush(stdin);
	
	switch (tolower(escolha))
	{
		case '1': // MENU CLIENTE
			menuClientes(banco);
			break;
		case '2': // MENU VEICULOS
			menuVeiculos(banco);
			break;
		case '3': // MENU FINANCEIRO
			menuFinanceiro(banco);
			break;
		case 's': // SAIR
			printf ("\n[PROGRAMA FINALIZADO]");
			exit(0);
			break;
		default:
			return menuPrincipal(banco);
			break;
	}
	
	// Seguranca e para buscars
	return menuPrincipal(banco);
}

void menuClientes(DB *banco)
{
	system("cls");
	char escolha;
	
	printf (" -- MENU CLIENTE -- \n");
	printf (" 1 - Cadastrar Cliente \n");
	printf (" 2 - Mostrar Todos Clientes \n");
	printf (" 3 - Procurar Cliente \n");
	printf (" 4 - Deletar Cliente \n");
	printf (" V - Voltar para o Menu Principal \n -> ");
	
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
		case '3': // BUSCAR CLIENTE
			buscarCliente(banco, true);
			break;
		case '4': // DELETAR CLIENTE
			deletarCliente(banco);
		break;
		case 'v': // SAIR
			return menuPrincipal(banco);
			break;
		default:
			return menuClientes(banco);
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
	cliente clienteNovo; // Cliente local da funcao para preparar registro
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
	return menuClientes(banco);
}

void mostrarCliente(DB *banco, int posicao)
{
	printf ("\t [CLIENTE COD %d] \n", banco->listaClientes[posicao].codCliente);
	printf ("\t Nome: %s \n", banco->listaClientes[posicao].nome);
	printf ("\t Idade: %d \n", banco->listaClientes[posicao].idade);
	printf ("\t Endereço: %s \n", banco->listaClientes[posicao].endereco);
	printf ("\t Salário: R$ %.2f \n\n", banco->listaClientes[posicao].salario);
}

void mostrarTodosClientes (DB *banco)
{
	// PROGRAMACAO PARA MOSTRAR TODOS CLIENTES VIRA AQUI
	printf ("\t -- MOSTRAR TODOS CLIENTES -- \n\n");
	
	// Loop para andar em todas as posicoes do vetor da matriz
	for (int posicao = 0; posicao < banco->qntdClientes; posicao++)
	{
		mostrarCliente(banco, posicao);
	}
	
	// Volta para o menu principal
	printf ("\t [FIM EXIBIÇÃO DE CLIENTES] \n");
	system("pause");
	return menuClientes(banco);
}

int buscarCliente(DB *banco, bool pause)
{
	int posicao = -1, codigo = 0;
	int achou = 0;
	char nome[TAM];
	bool achouCod = -1;
	
	printf (" - Informe o nome do cliente: ");
	gets(nome);
	
	for (int cont = 0; cont < banco->qntdClientes; cont++)
	{
		if (!strcmpi(banco->listaClientes[cont].nome, nome))
		{
			achou++;
			posicao = cont;
			mostrarCliente(banco, cont);
		}
	}

	if (achou > 1) // Achou mais de um e fara peneira de nomes com ID
	{
		do
		{
			printf (" - Qual dos clientes acima é o escolhido? \n");
			scanf("%d", &codigo);
			fflush(stdin);
			achouCod = buscarClienteCod(banco, codigo);
		} while (achouCod == -1);
	}
	
	// Retorna a posicao ou -1 caso nao encontre nada
	if (pause == true)
	{
		system("pause");
	}
	return posicao;
}

int buscarClienteCod (DB *banco, int codigo)
{
	int posicao = -1;
	int achou = 0;
	
	for (int cont = 0; cont < banco->qntdClientes; cont++)
	{
		if (banco->listaClientes[cont].codCliente == codigo)
		{
			achou++;
			posicao = cont;
		}
	}
	
	// Retorna a posicao ou -1 caso nao encontre nada
	return posicao;
}

int deletarCliente (DB *banco)
{
	printf (" \t --- DELETAR CLIENTE --- \n");
	
	// -1 caso nao encontre nada ou a posicao caso ache
	int posicao = buscarCliente(banco, false);
	
	// Deletar a posicao retornada da busca acima
	if (posicao != -1)
	{
		for (int volta = posicao; volta < banco->qntdClientes; volta++)
		{
			banco->listaClientes[volta] = banco->listaClientes[volta+1];
		}
		banco->qntdClientes--;
	} 
		else
		{
			printf ("\n Cliente não encontrado! \n");
		}
	
	system("pause");
}

// NOVO PARA VEICULO ----------------------------------------------------------
void menuVeiculos(DB *banco)
{
	system("cls");
	char escolha;
	
	printf (" -- MENU VEICULO -- \n");
	printf (" 1 - Cadastrar Veiculo \n");
	printf (" 2 - Mostrar Todos Veiculos \n");
	printf (" 3 - Procurar Veiculo \n");
	printf (" 4 - Deletar Veiculo \n");
	printf (" V - Voltar para o Menu Principal \n -> ");
	
	scanf("%c", &escolha);
	fflush(stdin);
	
	switch (tolower(escolha))
	{
		case '1': // CADASTRAR VEICULO
			cadastrarVeiculo(banco);
			break;
		case '2': // MOSTRAR TODOS VEICULOS
			mostrarTodosVeiculos(banco);
			break;
		case '3': // BUSCAR VEICULO
			buscarVeiculo(banco, true);
			break;
		case '4': // DELETAR VEICULO
			deletarVeiculo(banco);
		break;
		case 'v': // SAIR
			return menuPrincipal(banco);
			break;
		default:
			return menuVeiculos(banco);
			break;
	}
}

// FUNCOES VEICULOS
void cadastrarVeiculo (DB *banco)
{
	// PROGRAMACAO PARA CADASTRAR VEICULO VIRA AQUI
	system("cls");
	printf (" -- CADASTRAR VEICULO -- \n");
	
	// Guardar os dados do veiculo novo
	veiculo veiculoNovo; // Veiculo local da funcao para preparar registro
	veiculoNovo.codVeiculo = banco->codCorridoVeiculos;
	printf (" - Informe a marca do veiculo: ");
	gets(veiculoNovo.marca);
	printf (" - Informe o modelo do veiculo: ");
	gets(veiculoNovo.modelo);
	printf (" - Informe o ano do veiculo: ");
	scanf ("%d", &veiculoNovo.ano);
	fflush(stdin);
	printf (" - Informe o combustível do veiculo: ");
	scanf ("%c", &veiculoNovo.combustivel);
	fflush(stdin);
	printf (" - Informe o preço de fábrica do veiculo: ");
	scanf ("%f", &veiculoNovo.precoFabrica);
	fflush(stdin);
	printf (" - Informe a quantidade: ");
	scanf ("%d", &veiculoNovo.quantidade);
	fflush(stdin);
	
	// Salvar o veiculo novo no vetor
	banco->listaVeiculos[banco->qntdVeiculos] = veiculoNovo;
	
	// Preparando para o proximo cadastro
	banco->qntdVeiculos++;
	banco->codCorridoVeiculos++;
	
	// Volta para o menu principal
	system("pause");
	return menuVeiculos(banco);
}

void mostrarVeiculo(DB *banco, int posicao)
{
	printf ("\t [VEICULO COD %d] \n", banco->listaVeiculos[posicao].codVeiculo);
	printf ("\t Marca: %s \n", banco->listaVeiculos[posicao].marca);
	printf ("\t Modelo: %s \n", banco->listaVeiculos[posicao].modelo);
	
	printf ("\t Ano: %d \n", banco->listaVeiculos[posicao].ano);
	printf ("\t Combustível: %c \n", banco->listaVeiculos[posicao].combustivel);
	printf ("\t Preço fábrica: R$ %.2f \n\n", banco->listaVeiculos[posicao].precoFabrica);
	printf ("\t Quantidade: %d \n", banco->listaVeiculos[posicao].quantidade);
}

void mostrarTodosVeiculos (DB *banco)
{
	// PROGRAMACAO PARA MOSTRAR TODOS VEICULOS VIRA AQUI
	printf ("\t -- MOSTRAR TODOS VEICULOS -- \n\n");
	
	// Loop para andar em todas as posicoes do vetor da matriz
	for (int posicao = 0; posicao < banco->qntdVeiculos; posicao++)
	{
		mostrarVeiculo(banco, posicao);
	}
	
	// Volta para o menu principal
	printf ("\t [FIM EXIBIÇÃO DE VEICULOS] \n");
	system("pause");
	return menuVeiculos(banco);
}

int buscarVeiculo(DB *banco, bool pause)
{
	int posicao = -1, codigo = 0;
	int achou = 0;
	char modelo[TAM];
	bool achouCod = -1;
	
	printf (" - Informe o modelo do veiculo: ");
	gets(modelo);
	
	for (int cont = 0; cont < banco->qntdVeiculos; cont++)
	{
		if (!strcmpi(banco->listaVeiculos[cont].modelo, modelo))
		{
			achou++;
			posicao = cont;
			mostrarVeiculo(banco, cont);
		}
	}

	if (achou > 1) // Achou mais de um e fara peneira de nomes com ID
	{
		do
		{
			printf (" - Qual dos veiculos acima é o escolhido? \n");
			scanf("%d", &codigo);
			fflush(stdin);
			achouCod = buscarVeiculoCod(banco, codigo);
		} while (achouCod == -1);
	}
	
	// Retorna a posicao ou -1 caso nao encontre nada
	if (pause == true)
	{
		system("pause");
	}
	return posicao;
}

int buscarVeiculoCod (DB *banco, int codigo)
{
	int posicao = -1;
	int achou = 0;
	
	for (int cont = 0; cont < banco->qntdVeiculos; cont++)
	{
		if (banco->listaVeiculos[cont].codVeiculo == codigo)
		{
			achou++;
			posicao = cont;
		}
	}
	
	// Retorna a posicao ou -1 caso nao encontre nada
	return posicao;
}

int deletarVeiculo (DB *banco)
{
	printf (" \t --- DELETAR VEICULO --- \n");
	
	// -1 caso nao encontre nada ou a posicao caso ache
	int posicao = buscarVeiculo(banco, false);
	
	// Deletar a posicao retornada da busca acima
	if (posicao != -1)
	{
		for (int volta = posicao; volta < banco->qntdVeiculos; volta++)
		{
			banco->listaVeiculos[volta] = banco->listaVeiculos[volta+1];
		}
		banco->qntdVeiculos--;
	} 
		else
		{
			printf ("\n Veiculo não encontrado! \n");
		}
	
	system("pause");
}


