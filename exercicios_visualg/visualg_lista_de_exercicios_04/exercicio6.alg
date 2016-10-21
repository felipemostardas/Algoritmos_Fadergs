algoritmo "semnome"
//Fac¸a um programa que compute quantos nu´meros sa~o os mu´ltiplos de 2, de 3 e de 5 entre 1 e 100;
//compute tambe´m quantos sa~o os nu´meros mu´ltiplos de 2, 3 e 5 ao mesmo tempo.
var
controle,dois,tres,cinco,todos:inteiro

inicio
//inicio do loop

para controle de 1 ate 100 passo 1 faca
   se (controle mod 2)=0 entao
      dois<-dois+1
   fimse
   se controle mod 3=0 entao
      tres<-tres+1
   fimse
   se controle mod 5=0 entao
      cinco<-cinco+1
   fimse
   se (controle mod 2=0) e (controle mod 3=0) e (controle mod 5=0) entao
   todos<-todos+1
   fimse
fimpara
escreval ("######################################################")
escreval (dois," são multiplo de dois")
escreval (tres," são multiplo de tres")
escreval (cinco," são multiplo de cinco")
escreval (todos,"  são multiplo de dois tres e cinco ao mesmo tempo")
escreval ("######################################################")
fimalgoritmo
