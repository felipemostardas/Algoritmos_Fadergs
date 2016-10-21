algoritmo "semnome"


var
valor:real

inicio
valor<-1
enquanto (valor<>0) faca
escreval ("digite o valor do veiculo para calcular ou 0 para sair: ")
leia (valor)
se((valor>0)  e (valor<50000)) entao
escreval("valor do carro é :", valor*0.02)
senao
se(valor>=50000)entao
escreval("valor do carro é :", valor*0.05)
senao
escreval("Finalizado")
fimse
fimse
fimenquanto
fimalgoritmo
