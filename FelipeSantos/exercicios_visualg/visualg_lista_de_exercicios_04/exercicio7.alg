algoritmo "semnome"
//Calcular o valor anual e total de um financiamento banca´rio de 20 anos,
// onde o valor da prestac¸a~o inicial e´ 700,00, e com reajuste da prestac¸a~o em 0.85% ao me^s.
var
prestacao,ano,mes,total,emprestimo:real

inicio
//inicialização de variaveis
prestacao<-700
ano<-1
repita
   mes<-12
   repita
      prestacao<-prestacao*1.085
      mes<-mes-1
   ate (mes=0)
   escreval ("total do ano: ", ano," é R$", prestacao:2:2)
   total<-total+prestacao
   ano<-ano+1
ate (ano=21)
escreval (" total do financiamento é: ",total:2:2)

fimalgoritmo
