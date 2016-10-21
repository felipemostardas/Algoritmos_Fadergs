algoritmo "semnome"
// Leia a velocidade ma´xima permitida em uma avenida e a velocidade com que o motorista estava dirigindo nela.
// Calcule e mostre a multa que uma pessoa vai receber, sabendo que sa~o pagos: R$ 50 reais se o motorista
// ultrapassar em ate´ 10km/h a velocidade permitida; R$ 100 reais, se o motorista ultrapassar de 11 a 30 km/h
// a velocidade permitida; e R$ 200 reais, se estiver acima de 31km/h da velocidade permitida.

var
VelocidadeMaxima,VelocidadeDoVeiculo:inteiro

inicio
escreva ("Digite a velocidade maxima permitida: ")
leia (VelocidadeMaxima)
escreva ("Digite a velocidade do veiculo: ")
leia (VelocidadeDoVeiculo)
se (VelocidadeDoVeiculo<=VelocidadeMaxima) entao
escreval ("voce nao foi multado")
senao
se (VelocidadeDoVeiculo>=VelocidadeMaxima+1) e (VelocidadeDoVeiculo<=VelocidadeMaxima+10) entao
escreval ("sua multa é R$50,00")
senao
se (VelocidadeDoVeiculo>=VelocidadeMaxima+11) e (VelocidadeDoVeiculo<=VelocidadeMaxima+30) entao
escreval ("sua multa é R$100,00")
senao
se (VelocidadeDoVeiculo>=VelocidadeMaxima+31) entao
escreval ("sua multa é R$200,00")
fimse
fimse
fimse
fimse
fimalgoritmo
