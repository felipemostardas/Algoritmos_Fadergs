#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#define TAM 1000
typedef struct{
	char nome[100];
	float n1,n2,media;
	int matricula;
}ficha;

typedef struct{
	ficha dados[TAM];
	int controle;
}cadastro;

void cadastrarAluno(cadastro *pAlunos);
void gerarMedia(cadastro *pAlunos);
int fechamento(cadastro *pAlunos);
int pesquisarAluno(cadastro *pAlunos);
void ExcluirAluno(cadastro *pAlunos);
int buscaIndice(cadastro *pAlunos, int pMatricula);

int matricula=1;
main(){
	setlocale(LC_ALL,"portuguese");
cadastro alunos;
alunos.controle=0;
int opcao;

do{
		printf("\n1 - Cadastrar Aluno");
		printf("\n2 - Gerar MŽdia");
		printf("\n3 - Fechamento");
		printf("\n4 - Pesquisar");
		printf("\n5 - Excluir Aluno ==> ");
		printf("\n6 - Sair ==> ");
		scanf("%i",&opcao);
		switch(opcao){
			case 1:cadastrarAluno(&alunos);
			break;
			case 2:gerarMedia(&alunos);
			break;
			case 3:printf("\n\t Qtde de aprovados: %i",fechamento(&alunos));
			break;
			case 4:if(pesquisarAluno(&alunos)==0) printf("\n\t Aluno n‹o encontrado!");
			break;
			case 5:ExcluirAluno(&alunos);
			break;
			case 6:
			break;
			default:printf("\n\t ==> ERRO!!");
		}

	}while(opcao!=6);

}

void cadastrarAluno(cadastro *pAlunos){
	system("cls");
	ficha aux;
	aux.matricula=matricula++;
	if(pAlunos->controle==TAM) printf("\n\t --> Lista cheia!");
	else{
	printf("Digite o nome do aluno: ");
	fflush(stdin);
	gets(aux.nome);
	printf("\n Nota 1: ");
	scanf("%f",&aux.n1);
	printf("\n Nota 2: ");
	scanf("%f",&aux.n2);
	pAlunos->dados[pAlunos->controle]=aux;
	pAlunos->controle++;
	printf("\n Cadastrado com sucesso!!");
	}
}

void gerarMedia(cadastro *pAlunos){
	int x;
	if(pAlunos->controle==0) printf("\n\t==> Lista Vazia!");
	else{
		for(x=0;x<pAlunos->controle;x++){
			pAlunos->dados[x].media=((pAlunos->dados[x].n1*3.5)+(pAlunos->dados[x].n2*6.5))/10;
		}
		printf("\n\t==> Medias geradas com sucesso!");
	}
}

int fechamento(cadastro *pAlunos){
	int x,cont=0;
	if(pAlunos->controle==0) printf("\n\t==> Lista Vazia!");
	else{
		for(x=0;x<pAlunos->controle;x++){
			printf("\nCîDIGO: %i",pAlunos->dados[x].matricula);
			printf("\nNome: %s",pAlunos->dados[x].nome);
			printf("\nMŽdia: %.2f",pAlunos->dados[x].media);
			if(pAlunos->dados[x].media>=7){
				printf("\nAluno Aprovado!");
				cont++;
			}else{
				printf("\nAluno Reprovado!");
			}
			printf("\n --------------------------------\n");
		}
		return cont;
	}
}

int pesquisarAluno(cadastro *pAlunos){
	int x,encontrado=0;
	char nome[100];
	printf("\nInforme o nome do aluno: ");
	fflush(stdin);
	gets(nome);
	for(x=0;x<pAlunos->controle;x++){
		if(!strcmp(nome,pAlunos->dados[x].nome)){
			encontrado=1;
			printf("\nMatricula: %i",pAlunos->dados[x].matricula);
			printf("\nNome: %s",pAlunos->dados[x].nome);
			printf("\n------------------------------------\n");
		}

	}
	return encontrado;

}

void ExcluirAluno(cadastro *pAlunos){
	int matExcluir,x,indice=-1,retorno;
	if(pesquisarAluno(pAlunos)==0) printf("\n\t Aluno n‹o encontrado!");
	else{
		printf("\n Digite a matricula do aluno que deseja excluir: ");
		scanf("%i",&matExcluir);

		retorno=buscaIndice(pAlunos,matExcluir);
		if(retorno==-1) printf("\n MAtricula informada n‹o confere!");
		else{
			for(x=retorno;x<pAlunos->controle;x++){
				pAlunos->dados[x]=pAlunos->dados[x+1];
			}
			pAlunos->controle--;
			printf("\n Aluno exclu’do com sucesso!");
		}
	}
}

int buscaIndice(cadastro *pAlunos, int pMatricula){
	int x;
	for(x=0;x<pAlunos->controle;x++){
			if(pAlunos->dados[x].matricula==pMatricula) {
				return x;
			}
		}
	return -1;
}

