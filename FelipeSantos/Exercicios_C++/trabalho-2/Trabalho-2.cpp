/* Uma revenda de ve�culos solicitou o desenvolvimento de um programa em C
para gerenciar o cadastro de clientes, o cadastro de estoque, que realize as
vendas e apresente o status do caixa da empresa.

	O sistema deve atender as seguintes especifica��es:
		
		1. Criar uma lista (vetor de structs) para armazenar os dados dos
			ve�culos. A estrutura dever� conter, no m�nimo, os seguintes

		campos:
			* C�digo (autoincremental)
			* Marca
			* Modelo
			* Ano
			* Combust�vel (G - Gasolina ou F - Flex)
			* Pre�o de f�brica (Sem impostos)
			* Quantidade

		2. Criar uma lista (vetor de structs) para armazenar os dados dos
			clientes. A estrutura dever� conter, no m�nimo, os seguintes campos:

			* C�digo (autoincremental)
			* Nome
			* Idade
			* Endere�o
			* Sal�rio

		3. Criar um menu com as seguintes op��es:
		
			1. Cadastrar Cliente: atrav�s de uma fun��o, cadastrar os dados
				do cliente conforme struct criada para esse fim. O �ltimo cliente
				cadastrado deve sempre ficar ao final da lista (primeira posi��o
				livre do vetor). O sistema deve permitir cadastrar um cliente a
				qualquer momento. O c�digo do cliente deve ser gerado
				automaticamente e de forma auto-incremental.

			2. Exibir cadastro de clientes: atrav�s de uma fun��o, exibir
			todos os clientes e seus dados.
		
			3. Consultar cliente: atrav�s de uma fun��o, o usu�rio ir� digitar o
				nome do cliente e o sistema dever� exibir em tela os dados de
				cadastro desse cliente e retornar o �ndice do mesmo na estrutura.
				Caso n�o encontre o cliente procurado, o sistema dever�
				apresentar a mensagem: �Cliente n�o encontrado no cadastro�.

			4. Excluir cliente: atrav�s de uma fun��o, o usu�rio dever�
				informar o nome do cliente que deseja excluir. Caso seja
				encontrado o cliente procurado, proceder com a reorganiza��o da
				lista, onde o cliente encontrado deve ser retirado da lista e os
				demais clientes devem ser realocados n�o deixando a lista com
				espa�os em branco. Os c�digos dos clientes devem ser
				preservados.

			5. Cadastrar Ve�culo: cadastrar dados do ve�culo conforme struct
				criada para esse fim. O �ltimo ve�culo cadastrado deve sempre
				ficar no fim da lista (primeira posi��o livre do vetor). O c�digo do
				ve�culo deve ser gerado automaticamente e de forma
				incremental.

			6. Exibir estoque: atrav�s de uma fun��o, exibir todo o estoque de
				ve�culos com os detalhes de cada ve�culo.

			7. Consultar Ve�culo: atrav�s de uma fun��o, o usu�rio poder�
				digitar o modelo ou a marca do ve�culo. Caso exista no estoque o
				ve�culo procurado, o sistema dever� exibir em tela os dados dos
				ve�culos encontrados conforme o crit�rio de busca. Caso n�o
				encontre nenhum ve�culo, o sistema dever� apresentar a
				mensagem: �Ve�culo indispon�vel�.

			8. Excluir ve�culo: essa fun��o deve chamar a fun��o utilizada
				para consultar ve�culo. Utilizando-se das informa��es exibidas em
				tela, o usu�rio dever� ent�o informar o c�digo do ve�culo que
				deseja excluir,visto que poder�o ser exibidos em tela mais de um
				ve�culo com o crit�rio de busca. O sistema ent�o deve validar
				esse c�digo, exibindo em tela o nome do ve�culo que se deseja
				excluir. O sistema deve perguntar ao usu�rio se ele tem certeza
				de que deseja excluir o ve�culo. Caso a resposta seja S (sim)
				proceder com a reorganiza��o da lista, onde o ve�culo a ser
				exclu�do deve ser retirado da lista e os demais ve�culos devem ser
				realocados n�o deixando a lista com espa�os em branco. O c�digo
				do ve�culo deve ser preservado. Caso n�o encontre o ve�culo com
				o c�digo informado, exibir a mensagem: C�digo inexistente!
	
			9. Venda: A fun��o Venda dever� chamar a fun��o consultar cliente
				para exibir os dados do cliente. Se n�o existir o cliente procurado,
				o programa deve dar mensagem adequada e voltar para o menu.
				Caso o cliente seja encontrado, deve ser invocada a fun��o
				Consultar Veiculo e exibir os dados do ve�culo procurado. Caso
				n�o encontre o modelo desejado, dar mensagem adequada e
				voltar ao menu. S� poder� ser efetuada a venda se o cliente e o
				modelo existirem. Regras:
				
				Verificar se o cliente quer comprar o ve�culo � vista ou a prazo.
				S� podem ser comercializados ve�culos em estoque. Caso o
				carro desejado n�o exista em estoque, exibir a mensagem:
				�Ve�culo indispon�vel�.
				Venda � vista: considerar os seguintes encargos no valor final
				do ve�culo:
				IPI: 11 % para ve�culos FLEX e 13% para ve�culos a GASOLINA,
				sobre o pre�o de f�brica.
				Margem de lucro da distribuidora de 10,5%, que dever� ser
				aplicado sobre o valor de fabrica somado ao valor do IPI.
				Apresentar em tela os seguintes valores: IPI, Margem de lucro
				e valor final da venda.
				Perguntar ao usu�rio se ele confirma a venda. Caso a resposta
				seja afirmativa, deduzir do estoque o ve�culo vendido e
				adicionar o valor da venda ao caixa.
				Venda a prazo: o cliente dever� informar o valor da entrada e o
				n�mero de parcelas do financiamento (12, 24 ou 36 X). O
				comprometimento m�ximo com cada parcela deve ser de no
				m�ximo 30% do sal�rio do cliente. Caso o comprometimento seja
				maior que 30% do sal�rio, exibir mensagem: �Cliente n�o tem
				renda suficiente para o financiamento�. Os encargos ser�o os
				mesmos da venda � vista, acrescidos de juros de 1,9% ao m�s por
				parcela.

					A cada venda efetuada, registrar o valor total da venda em uma
					vari�vel chamada contaEmpresa, que dever� acumular todas as
					vendas efetivadas e deduzir do estoque o veiculo vendido.
					Considere que o valor da venda (pre�o de f�brica + IPI + margem
					de lucro) entram no caixa da empresa. Para os casos de
					financiamento, o valor das parcelas e juros n�o entram no caixa
					da empresa.

			10.Status Caixa: exibir o total de vendas da concession�ria. */

