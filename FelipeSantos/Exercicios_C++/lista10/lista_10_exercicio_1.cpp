/* Faça um programa C que leia uma estrutura para representar os seguintes dados de um veículo:
 ? Chassi
 ? Placa 
 ? Modelo 
 ? Marca 
 ? Ano 
 
 O programa deve permitir que sejam informados os dados. 
 Ao final listar a estrutura com seu conteúdo. A estrutura deve comportar o cadastro de  10 veículos.  */
 
 #include<stdio.h>
 #include<locale.h>
 #define TAM 10
 
 typedef struct{
 	int chassi;
	char placa[8];
 	char modelo[30];
	char marca[15];
	int ano;
 }ficha;
 
 
 main(){
 	setlocale(LC_ALL,"Portuguese");

 ficha dados[TAM];
 int x;
 for(x=0;x<TAM;x++){
 	printf("Digite o chassi %i==> ",x+1);
 	scanf ("%i",&dados[x].chassi);
 	
 	printf("Digite a placa %i==> ",x+1);
 	fflush(stdin);
 	gets (dados[x].placa);
 	
 	printf("Digite o modelo %i==> ",x+1);
 	fflush(stdin);
 	gets (dados[x].modelo);

 	printf("Digite a marca %i==> ",x+1);
 	fflush(stdin);
 	gets (dados[x].marca); 	

 	printf("Digite o ano %i==> ",x+1);
 	scanf ("%i",&dados[x].ano);	
 }
  for(x=0;x<TAM;x++){
 	printf("\nNumero do chassi : %i ",dados[x].chassi);
 	
 	printf("\nNumero da placa : %s ",dados[x].placa);
 	
 	printf("\nNome do modelo : %s ",dados[x].modelo);

 	printf("\nNome da marca : %s ",dados[x].marca); 	

 	printf("\nano do veiculo : %i ",dados[x].ano);	
 }
 
 }
