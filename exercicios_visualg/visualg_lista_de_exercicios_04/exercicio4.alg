algoritmo "semnome"
// Fac¸a um programa que dada uma quantia de dinheiro em libras inglesas imprime o equivalente em do´lares canadenses.
// A relac¸a~o e´ £1,0=$1,84. depois disso, pergunte se o usua´rio quer ou na~o converter mais algum valor; se na~o quiser, encerre.
var
libras:real
repetir:caracter
inicio
repita
escreva ("digite a quantidade de libras que tu quer converter: ")
   leia (libras)
escreval (libras," libras em dollares é: ",libras*1.84)
escreva ("quer fazer mais uma conversão S para sim ou N para não: ")
   leia (repetir)
ate repetir="n"
fimalgoritmo
