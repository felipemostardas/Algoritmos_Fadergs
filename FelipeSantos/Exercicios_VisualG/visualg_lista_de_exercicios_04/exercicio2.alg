algoritmo "semnome"
// Fac¸a um programa que pegue um nu´mero do teclado e calcule a soma de todos os nu´meros de 1
// ate´ ele (use lac¸o repita) Ex.: o usua´rio entra 7, o programa vai mostrar 28, pois 1+2+3+4+5+6+7=28.

var
n1,soma:inteiro

inicio
escreva ("escreva um numero: ")
   leia (n1)
repita
    soma<-soma+n1

    n1<-n1-1
ate  n1=0
escreval ("total da soma de todos numeros: ",soma)
fimalgoritmo