// falta 
// bug na venda de veiculos com homonimo
// else do 9



#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#define TAM 100
#define LIMITEVEICULOS 5
#define LIMITECLIENTES 5


typedef struct{ //struct para veiculo unico
	int codigo_veiculo, ano_veiculo, quantidade_veiculo;
	char marca_veiculo[50], modelo_veiculo[50],combustivel_veiculo;
	float preco_fabrica_veiculo;
}veiculo;

typedef struct{ // struct para cliente unico
	int codigo_cliente, idade_cliente;
	char nome_cliente[TAM], endereco_cliente[TAM];
	float salario_cliente;
}cliente;

typedef struct{ //struct para mandar tudo por parametro
	veiculo ficha_veiculo[LIMITEVEICULOS];
	int cont_veiculo;
	int codVei;
	cliente ficha_cliente[LIMITECLIENTES];
	int cont_cliente;
	int codCli;
	float contaEmpresa;
}GLOBAL;
//prototipa��o de fun��es
void menuPrincipal (GLOBAL *global);
void cadastro_cliente (GLOBAL *global); 
void cadastro_veiculo (GLOBAL *global);
void exibirCliente(GLOBAL *global, int posicao);
void exibirVeiculo(GLOBAL *global, int posicao);
void exibirTodosClientes (GLOBAL *global);
void exibirTodosVeiculos (GLOBAL *global);
int buscaNomeCliente (GLOBAL *global, char nome[]);
int buscaModeloVeiculo (GLOBAL *global, char buscaModelo[]);
int buscaCodCliente (GLOBAL *global, int cod);
int buscaCodVeiculo (GLOBAL *global, int cod);
void deletarCliente(GLOBAL *global, int posDeletar);
void deletarVeiculo(GLOBAL *global, int posDeletar);
void venderVeiculo (GLOBAL *global, int posVenderCliente, int posVenderVeiculo);
int posicaoCliente=-2;
int posicaoVeiculo=-2;

