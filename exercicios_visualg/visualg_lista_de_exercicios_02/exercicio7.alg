algoritmo "semnome"
// Elabore um algoritmo que, dada a idade de um nadador. Classifique-o em uma das seguintes categorias:
// ? Infantil A = 5 - 7 anos
// ? Infantil B = 8 - 10 anos
// ? Juvenil A = 11- 13 anos
// ? Juvenil B = 14 - 17 anos
// ? Se^nior = 18 - 25 anos
// Apresentar mensagem “idade fora da faixa eta´ria” quando for outro ano na~o contemplado.

var
idade:inteiro

inicio
escreva ("Digite a idade do nadador: ")
leia (idade)
se (idade>=5) e (idade<=7) entao
   escreval ("Infantil A")
senao
   se (idade>=8) e (idade<=10) entao
      escreval ("Infantil B")
   senao
      se (idade>=11) e (idade<=13) entao
         escreval ("Juvenil A")
      senao
         se (idade>=14) e (idade<=17) entao
            escreval ("Juvenil B")
         senao
            se (idade>=18) e (idade<=25) entao
               escreval ("Sênior")
            senao
            se (idade<5) ou (idade>25) entao
               escreval ("idade fora da faixa etária")
            fimse
            fimse
         fimse
      fimse
   fimse
fimse
fimalgoritmo
