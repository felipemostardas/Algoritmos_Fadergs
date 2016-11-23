/*  Faça um programa C que leia conteúdos de 3 alunos com a seguinte estrutura: nome, nota1, nota2 e média. 
Ao ler as 2 notas, calcular e atribuir a média para o campo média. Ao final, exibir os nomes e as médias de todos alunos. */

 #include<stdio.h>
 #include<locale.h>
 #define TAM 1
 
 typedef struct{
	char nome[100];
 	float nota1;
	float nota2;
	float media;
 }ficha;
 
 
 main(){
 	setlocale(LC_ALL,"Portuguese");

 ficha dados[TAM];
 int x;
 for(x=0;x<TAM;x++){
 	printf("Digite o nome %i==> ",x+1);
 	fflush(stdin);
 	gets (dados[x].nome);
 	fflush(stdin);
 	printf("Digite a nota 1==> ");
 	scanf ("%f",&dados[x].nota1);	

 	printf("Digite a nota 2==> ");
 	scanf ("%f",&dados[x].nota2);	

dados[x].media=(dados[x].nota1+dados[x].nota2)/2;

 }
  for(x=0;x<TAM;x++){
 	
 	printf("\nNome do aluno : %s ",dados[x].nome);
 	
 	printf("\n Nota 1 : %.f ",dados[x].nota1);	

 	printf("\n Nota 1 : %.f ",dados[x].nota2);
 	
 	printf("\n Media : %.f ",dados[x].media); 	
 }
 
 
 }
