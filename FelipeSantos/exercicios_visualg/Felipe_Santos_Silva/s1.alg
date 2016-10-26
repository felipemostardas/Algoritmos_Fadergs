algoritmo "soma_e_media"
// Faça um algoritmo que leia um conjunto de números e imprima a soma e a média
//desses números. Admita que o número 9999 é utilizado para encerrar o algoritmo,
//logo o mesmo não poderá ser considerado na soma e na média.
var
cont:inteiro
num,soma:real
inicio
repita
   escreval("Digite um numero qualquer: ")
   leia(num)
   se(num<>9999)entao
      cont<-cont+1
      soma<-soma+num
   fimse
ate(num=9999)
se(cont>0)entao
   escreval("A soma dos valores é ==> ",soma)
   escreval("A média dos valores é ==> ",soma/cont)
senao
   escreval("Nenhum número válido foi informado.")
fimse
fimalgoritmo
