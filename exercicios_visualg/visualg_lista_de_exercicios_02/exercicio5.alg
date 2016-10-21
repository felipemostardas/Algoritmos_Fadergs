algoritmo "semnome"

//Ale´m disso, mostre a situac¸a~o do aluno
//(aprovado, recuperac¸a~o ou reprovado). Se a me´dia for maior ou
//igual a 6, o aluno esta´ aprovado por me´dia; se for menor que e
//maior ou igual a 2, o aluno esta´ em recuperac¸a~o; se for menor
//que 2, o aluno esta´ reprovado.

var
n1,n2,media:real
aprov:caracter

inicio
escreva ("digite a nota 1 : ")
leia (n1)
escreva ("digite a nota 2 : ")
leia (n2)
media<-(n1*2+n2*3)/5
se media>=6 entao
aprov<-"aprovado"
senao
se media>=2 entao
aprov<-"Recuperação"
senao
aprov<-"Reprovado"
fimse
fimse

escreva ("a media é: ",media, " e a situação é :", aprov)
fimalgoritmo
