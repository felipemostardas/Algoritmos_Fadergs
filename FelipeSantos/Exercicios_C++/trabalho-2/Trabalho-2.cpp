/* Uma revenda de veículos solicitou o desenvolvimento de um programa em C
para gerenciar o cadastro de clientes, o cadastro de estoque, que realize as
vendas e apresente o status do caixa da empresa.

	O sistema deve atender as seguintes especificações:
		
		1. Criar uma lista (vetor de structs) para armazenar os dados dos
			veículos. A estrutura deverá conter, no mínimo, os seguintes

		campos:
			* Código (autoincremental)
			* Marca
			* Modelo
			* Ano
			* Combustível (G - Gasolina ou F - Flex)
			* Preço de fábrica (Sem impostos)
			* Quantidade

		2. Criar uma lista (vetor de structs) para armazenar os dados dos
			clientes. A estrutura deverá conter, no mínimo, os seguintes campos:

			* Código (autoincremental)
			* Nome
			* Idade
			* Endereço
			* Salário

		3. Criar um menu com as seguintes opções:
		
			1. Cadastrar Cliente: através de uma função, cadastrar os dados
				do cliente conforme struct criada para esse fim. O último cliente
				cadastrado deve sempre ficar ao final da lista (primeira posição
				livre do vetor). O sistema deve permitir cadastrar um cliente a
				qualquer momento. O código do cliente deve ser gerado
				automaticamente e de forma auto-incremental.

			2. Exibir cadastro de clientes: através de uma função, exibir
			todos os clientes e seus dados.
		
			3. Consultar cliente: através de uma função, o usuário irá digitar o
				nome do cliente e o sistema deverá exibir em tela os dados de
				cadastro desse cliente e retornar o índice do mesmo na estrutura.
				Caso não encontre o cliente procurado, o sistema deverá
				apresentar a mensagem: “Cliente não encontrado no cadastro”.

			4. Excluir cliente: através de uma função, o usuário deverá
				informar o nome do cliente que deseja excluir. Caso seja
				encontrado o cliente procurado, proceder com a reorganização da
				lista, onde o cliente encontrado deve ser retirado da lista e os
				demais clientes devem ser realocados não deixando a lista com
				espaços em branco. Os códigos dos clientes devem ser
				preservados.

			5. Cadastrar Veículo: cadastrar dados do veículo conforme struct
				criada para esse fim. O último veículo cadastrado deve sempre
				ficar no fim da lista (primeira posição livre do vetor). O código do
				veículo deve ser gerado automaticamente e de forma
				incremental.

			6. Exibir estoque: através de uma função, exibir todo o estoque de
				veículos com os detalhes de cada veículo.

			7. Consultar Veículo: através de uma função, o usuário poderá
				digitar o modelo ou a marca do veículo. Caso exista no estoque o
				veículo procurado, o sistema deverá exibir em tela os dados dos
				veículos encontrados conforme o critério de busca. Caso não
				encontre nenhum veículo, o sistema deverá apresentar a
				mensagem: “Veículo indisponível”.

			8. Excluir veículo: essa função deve chamar a função utilizada
				para consultar veículo. Utilizando-se das informações exibidas em
				tela, o usuário deverá então informar o código do veículo que
				deseja excluir,visto que poderão ser exibidos em tela mais de um
				veículo com o critério de busca. O sistema então deve validar
				esse código, exibindo em tela o nome do veículo que se deseja
				excluir. O sistema deve perguntar ao usuário se ele tem certeza
				de que deseja excluir o veículo. Caso a resposta seja S (sim)
				proceder com a reorganização da lista, onde o veículo a ser
				excluído deve ser retirado da lista e os demais veículos devem ser
				realocados não deixando a lista com espaços em branco. O código
				do veículo deve ser preservado. Caso não encontre o veículo com
				o código informado, exibir a mensagem: Código inexistente!
	
			9. Venda: A função Venda deverá chamar a função consultar cliente
				para exibir os dados do cliente. Se não existir o cliente procurado,
				o programa deve dar mensagem adequada e voltar para o menu.
				Caso o cliente seja encontrado, deve ser invocada a função
				Consultar Veiculo e exibir os dados do veículo procurado. Caso
				não encontre o modelo desejado, dar mensagem adequada e
				voltar ao menu. Só poderá ser efetuada a venda se o cliente e o
				modelo existirem. Regras:
				
				Verificar se o cliente quer comprar o veículo à vista ou a prazo.
				Só podem ser comercializados veículos em estoque. Caso o
				carro desejado não exista em estoque, exibir a mensagem:
				“Veículo indisponível”.
				Venda à vista: considerar os seguintes encargos no valor final
				do veículo:
				IPI: 11 % para veículos FLEX e 13% para veículos a GASOLINA,
				sobre o preço de fábrica.
				Margem de lucro da distribuidora de 10,5%, que deverá ser
				aplicado sobre o valor de fabrica somado ao valor do IPI.
				Apresentar em tela os seguintes valores: IPI, Margem de lucro
				e valor final da venda.
				Perguntar ao usuário se ele confirma a venda. Caso a resposta
				seja afirmativa, deduzir do estoque o veículo vendido e
				adicionar o valor da venda ao caixa.
				Venda a prazo: o cliente deverá informar o valor da entrada e o
				número de parcelas do financiamento (12, 24 ou 36 X). O
				comprometimento máximo com cada parcela deve ser de no
				máximo 30% do salário do cliente. Caso o comprometimento seja
				maior que 30% do salário, exibir mensagem: “Cliente não tem
				renda suficiente para o financiamento”. Os encargos serão os
				mesmos da venda à vista, acrescidos de juros de 1,9% ao mês por
				parcela.

					A cada venda efetuada, registrar o valor total da venda em uma
					variável chamada contaEmpresa, que deverá acumular todas as
					vendas efetivadas e deduzir do estoque o veiculo vendido.
					Considere que o valor da venda (preço de fábrica + IPI + margem
					de lucro) entram no caixa da empresa. Para os casos de
					financiamento, o valor das parcelas e juros não entram no caixa
					da empresa.

			10.Status Caixa: exibir o total de vendas da concessionária. */


