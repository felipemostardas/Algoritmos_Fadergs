algoritmo "semnome"
// Criar um algoritmo que leia 10 nu´meros pelo teclado e coloque num vetor de 10
// posic¸o~es. Apo´s, percorra esse vetor e exiba os nu´meros digitados.
var
nota:vetor[1..10] de inteiro
nome:vetor[1..10] de caracter
x:inteiro
nome_aluno:caracter
soma,nota_maior:real

inicio
para x de 1 ate 10 faca
   escreval ("digite o nome do aluno",x)
   leia (nome[x])
   escreval ("digite a nota do aluno",x)
   leia (nota[x])
   soma<-soma+nota[x]
   fimpara
nota_maior<-nota[1]
para x de 1 ate 10 faca
   se nota_maior<nota[x] entao
      nome_aluno<-nome[x]
      nota_maior<-nota[x]
   fimse
fimpara
escreval ("a media da turma é",(soma/10))
escreval ("o aluno que tirou a maior nota foi: ",nome_aluno,"e a sua nota foi: ",nota_maior)
fimalgoritmo
