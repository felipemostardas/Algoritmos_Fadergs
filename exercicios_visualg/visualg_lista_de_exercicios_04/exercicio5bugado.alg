algoritmo "semnome"
//Calcule a exponenciac¸a~o de dois nu´meros inteiros x e y entrados pelo teclado, mas fac¸a isso sem usar a func¸a~o ^,
// ou seja, obtenha xy so´ com multiplicac¸a~o e um comando de repetic¸a~o.

//var
//n1,n2,potencia:inteiro

//inicio

//escreva ("digite o primeiro numero: ")
//leia (n1)
//escreva ("digite o segundo numero: ")
//leia (n2)
//potencia<-n1
//repita
//   potencia<-n1*n1+potencia
//   n2<-n2-1
//ate (n2=0)
//escreval ("o total é: ", potencia)

//fimalgoritmo

var
n : real // Quantidade de vezes que será multiplicado
x : real // Numero a ser multiplicado
resultado : real
i : real // Contador
inicio
escreval ("Digite numero: base")
leia (x)
escreval ("Digite numero: expoente")
leia (n)
i <- 1
resultado := (x)
se n = 0 entao
resultado = 1
senao
enquanto i < n faca
resultado <- resultado * x
i <- i + 1
fimenquanto
fimse
escreval ("Resultado da potencia é:",resultado)
fimalgoritmo