main(){
	setlocale(LC_ALL,"Portuguese");
	// cria��o do objeto de estrutura global
	GLOBAL global;

	// marcador de codigo corrido
	global.codCli=1;
	global.codVei=1;
	// indice do vetor e contador de quantidade
	global.cont_cliente=0;
	global.cont_veiculo=0;
	
	global.contaEmpresa = 0;
	
	menuPrincipal(&global);
	
}

// Fun��o menu principal
//  retorno nome fun��o tipo da variavel e variavel
void menuPrincipal (GLOBAL *global){
	system("cls");
	char buscaNome[TAM];
	char buscaModelo[TAM];
	int posDeletar = -1;
	int posVenderVeiculo = -1;
	int posVenderCliente = -1;

	int opt=0;
	printf ("*** Software revenda de veiculo ***");
	printf ("\n  Escolha uma das op��es a baixo  ");
	printf ("\n\n 1- Cadastrar Cliente");				
	printf ("\n 2- Exibir cadastro de clientes");		
	printf ("\n 3- Consultar cliente");					
	printf ("\n 4- Excluir cliente");
	printf ("\n 5- Cadastrar Ve�culo");
	printf ("\n 6- Exibir estoque");
	printf ("\n 7- Consultar Ve�culo");
	printf ("\n 8- Excluir ve�culo");
	printf ("\n 9- Venda");	
	printf ("\n 10- Status Caixa");	
	printf ("\n 11- Sair do programa");	
	printf ("\n\n Qual op��o desejada ==> ");
	
	scanf ("%i",&opt);
	fflush(stdin);			
	system("cls");	
	switch (opt){ 
	
	case 1:	// chamada para fun��o cadastro_cliente	 
		cadastro_cliente (global);	
		system("pause");
		return menuPrincipal(global);		
		break;
	case 2: // chamada para fun��o exibir clientes
		if (global->cont_cliente>0)
		{
		exibirTodosClientes (global);
		system("pause");
		} else
			{
				printf ("\n\tNao existem clientes cadastrados\n\n");
				system ("pause");
			}
		return menuPrincipal(global);
		break;
	case 3: //chamada para fun��o busca cliente
		printf ("\n BUSCAR CLIENTE \n");
		printf ("Digite o nome que deseja localizar ==> ");
		gets (buscaNome);
		posicaoCliente = buscaNomeCliente(global, buscaNome);
		if (posicaoCliente==-1)
		{
			printf ("\n\tNome n�o localiazado\n\n");
		}
		system("pause");
		return menuPrincipal(global);
		break;
	case 4:  //Chamada para a fun��o excluir cliente
		printf ("\n DELETAR CLIENTE \n");
		printf ("Digite o nome que deseja deletar ==> ");
		gets (buscaNome);
		//passos para deletar: 1 - Achar a posicao 2 - Deletar a posicao
		/*Passo 1*/ posDeletar = buscaNomeCliente (global,buscaNome);
		if (posDeletar != -1)
		{
			int escolhaDeletar = 0;
			printf (" Deseja realmente deletar este cliente? 1-S 2-N ==> ");
			scanf ("%d", &escolhaDeletar);
			/*Passo 2*/ if (escolhaDeletar == 1) deletarCliente(global, posDeletar);
		} else {printf (" Cliente n�o encontrado! \n");}
		system("pause");
		menuPrincipal(global);
		break;
	case 5:  // chamada para fun��o cadastro_Veiculos	 
		cadastro_veiculo (global);	
		system("pause");
		return menuPrincipal(global);		
		break;
	case 6: //Chamada para a fun��o exibir estoque
		if (global->cont_veiculo>0)
		{
		exibirTodosVeiculos (global);
		system("pause");
			} else
			{
				printf ("\n\tNao existem veiculos cadastrados\n\n");
				system ("pause");
			}
		return menuPrincipal(global);
		break;
	case 7:  //Chamada para a fun��o consultar veiculo
		printf ("\n BUSCAR VEICULO \n");
		printf ("Digite o nome do veiculo que deseja localizar ==> ");
		gets (buscaModelo);
		posicaoVeiculo = buscaModeloVeiculo(global, buscaModelo);
		if (posicaoVeiculo==-1)
		{
			printf ("\n\t Veiculo n�o localiazado\n\n");
		}
		system("pause");
		return menuPrincipal(global);
		break;
	case 8:  //Chamada para a fun��o excluir veiculo		
	printf ("\n  DELETAR VEICULO  \n");
		printf ("Digite o nome do veiculo que deseja deletar ==> ");
		gets (buscaModelo);
		/*Passo 1*/ posDeletar = buscaModeloVeiculo (global,buscaModelo);
		if (posDeletar != -1)
		{
			int escolhaDeletar = 0;
			printf (" Deseja realmente deletar este veiculo? 1-S 2-N ==> ");
			scanf ("%d", &escolhaDeletar);
			/*Passo 2*/ if (escolhaDeletar == 1) deletarVeiculo(global, posDeletar);
		} else {printf (" Veiculo n�o encontrado! \n");}
		system("pause");
		menuPrincipal(global);
		break;
	case 9:
		//Chamada para a fun��o vender veiculo
		printf ("\n BUSCAR CLIENTE PARA VENDA \n");
		printf ("Digite o nome do cliente que ir� comprar ==> ");
		gets (buscaNome);
		posVenderCliente = buscaNomeCliente(global, buscaNome);		
		if (posVenderCliente != -1)
		{
		printf ("\n BUSCAR VE�CULO PARA VENDER\n");
		printf ("Digite o modelo do veiculo que deseja vender ==> ");
		gets (buscaModelo);
		posVenderVeiculo = buscaModeloVeiculo(global, buscaModelo);
		} else
			{
				printf (" \n\tCliente n�o encontrado! \n\n\n");
				system("pause");
				return menuPrincipal(global);
			}
		if (posVenderVeiculo != -1)
		{
			venderVeiculo (global, posVenderCliente, posVenderVeiculo);
		}
			else
			{
				printf (" \n\tModelo de veiculo n�o encontrado! \n\n\n");
			}
		system("pause");
		return menuPrincipal(global);			
		break;
	case 10:
		//status do caixa		
		printf("Caixa atual: R$ %.2f \n",global->contaEmpresa);
		system("pause");
		menuPrincipal(global);
		break;
	case 11:  //finalizan��o do programa
		printf ("\n SAINDO DO PROGRAMA \n");
		exit(0);
		break;	
		
	default: 
		return menuPrincipal(global);
		break;										
	} 			
}

