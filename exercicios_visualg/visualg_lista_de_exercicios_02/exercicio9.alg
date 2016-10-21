algoritmo "semnome"
// Uma empresa decidiu dar um aumento escalonado a seus funciona´rios de acordo com a seguinte regra:
//? 13% para os sala´rios ate´ R$ 200,00;
//? 11% para os sala´rios maiores que R$ 200,0 e ate´ R$ 400,00;
//? 9 % para os sala´rios maiores R$ 400,00 e ate´ R$ 800,00;
//? 7% para os demais sala´rios.
//Fac¸a um algoritmo que receba o sala´rio atual de um funciona´rio e fornec¸a o valor do seu novo sala´rio.
var
salario:real

inicio
escreva ("Digite o salario: ")
leia (salario)
se (salario<=200) entao
   escreval ("salario reajustado é: ",salario*1.13)
senao
   se (salario<=400) entao
      escreval ("salario reajustado é: ",salario*1.11)
   senao
      se (salario<=800) entao
         escreval ("salario reajustado é: ",salario*1.09)
      senao
         se (salario>800) entao
            escreval ("salario reajustado é: ",salario*1.07)
         fimse
      fimse
   fimse
fimse
fimalgoritmo
