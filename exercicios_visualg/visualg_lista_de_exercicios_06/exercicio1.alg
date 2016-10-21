algoritmo "semnome"
// Criar um algoritmo que leia 10 nu´meros pelo teclado e coloque num vetor de 10
// posic¸o~es. Apo´s, percorra esse vetor e exiba os nu´meros digitados.
var

vet: vetor [1..10] de inteiro
x:inteiro

inicio
para x de 1 ate 10 faca
escreval ("digite o numero",x)
leia (vet[x])
fimpara
escreval ("os numeros contidos são")
para x de 1 ate 10 faca
escreva (vet[x])

fimpara

fimalgoritmo