// Fun��o cadastrar cliente
void cadastro_cliente (GLOBAL *global){
	cliente auxiliar;
	auxiliar.codigo_cliente=global->codCli;

	printf ("CADASTRO DE CLIENTE\n");
	printf ("C�digo do novo cliente ==> %i \n",auxiliar.codigo_cliente);
	printf ("Nome ==> ");
	gets (auxiliar.nome_cliente);
	printf ("Idade ==> ");
	scanf ("%i",&auxiliar.idade_cliente);
	fflush(stdin);
	printf ("Endere�o ==> ");
	gets (auxiliar.endereco_cliente);			
	printf ("Sal�rio ==> ");	
	scanf ("%f",&auxiliar.salario_cliente);
	fflush(stdin);	
	global->ficha_cliente[global->cont_cliente]=auxiliar;
	global->cont_cliente++;
	global->codCli++;
}

// Fun��o exibir todos clientes
void exibirTodosClientes (GLOBAL *global)
{
	printf ("\n Exibi��o dos clientes \n");
	for (int cont=0;cont<global->cont_cliente;cont++)
	{
		exibirCliente(global, cont);	
	}	
} 

// Fun��o exibir um cliente
void exibirCliente(GLOBAL *global, int posicao)
{
	printf ("C�digo Cliente: %i\n",global->ficha_cliente[posicao].codigo_cliente);
	printf ("Nome: %s\n",global->ficha_cliente[posicao].nome_cliente);
	printf ("Idade: %i\n",global->ficha_cliente[posicao].idade_cliente);
	printf ("Endere�o: %s\n",global->ficha_cliente[posicao].endereco_cliente);
	printf ("Sal�rio: %.2f\n\n",global->ficha_cliente[posicao].salario_cliente);
}

