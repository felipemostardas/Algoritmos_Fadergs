algoritmo "semnome"
// Faça um algoritmo que leia a quantidade de horas trabalhadas e o valor pago
// por hora, calcule e mostre o salário bruto, sala´rio li´quido e o valor
// do INSS, sabendo que a ali´quota de INSS e´ de 11%.
var
hora_trabalhada,valor_hora,salario_bruto,salario_liquido,inss:real

inicio
escreva ("valor de cada hora: ")
leia (valor_hora)
escreva ("valor quantas horas trabalhadas: ")
leia (hora_trabalhada)
salario_bruto<-(valor_hora*hora_trabalhada)
salario_liquido<-(salario_bruto*0.89)
inss<-(salario_bruto*0.11)
limpatela
escreval ("salario bruto: R$", salario_bruto)
escreval ("salario Liquido: R$", salario_liquido)
escreval ("valor inss: R$", inss)

fimalgoritmo
