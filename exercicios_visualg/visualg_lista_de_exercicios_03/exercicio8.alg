algoritmo "semnome"


var
n_aluno:inteiro
aprovados,nota:real

inicio
escreval ("quantos alunos tem na sala")
leia (n_aluno)
limpatela
para n_aluno de 1 ate n_aluno faca
   escreva ("Nota do aluno ", n_aluno, " : ")
   leia (nota)
   se nota>=7 entao
   aprovados<-aprovados+1
   fimse

fimpara
escreval ("Total de alunos aprovados: ", aprovados)

fimalgoritmo
