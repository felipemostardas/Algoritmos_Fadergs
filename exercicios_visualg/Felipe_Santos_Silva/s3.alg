algoritmo "Pesquisa"
// Um hotel com 200 quartos cobra R$ 115,00 por diária e mais uma taxa de serviços. A
// taxa de serviços é cobrada da seguinte forma:
// • R$ 12,00 por diária, se o número de diárias for < 15;
// • R$ 10,50 por diária, se o número de diárias for = 15;
// • R$ 9,00 por diária, se o número de diárias for > 15.
// Construa um menu, com as seguintes opções:
// 1 - Saída
// Esta opção deve ler do usuário o nome do hóspede e a quantidade de diárias e
// escrever o total da conta do hóspede.
// 2 - Fechar Caixa
// Esta opção deve encerrar o algoritmo e exibir o total faturado pelo hotel e a
// quantidade de quarto que foram liberados.

var
menu,quartos,diarias:inteiro
nome:caracter
contahospede,totalhotel:real
inicio
repita
   escreval ("Bem Vindos ao Hotel da FADERGS")
   escreval ("##############################")
   escreval ("# 1 - Para Saida de hospede  #")
   escreval ("# 2 - Fechar Caixa           #")
   escreval ("##############################")
   leia (menu)
   escolha menu
   caso 1
      se(quartos<200)entao
      escreval("Nome: ")
      leia (nome)
      escreval("quantidade de diárias: ")
      leia (diarias)
      se diarias<15 entao
         contahospede<-diarias*(12+115)
      senao
         se diarias=15 entao
            contahospede<-diarias*(10.5+115)
         senao

               contahospede<-diarias*(9+115)

         fimse
      fimse
      totalhotel<-contahospede+totalhotel
      quartos<-quartos+1
      limpatela
      escreval ("A conta do hospede ",nome," é :R$ ",contahospede)
      escreval("")
senao
           escreval("nao existem mais hospedes")
      fimse
   caso 2
      limpatela
      escreval ("O total do faturamento do hotel é: R$ ",totalhotel)
      escreval ("O total de quartos liberados é : ",quartos)

   outrocaso
      escreval ("opção não existe")
   fimescolha
ate menu=2
fimalgoritmo
