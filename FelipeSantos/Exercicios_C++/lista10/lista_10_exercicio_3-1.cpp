/* 3. Faça um programa em C segundo as regras abaixo: 

	• Criar uma estrutura com os seguintes campos: nome, nota1, nota2. 

	• Um menu com 4 opções: 
		
		? 1 – Cadastrar aluno: desenvolver uma função para cadastrar 
				
				nome, nota1 e nota2 para uma turma de 30 alunos 

		? 2 – Gerar Média: desenvolver uma função que calcule a média aritmética dos alunos cadastrados na estrutura. 
	
				Cálculo: ((nota1*3,5)+(nota2*6,5))/10. 
				Gravar a média calculada no campo média, que deverá ser criado na mesma estrutura . 

		? 3 – Fechamento: desenvolver uma função que exiba o nome, a média de cada aluno cadastrado 
			  na estrutura juntamente com a mensagem de aprovado ou reprovado. 
			  São considerados aprovados todos os alunos com média superior a 7,0. 
			  A função deve retornar a quantidade de alunos aprovados. 
			  A quantidade de aprovados deve ser exibida após a chamada da função. 

		? 4 - Sair */

#include<stdio.h>
#include<locale.h>
#define TAM 3

//codigo do flavio
typedef struct{
	char nome[100];
	float n1,n2,media;
} ficha;



void cadastrarAluno(ficha dados[TAM]);
void gerarMedia(ficha dados[TAM]);
int fechamento(ficha dados[TAM]);
main(){
	setlocale(LC_ALL,"portuguese");
	int opcao;
	ficha dados[TAM];	
	do{
		printf("\n1 - Cadastrar Aluno");
		printf("\n2 - Gerar Média");
		printf("\n3 - Fechamento");
		printf("\n4 - Sair");
		scanf("%i",&opcao);
		switch(opcao){
			case 1:cadastrarAluno(dados);
			break;	
			case 2:gerarMedia(dados);
			break;
			case 3:printf("\n\t Qtde de aprovados: %i",fechamento(dados));
			break;
			case 4:
			break;
			default:printf("\n\t ==> ERRO!!");
		}
		
	}while(opcao!=4);
}

void cadastrarAluno(ficha dados[TAM]){
	int x;
	for(x=0;x<TAM;x++){
		printf("Digite o nome do aluno %i ==>  ",x+1);
		fflush(stdin);
		gets(dados[x].nome);
		printf("Digite a nota 1 ==> ");
		scanf("%f",&dados[x].n1);
		printf("Digite a nota 2 ==> ");
		scanf("%f",&dados[x].n2);
		printf("\n--------------------------\n")	;
	}
	printf("\n\t NOTAS CADASTRADAS COM SUCESSO!\n\n");
	
}

void gerarMedia(ficha dados[TAM]){
	int x;
	for(x=0;x<TAM;x++){
		dados[x].media=((dados[x].n1*3.5)+(dados[x].n2*6.5))/10;	
	}
	printf("\n\t MÉDIAS PROCESSADAS COM SUCESSO!\n\n");
}

int fechamento(ficha dados[TAM]){
	int x,contA=0;
	for(x=0;x<TAM;x++){
		printf("\n NOME: %s",dados[x].nome);
		printf("\n Média: %.2f",dados[x].media);
		if(dados[x].media>7){
			printf("\n\t ALUNO APROVADO");
			contA++;
		} else printf("\n\t ALUNO REPROVADO");
	}
	return contA;	
}