#include<stdio.h>
#include<locale.h>
#define TAM 100

// (vetor de structs) para armazenar os dados dos veículos.

typedef struct{
	int codigo_veiculo, ano_veiculo, quantidade_veiculo;
	char marca_veiculo[50], modelo_veiculo[50],combustivel_veiculo;
	float preco_fabrica_veiculo;
}veiculo;

typedef struct{
	veiculo ficha_veiculo[TAM];
	int cont_veiculo;
}entrada_veiculo;


// (vetor de structs) para armazenar os dados dos clientes

typedef struct{
	int codigo_cliente, idade_cliente;
	char nome_cliente[TAM], endereco_cliente[TAM];
	float salario_cliente;
}cliente;

typedef struct{
	veiculo ficha_cliente[TAM];
	int cont_cliente;
}entrada_cliente;

void cadastro_cliente (entrada_cliente *p_cliente); 


main(){
	setlocale(LC_ALL,"Portuguese");
	
	entrada_cliente clientes;
	clientes.cont_cliente=0;
	int opt=0;
	
	printf ("*** Software revenda de veiculo ***");
	printf ("\n  Escolha uma das opções a baixo  ");
	printf ("\n\n 1- Cadastrar Cliente");
	printf ("\n 2- Exibir cadastro de clientes");	
	printf ("\n 3- Consultar cliente");
	printf ("\n 4- Excluir cliente");
	printf ("\n 5- Cadastrar Veículo");
	printf ("\n 6- Exibir estoque");
	printf ("\n 7- Consultar Veículo");
	printf ("\n 8- Excluir veículo");
	printf ("\n 9- Venda");	
	printf ("\n 10- Status Caixa");	
	printf ("\n\n Qual opção desejada ==>");
	
	scanf ("%i",&opt);			
		
	switch (opt){ 
	
	case 1:
	// chamada para função cadastro_cliente	 
	cadastro_cliente (&clientes);	
		
		break;
	case 2:
	
	
	
		break;
	case 3:
		
		
		
		break;
	case 4:
	
	
	
		break;
	case 5:
		
		
		
		
		break;
	case 6:
	
	
	
		break;
	case 7:
		
		
		
		
		break;
	case 8:
	
	
	
		break;
	case 9:
		
		
		
		
		break;
	case 10:
	
	
	
		break;
		
	default:printf("\n\t ==> ERRO!!");										
	
	}
}

// Função cadastrar cliente
void cadastro_cliente (entrada_cliente *p_cliente){
	
	
} 
