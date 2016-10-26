#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int menu, peso, flow;
    int op1Controler = 0;
    int menuControl = 0;
    float valorBanhoTosa, subTotalBT =0;
    int vPeso[10];
    float vValorBanhoTosa[10];
    int vContinue;
    char temp;

    while (menu != 0)
    {
        (menu == 11)? system("clear"):0;
        while (menu < 0 || menu > 4)
        {
            system("clear");
            (menuControl == 1) ? printf("Digite a opção correta!\n") : 0;
            printf("Menu: \n\n1. Banho e tosa \n2. Compra de produtos \n3. Gerar nota fiscal \n4. Zerar nota fiscal \n0. Encerrar o sistema \n\n");
            
            scanf(" %d", &menu);
            (menu < 0 || menu > 4) ? menuControl = 1 : menuControl = 0;
        }

        switch (menu)
        {
        case 1:
        {
            system("clear");
            printf("Digite o peso do bixinho:\n");
            scanf("%d", &peso);
            if (peso > 0 && peso < 5)
            {
                valorBanhoTosa = 30;
            }
            else
            {
                if (peso < 10)
                {
                    valorBanhoTosa = 35;
                }
                else
                {
                    if (peso < 15)
                    {
                        valorBanhoTosa = 40;
                    }
                    else
                    {
                        if (peso < 20)
                        {
                            valorBanhoTosa = 45;
                        }
                        else
                        {
                            valorBanhoTosa = 45 + (float)peso;
                        }
                    }
                }
            }
            vPeso[op1Controler] = peso;
            vValorBanhoTosa[op1Controler] = valorBanhoTosa;
            subTotalBT += valorBanhoTosa;
            op1Controler++;
            
            break;
        }
        case 3:
        {
            system("clear");
            printf(",-.___,-. \n");
            printf(" _/_ _ _/ \n");
            printf("  )O_O( \n");
            printf(" { (_) } \n");
            printf("  `-^-' \n");
            printf("******************* POWER PET *********************** \n\n");
            printf("Banhos & Tosas //////////////////////// \n");
            for (flow = 0; flow < op1Controler; flow++)
            {
                printf("%d) Animal de %dKg......................R$ %.2f \n", flow + 1, vPeso[flow], vValorBanhoTosa[flow]);
                //subTotalBT += vValorBanhoTosa[flow];
            }
            printf("\n\nSubtotal = R$ %.2f \n\n", subTotalBT);
            printf("***************************************************** \n\n");

            while (temp != '\n'){
                scanf("%char", &temp);
           
            }
            temp = 'x';
            
            fflush(stdin);
            fpurge(stdin);
            
            break;
        }
        case 0:
            system("clear");
            printf("Tchau!!!\n\n");
            break;
        }
        (menu == 0) ? menu = 0 : menu = 11;
    }
}
