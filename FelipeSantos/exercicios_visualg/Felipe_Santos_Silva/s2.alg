algoritmo "Pesquisa"
//Para um grupo de 40 pessoas, faça um algoritmo que determine:
//? A idade média das pessoas com menos de 1,70m de altura;
//? A altura média das pessoas com mais de 20 anos.

var
altura,idade,pessoas,somaAltura,contIdade,somaIdade,contAltura:real
inicio
pessoas<-40
 repita
 escreval("Digite a idade da pessoa")
 leia(idade)
 escreval("Digite a altura da pessoa")
 leia(altura)
 se(idade>20)entao
 somaAltura<-somaAltura+altura
 contAltura<-contAltura+1
 fimse
 se(altura<1.7)entao
 somaIdade<-somaIdade+idade
 contIdade<-contIdade+1
 fimse
 pessoas<-pessoas-1
 ate pessoas=0
escreval("A idade média das pessoas com menos de 1,70m de altura :",somaIdade/contIdade)
escreval("A altura média das pessoas com mais de 20 anos: ",somaAltura/contAltura)
fimalgoritmo
