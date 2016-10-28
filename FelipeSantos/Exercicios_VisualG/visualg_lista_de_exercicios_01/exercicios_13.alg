algoritmo "semnome"


var
salario,s_liquido:real

inicio
escreval ("qual o seu salario?")
leia (salario)
se salario<1499.15 entao
   s_liquido<-salario
senao
   se(salario<2246.75) entao
      s_liquido<-salario-(salario*0.075)-112.43
   senao
      se(salario<2995.70) entao
         s_liquido<-salario-(salario*0.15)-280.94
         senao
      se(salario<3743.19) entao
         s_liquido<-salario-(salario*0.225)-505.62
         senao
      se(salario>3743.19) entao
         s_liquido<-salario-(salario*0.275)-692.78
      fimse
      fimse
      fimse
   fimse
fimse
escreval ("salario liquido é :",s_liquido)
fimalgoritmo