//Fun��o para buscar cliente por COD
int buscaCodCliente (GLOBAL *global, int cod)
{
	int posicao = -1;
	
	for (int cont=0;cont<global->cont_cliente;cont++) 
	{	
		if (cod == global->ficha_cliente[cont].codigo_cliente)
		{
			posicao = cont; 
		}
	}
	
	return posicao; // retorna a posicao achada
}

//Fun��o busca cliente por nome
int buscaNomeCliente (GLOBAL *global, char buscaNomeCliente[])
{ 
	int posicao = -1; 
	int achou = 0, idPeneira = 0;
	for (int cont=0;cont<global->cont_cliente;cont++) 
	{
		if (!strcmpi(global->ficha_cliente[cont].nome_cliente, buscaNomeCliente))
		{
			exibirCliente(global, cont); 
			posicao = cont; 
			achou++; 
		}
	}
	
	// PENEIRA DE NOMES IGUAIS
	if (achou > 1)
	{
		do {
		printf (" Quais dos clientes mostrados acima � o correto? Informe o ID ==> ");
		scanf ("%d", &idPeneira);
		posicao = buscaCodCliente(global, idPeneira); 
		if (posicao == -1) printf (" Digite um codigo existente! \n");
		} while (posicao == -1);
	}
	return posicao; 
}

// Fun��o de deletar cliente
void deletarCliente (GLOBAL *global, int posDeletar)
{	
	// Loop para deletar
	for (int cont = posDeletar; cont < global->cont_cliente; cont++)
	{ 
		global->ficha_cliente[cont] = global->ficha_cliente[cont+1];
	}
	global->cont_cliente--;
}

// Fun��o cadastrar veiculo
void cadastro_veiculo (GLOBAL *global){
	veiculo auxiliar;
	auxiliar.codigo_veiculo=global->codVei;

	printf ("CADASTRO DE VEICULO\n");
	printf ("C�digo do novo veiculo ==> %i \n",auxiliar.codigo_veiculo);
	printf ("Marca do Veiculo ==> ");
	gets (auxiliar.marca_veiculo);
	printf ("Modelo do Veiculo ==> ");
	gets (auxiliar.modelo_veiculo);
	printf ("Ano ==> ");
	scanf ("%i",&auxiliar.ano_veiculo);
	fflush(stdin);
	printf ("Combust�vel (G - Gasolina ou F - Flex) ==> ");
	do
	{
	scanf ("%c",&auxiliar.combustivel_veiculo);	
	fflush(stdin);
	auxiliar.combustivel_veiculo = toupper(auxiliar.combustivel_veiculo);		
	} while (auxiliar.combustivel_veiculo != 'F' && auxiliar.combustivel_veiculo != 'G');
	printf ("Pre�o de Fabrica ==> ");	
	scanf ("%f",&auxiliar.preco_fabrica_veiculo);
	fflush(stdin);	
	printf ("Quantidade Veiculos ==> ");	
	scanf ("%i",&auxiliar.quantidade_veiculo);
	fflush(stdin);	
	global->ficha_veiculo[global->cont_veiculo]=auxiliar;
	global->cont_veiculo++;
	global->codVei++;
}

