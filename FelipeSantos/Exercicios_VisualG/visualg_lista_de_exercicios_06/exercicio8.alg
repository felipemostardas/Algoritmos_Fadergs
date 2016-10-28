algoritmo "semnome"
// Crie um algoritmo que fac¸a o preenchimento automa´tico de um vetor de 30 posic¸o~es com os 30 primeiros
// nu´meros i´mpares existentes entre 0 e 100.
var
num_impar:vetor [1..30] de inteiro
cont_vet,numeral,x:inteiro
inicio
numeral<-0
cont_vet<-1
enquanto cont_vet<=30 faca
   se numeral mod 2<>0 entao
      num_impar[cont_vet]<-numeral
      numeral<-numeral+1
      cont_vet<-cont_vet+1
   senao
      numeral<-numeral+1
   fimse
fimenquanto
para x de 1 ate 30 faca
   escreval ("O numeo é impar", num_impar[x])
fimpara
fimalgoritmo
