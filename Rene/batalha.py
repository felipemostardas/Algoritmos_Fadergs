from random import randint
from pandas import *
from termios import tcflush, TCIFLUSH
import os
import sys

LAT = 16
LON = 16

pontos = 0
rounds = 0

oceano = [[0 if randint(0,1) == 0 else randint(0,3) for x in range(LAT)] for y in range(LON)] 
ataque = [[0 for x in range(LAT)] for y in range(LON)] 


#Define as funcoes que substituem o switch de ataque
def acase_0():
    print "AGUA!!!!"

def acase_1():
    print "Voce acertou uma Corveta!!!"

def acase_2():
    print "Voce acertou uma Fragata!!!"

def acase_3():
    print "Voce acertou um Porta-Avioes!!!"

dict1 = {0 : acase_0, 1 : acase_1, 2 : acase_2, 3 : acase_3}

def aswitch(x):
     dict1[x]()

fim = 0
while fim == 0:
    os.system('clear')
    print "Controle da Missao - NORAD ////////////////////////////////////////"
    print "Status: %d pontos       %d Rounds \n\n" % (pontos, rounds)

    print "Digite o comando: \n\n 1 - Atacar \n 2 - Mostrar matrix de ataque \n 3 - Encerrar e mostrar carta nautica \n\n"
    
    try:
        menu = int(raw_input())
    except ValueError:
        print("Opcao invalida!")
        menu = 0
    
    if menu == 1:
        print "\n\nDigite a LATITUDE (0 - 15):"
        i = input()
        print "\nDigite a LONGITUDE (0 - 15):"
        j = input()
        print "\n"

        if i >= 0 and i < 16 and j >= 0 and j < 16:
            if ataque[i][j] > 0:
                print "Voce ja atacou este setor!!!"
            else:
                aswitch(oceano[i][j])
                pontos += oceano[i][j]
                oceano[i][j] = 0
                ataque[i][j] = 1
                rounds += 1
        else:
            print "\n\n COORDENADAS INVALIDAS!!!"

        fim = 1
        for p in range(len(oceano)):
            if p > 0:
                fim = 0
        if fim == 1:
            print "\n\n Voce eliminou todos os inimigos!!!!"

        tcflush(sys.stdin, TCIFLUSH)
        wait = raw_input()
        tcflush(sys.stdin, TCIFLUSH)
    
    elif menu == 2:
        os.system('clear')
        print "NORAD ////////////////////////////// \n\n"
        print DataFrame(ataque)

        tcflush(sys.stdin, TCIFLUSH)
        wait = raw_input()
        tcflush(sys.stdin, TCIFLUSH)
    elif menu == 3:
        fim = 1

os.system('clear')    
print DataFrame(oceano)
print "\n\n"
