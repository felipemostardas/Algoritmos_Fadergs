#include <iostream>
#include <stdio.h>
#define TAM 100

typedef struct{
    int codigo, ano, quantidade;
    char marca[100], modelo[100], combustivel;
    float precoFabrica;
}veiculo;

typedef struct{
    veiculo dados[TAM];
    int controle;
}cadastroVeiculos;

typedef struct{
    int codigo, idade;
    char nome[100], endereco[100];
    float salario;
}cliente;

typedef struct{
    cliente dados[TAM];
    int controle;
}cadastroClientes;

void cadastrarCliente(cadastroClientes *pClientes);
void exibirCliente(cadastroClientes *pClientes);
void consultarCliente(cadastroClientes *pClientes);
void excluirCliente(cadastroClientes *pClientes);

void cadastrarVeiculo(cadastroVeiculos *pVeiculos);
int estoqueVeiculo(cadastroVeiculos *pVeiculos);
void consultarVeiculo(cadastroVeiculos *pVeiculos);
void excluirVeiculo(cadastroVeiculos *pVeiculos);

void venda(cadastroClientes *pClientes, cadastroVeiculos *pVeiculos);

void pressEnter(char pMenu);

int main(){

cadastroVeiculos veiculos;
cadastroClientes clientes;
veiculos.controle=0;
clientes.controle=0;
int menu;

do{
    system("clear");
    printf("\nCARTRON ********************** \n\n");
    printf("Digite a opção: \n");
    printf("1 - Cadastrar cliente \n");
    printf("2 - Exibir cadastro de clientes \n");
    printf("3 - Consultar cliente \n");
    scanf("%i", &menu);

    switch (menu)
    {
    case 0:
    break;
    case 1:cadastrarCliente(&clientes);
    break;
    case 2:exibirCliente(&clientes);
    break;
    case 3:consultarCliente(&clientes);
    break;
    case 4:
    default:
        break;
    }

pressEnter(menu);

}while (menu != 0);


}

void pressEnter(char pMenu){
    char temp;
    printf("\n");
    while (temp != '\n' && pMenu != 0)
        {
            scanf("%char", &temp);
        }
    fpurge(stdin);
}

void cadastrarCliente(cadastroClientes *pClientes){
    system("clear");
    cliente aux;
    if (pClientes->controle==TAM) printf("\n\t --> Lista cheia!");
    else{
        printf("Digite o nome do cliente: ");
        fpurge(stdin);
        gets(aux.nome);
        printf("Idade: ");
        scanf("%i", &aux.idade);
        printf("Endereço: ");
        fpurge(stdin);
        gets(aux.endereco);
        printf("Salário: ");
        scanf("%f", &aux.salario);
        aux.codigo = pClientes->dados[pClientes->controle -1].codigo + 1;
        pClientes->dados[pClientes->controle]=aux;
        pClientes->controle++;
        printf("\n Cadastro com sucesso!!!");
    }
}

void exibirCliente(cadastroClientes *pClientes){
    int x;
    if (pClientes->controle==0) printf("\n\t Lista vazia!!!");
    else {
        for(x=0;x<pClientes->controle;x++){
            printf("\n\nCodigo: %i", pClientes->dados[x].codigo);
            printf("\nNome: %s", pClientes->dados[x].nome);
            printf("\t%i anos", pClientes->dados[x].idade);
            printf("\nEndereço: %s", pClientes->dados[x].endereco);
            printf("\nSalario: %.2f", pClientes->dados[x].salario);
       }
    } 
}

void consultarCliente(cadastroClientes *pClientes){
    int x, nameFound, finder = 0;
    char inputName[TAM];
    printf("\nDigite o nome do cliente a ser consultado: ");
    fpurge(stdin);
    gets(inputName);
    for(x=0;x<pClientes->controle;x++){
        nameFound = strcasecmp(inputName, pClientes->dados[x].nome);
        if(nameFound == 0) {
            printf("\n\nCodigo: %i", pClientes->dados[x].codigo);
            printf("\nNome: %s", pClientes->dados[x].nome);
            printf("\t%i anos", pClientes->dados[x].idade);
            printf("\nEndereço: %s", pClientes->dados[x].endereco);
            printf("\nSalario: %.2f", pClientes->dados[x].salario);
        finder++; 
        }
    }
    if(finder==0){
        printf("\nCliente não encontrado!!!");
    }
}

void excluirCliente(cadastroClientes *pClientes){
    int x, vCodigo, vIndex;
    printf("Digite o Id para apagar: ");
    scanf("%i", &vCodigo);

}

void cadastrarVeiculo(cadastroVeiculos *pVeiculos){
    system("clear");
    char comb;
    veiculo aux;
    if (pVeiculos->controle==TAM) printf("\n\t --> Lista cheia!");
    else{
        printf("Digite o modelo do veiculo: ");
        fpurge(stdin);
        gets(aux.modelo);
        printf("Digite a marca do veiculo: ");
        fpurge(stdin);
        gets(aux.marca);
        printf("Ano: ");
        scanf("%i", &aux.ano);
        printf("Tipo de comustivel G/F: ");
        do{
            fpurge(stdin);
            scanf("%c", &comb);
        } while (comb != 'F' and comb != 'G');
        aux.combustivel = comb;
        printf("Quantidade em estoque: ");
        scanf("%i", &aux.quantidade);
        printf("Preço de fábrica: ");
        scanf("%f", &aux.precoFabrica);
        aux.codigo = pVeiculos->dados[pVeiculos->controle -1].codigo + 1;
        pVeiculos->dados[pVeiculos->controle]=aux;
        pVeiculos->controle++;
        printf("\n Cadastro com sucesso!!!");
    }

}