// Fun��o exibir todos veiculos (estoque)
void exibirTodosVeiculos (GLOBAL *global)
{
	printf ("\n Exibi��o do Estoque \n");
	for (int cont=0;cont<global->cont_veiculo;cont++)
	{
		exibirVeiculo(global, cont);	
	}	
}

// Fun��o exibir um veiculo
void exibirVeiculo(GLOBAL *global, int posicao)
{
	printf ("C�digo Ve�culo: %i\n",global->ficha_veiculo[posicao].codigo_veiculo);
	printf ("Marca: %s\n",global->ficha_veiculo[posicao].marca_veiculo);
	printf ("Modelo: %s\n",global->ficha_veiculo[posicao].modelo_veiculo);
	printf ("Ano: %i\n",global->ficha_veiculo[posicao].ano_veiculo);
	printf ("Combustivel: %c\n",global->ficha_veiculo[posicao].combustivel_veiculo);
	printf ("Quantidade: %i\n",global->ficha_veiculo[posicao].quantidade_veiculo);
	printf ("Pre�o de Fabrica: %.2f\n\n",global->ficha_veiculo[posicao].preco_fabrica_veiculo);
}

//Fun��o para buscar veiculo por COD
int buscaCodVeiculo (GLOBAL *global, int cod)
{
	int posicao = -1; 
	for (int cont=0;cont<global->cont_veiculo;cont++) 
	{
		if (cod == global->ficha_veiculo[cont].codigo_veiculo)
		{
			posicao = cont;
		}
	}
	return posicao; 
}

//Fun��o busca Veiculo por Modelo
int buscaModeloVeiculo (GLOBAL *global, char buscaModelo[])
{ 
	int posicao = -1; 
	int achou = 0, idPeneira = 0;
	for (int cont=0;cont<global->cont_veiculo;cont++)
	{	
		if (!strcmpi(global->ficha_veiculo[cont].modelo_veiculo, buscaModelo))
		{ 
			exibirVeiculo(global, cont); 
			posicao = cont; 
			achou++;
		}
	}
	
	return posicao;
}

// Fun��o de deletar veiculo
void deletarVeiculo (GLOBAL *global, int posDeletar)
{
	for (int cont = posDeletar; cont < global->cont_veiculo; cont++)
	{ 
		global->ficha_veiculo[cont] = global->ficha_veiculo[cont+1];
	}
	// Diminui quantidade de veiculos
	global->cont_veiculo--;
}

