algoritmo "semnome"
// Em um restaurante Self-Service, o prec¸o do quilo custa R$ 32,00. Crie um algoritmo
//que, para cada cliente, leia o peso do prato e valor gasto com bebida e calcule o valor
//total da conta que o cliente ira´ pagar [ valor da conta = bebida + (peso * 32,00) ]. Encerre
//a execuc¸a~o quando o peso do prato digitado for igual a 0 e o valor da bebida for tambe´m igual a 0.
var
quilos,bebida:real


inicio
quilos <- 1
bebida <- 1
enquanto (quilos <> 0) ou (bebida <> 0) faca
   escreva ("qual o peso de seu prato em gramas ou 0 (zero) para sair: ")
   leia (quilos)
   escreva ("digite o valor das bebidas ou 0 (zero) para sair: ")
   leia (bebida)
     escreval ("o total é: R$", bebida+(quilos*32/1000))
fimenquanto
fimalgoritmo
