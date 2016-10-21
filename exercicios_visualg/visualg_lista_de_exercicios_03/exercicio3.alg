algoritmo "semnome"
// Uma concessiona´ria esta´ vendendo os seus vei´culos com desconto. Fac¸a um algoritmo que calcule e exiba
// o valor do desconto e o valor a ser pago pelo cliente. O desconto devera´ ser calculado sobre o valor do
// vei´culo de acordo com o combusti´vel (a´lcool – 25%, gasolina – 21% ou diesel –14%). Com valor do vei´culo
// igual a zero encerra entrada de dados. Informe total de descontos concedidos pela concessiona´ria e total pago pelos clientes.

var
ValorVeiculo:real
TipoCombustivel:inteiro

inicio
ValorVeiculo <- 1
enquanto ValorVeiculo <> 0 faca
   escreva ("digite o valor do veiculo ou 0 (zero) para sair: ")
   leia (ValorVeiculo)
   se(ValorVeiculo>0)entao
      escreval ("qual o tipo de cobustivel?")
      escreval ("para gasolina digite 1 :")
      escreval ("para alcool digite 2 :")
      escreval ("para diesel digite 3 :")
      leia (TipoCombustivel)
      escolha TipoCombustivel
      caso 1
         escreval ("o valor do veiculo ficará: ", ValorVeiculo*(1-0.21))
      caso 2
         escreval ("o valor do veiculo ficará: ", ValorVeiculo*(1-0.25))
      caso 3
         escreval ("o valor do veiculo ficara: ", ValorVeiculo*(1-0.14))
      fimescolha
   senao
      escreval("Saindo..")
   fimse
fimenquanto
fimalgoritmo
