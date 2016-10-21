algoritmo "semnome"
// Desenvolva um algoritmo que, dada uma nota de 0 a 10, mostre o conceito
//relativo a` nota, segundo a tabela a seguir (0 a 2 = E, 2 a 4 = D,
//4 a 6 = C, 6 a 8 = B e 8 a 10 = A).

var
nota:inteiro

inicio
escreva ("digite a nota: ")
leia (nota)
//se nota>=0 && nota<=10
//entao
escolha nota
caso nota>=0 && nota<2
escreva ("E")
caso nota>=2 && nota<4
escreva ("D")
caso nota>=4 && nota<6
escreva ("C")
caso nota>=6 && nota<8
escreva ("B")
caso nota>=8 && nota<=10
escreva ("A")
fim-escolha
fimalgoritmo
