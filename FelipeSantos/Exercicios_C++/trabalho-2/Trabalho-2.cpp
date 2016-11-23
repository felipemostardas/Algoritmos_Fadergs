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


#include<stdio.h>
#include<locale.h>
#define TAM 100

// (vetor de structs) para armazenar os dados dos ve�culos.

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
	printf ("\n\n Qual op��o desejada ==>");
	
	scanf ("%i",&opt);			
		
	switch (opt){ 
	
	case 1:
	// chamada para fun��o cadastro_cliente	 
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

// Fun��o cadastrar cliente
void cadastro_cliente (entrada_cliente *p_cliente){
	
	
} 
