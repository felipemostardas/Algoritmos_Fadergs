/*
BATALHA NAVAL

Autor: Rene Danni
Data: 27/10/2016

FADERGS - ALGORITMOS E PROGRAMAÇÃO
Professor: Flávio Treib
*/

#include <iostream>
#include <stdio.h>

#define LAT 16
#define LON 16

int main()
{

    int oceano[LAT][LON];
    int ataque[LAT][LON];
    int i;
    int j;
    int menu, fim = 0;
    int pontos = 0, rounds = 0;
    char temp;

    for (i = 0; i < LAT; i++)
    {
        for (j = 0; j < LON; j++)
        {
            if (arc4random() % 2 == 0)
            {
                oceano[i][j] = 0;
            }
            else
            {
                if (arc4random() % 2 == 0)
                {
                    oceano[i][j] = 0;
                }
                else
                {
                    oceano[i][j] = arc4random() % 4;
                }
            }
        }
    }

    for (i = 0; i < LAT; i++)
    {
        for (j = 0; j < LON; j++)
        {
            ataque[i][j] = 0;
        }
    }

    while (fim == 0)
    {
        system("clear");
        printf("Controle da Missão - NORAD //////////////////////////////////////// \n");
        printf("Status: %d pontos       %d Rounds \n\n", pontos, rounds);

        printf("Digite o comando: \n\n 1 - Atacar \n 2 - Mostrar matrix de ataque \n 3 - Encerrar e mostrar carta nautica \n\n");
        scanf("%d", &menu);

        switch (menu)
        {
        case 1:
        {
            printf("\n\nDigite a LATITUDE (0 - 15):");
            scanf("%d", &i);
            printf("\nDigite a LONGITUDE (0 - 15):");
            scanf("%d", &j);
            printf("\n\n");

            if (i >= 0 && i < 16 && j >= 0 && j < 16)
            {
                if (ataque[i][j] > 0)
                {
                    printf("Você já atacou este setor!!!");
                }
                else
                {

                    switch (oceano[i][j])
                    {
                    case 0:
                    {
                        printf("ÁGUA!!!!");
                        break;
                    }
                    case 1:
                    {
                        printf("Você acertou uma Corveta!!!");
                        pontos += 1;
                        break;
                    }
                    case 2:
                    {
                        printf("Você acertou uma Fragata!!!");
                        pontos += 2;
                        break;
                    }
                    case 3:
                    {
                        printf("Você acertou um Porta-Aviões!!!");
                        pontos += 3;
                        break;
                    }
                    default:
                        break;
                    }

                    oceano[i][j] = 0;
                    ataque[i][j] = 1;
                    rounds += 1;
                }
            }
            else
            {
                printf("\n\n COORDENADAS INVÁLIDAS!!!");
            }

            fim = 1;
            for (i = 0; i < LAT; i++)
            {
                for (j = 0; j < LON; j++)
                {
                    if (oceano[i][j] > 0)
                    {
                        fim = 0;
                    }
                }
            }
            if (fim == 1)
            {
                printf("\n\n Você eliminou todos os inimigos!!!!");
            }

            while (temp != '\n')
            {
                scanf("%char", &temp);
            }
            temp = 'x';

            fflush(stdin);
            fpurge(stdin);

            break;
        }
        case 2:
        {
            system("clear");
            printf("NORAD ////////////////////////////// \n\n");

            for (i = 0; i < LAT; i++)
            {
                printf("\n");
                for (j = 0; j < LON; j++)
                {
                    printf("%d ", ataque[i][j]);
                }
            }

            while (temp != '\n')
            {
                scanf("%char", &temp);
            }
            temp = 'x';

            fflush(stdin);
            fpurge(stdin);

            break;
        }
        case 3:
        {
            fim = 1;
            break;
        }
        default:
            break;
        }
    }

    system("clear");

    for (i = 0; i < LAT; i++)
    {
        printf("\n");
        for (j = 0; j < LON; j++)
        {
            printf("%d ", oceano[i][j]);
        }
    }
    printf("\n\n");
}