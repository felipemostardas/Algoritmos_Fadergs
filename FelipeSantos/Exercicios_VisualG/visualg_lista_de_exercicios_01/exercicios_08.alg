algoritmo "aula_3_prog_1"
// Função :
// Autor :
// Data : 24/8/2016
// Seção de Declarações
var

nota: inteiro

inicio
// Seção de Comandos
escreval ("Digite a nota:")
leia (nota)
se (nota>=0)e(nota<=100)entao
   se nota<=19 entao
      escreva ("reprovado")
   senao
      se(nota>=20) e (nota<60) entao
         escreva ("recuperação")
      senao
         se(nota>=60) e (nota<=100) entao
            escreva ("aprovado")
         fimse
      fimse
   fimse
   senao
   escreval("nem o valor correto da nota tu consegue digitar, tua cura só reprovando")
fimse
fimalgoritmo
