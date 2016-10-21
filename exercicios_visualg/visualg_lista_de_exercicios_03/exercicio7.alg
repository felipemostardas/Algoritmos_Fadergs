algoritmo "semnome"


var
n_item:inteiro
valor_soma,valor:real

inicio
escreval ("quantos itens compraste")
leia (n_item)
limpatela
para n_item de 1 ate n_item faca
   escreva ("Valor do item", n_item, " R$: ")
   leia (valor)
   valor_soma<-valor_soma+valor
escreval ("Total R$: ", valor_soma)
fimpara


fimalgoritmo