//Fun��o vender Veiculo
void venderVeiculo (GLOBAL *global, int posCliente, int posVeiculo)
{ 
	int totalVendaAtual = 0;
	float ipi=0;
	float lucro=0;
	float precoFinal=0;
	int escolhaCompra=0;
	int condicaoPagamento = 0;
	float valorEntrada=0;
	float valorFinanciamento=0;
	float numeroParcelas=0;
	float prestacao=0;
	float percentualSalario=0;
	
	// Vender a posicao recebida por parametro
	
			printf (" Como deseja pagar este veiculo? 1- � Vista 2- A Prazo ==> ");
			scanf ("%d", &condicaoPagamento);
			
			// Venda a vista
			if (condicaoPagamento == 1) 
			{
				printf("\n PAGAMENTO A VISTA\n");
				
				if (global->ficha_veiculo[posVeiculo].combustivel_veiculo == 'F')
				{
					ipi = (global->ficha_veiculo[posVeiculo].preco_fabrica_veiculo * 0.11);
				}
				if (global->ficha_veiculo[posVeiculo].combustivel_veiculo == 'G')
				{
					ipi = (global->ficha_veiculo[posVeiculo].preco_fabrica_veiculo * 0.13);	
				}
				
				//finaliza venda a vista	
			lucro = (global->ficha_veiculo[posVeiculo].preco_fabrica_veiculo * 0.105);
			precoFinal=(ipi+lucro+global->ficha_veiculo[posVeiculo].preco_fabrica_veiculo);
			printf ("\nO IPI � ==> %.2f",ipi);
			printf ("\nA Margem de lucro � ==> %.2f",lucro);
			printf ("\nO pre�o final de venda � ==> %.2f",precoFinal);
			
			printf (" \nDeseja realmente comprar este veiculo? 1-S 2-N ==> ");
			scanf ("%d", &escolhaCompra);
				if (escolhaCompra==1)
				{
					printf ("\nParab�ns Veiculo comprado com Sucesso\n");
					global->ficha_veiculo[posVeiculo].quantidade_veiculo--;
					totalVendaAtual=precoFinal;
				}
					
			}
			
			//venda a prazo
		else if (condicaoPagamento == 2) 
			{
				printf("\n PAGAMENTO A PRAZO");
				
				printf("\n Qual o valor da entrada ==>");
				scanf ("%f",&valorEntrada);
				
				valorFinanciamento=global->ficha_veiculo[posVeiculo].preco_fabrica_veiculo-valorEntrada;
				percentualSalario=global->ficha_cliente[posCliente].salario_cliente*0.30;
				
				printf("\n\n Valor � parcelar %.2f",valorFinanciamento);
				printf("\n\n A capacidade de pagamento � uma mensalidade de %.2f",percentualSalario);
								
				printf("\n\n Em quantas parcelas gostaria de dividir 12x, 24x ou 36x==>");
				do
				{
				scanf ("%f",&numeroParcelas);
				}while (numeroParcelas!=12 && numeroParcelas!=24 && numeroParcelas!=36);
				for(int x=0;x<=numeroParcelas;x++)
							{
								valorFinanciamento=valorFinanciamento*1.019;
								//printf ("\nvalor financiamento %.2f",valorFinanciamento);
							}
				prestacao=(valorFinanciamento/numeroParcelas);
				printf (" cada parcela do financiamento ficar� em R$ %.2f\n",prestacao);
				
				//ver pq n�o entra no else a baixo
				if (prestacao<=percentualSalario)
				{
					if (global->ficha_veiculo[posVeiculo].combustivel_veiculo == 'F')
					{
					ipi = (global->ficha_veiculo[posVeiculo].preco_fabrica_veiculo * 0.11);
					}
					if (global->ficha_veiculo[posVeiculo].combustivel_veiculo == 'G')
					{
					ipi = (global->ficha_veiculo[posVeiculo].preco_fabrica_veiculo * 0.13);	
					}
						
				//finaliza venda a prazo
			lucro = (global->ficha_veiculo[posVeiculo].preco_fabrica_veiculo * 0.105);
			precoFinal=(ipi+lucro+global->ficha_veiculo[posVeiculo].preco_fabrica_veiculo);
			printf ("\nO IPI � ==> %.2f",ipi);
			printf ("\nA Margem de lucro � ==> %.2f",lucro);
			printf ("\nO pre�o final de venda � ==> %.2f",precoFinal);
			
			printf (" \nDeseja realmente comprar este veiculo? 1-S 2-N ==> ");
			scanf ("%d", &escolhaCompra);
			fflush(stdin);
					if (escolhaCompra==1)
					{
						printf ("\nParab�ns Veiculo comprado com Sucesso\n");
						global->ficha_veiculo[posVeiculo].quantidade_veiculo--;
						totalVendaAtual=precoFinal;
					}
				} 
				if (prestacao>percentualSalario) 
				{
				("\n Cliente n�o tem renda suficiente para o financiamento.\n o Valor maximo da presta��o n�o pode utrapassar R$%.2f\n",percentualSalario);
				}
			}
			
	// Final > acumula a venda atual no caixa da empresa
	global->contaEmpresa = global->contaEmpresa + totalVendaAtual;		
}
