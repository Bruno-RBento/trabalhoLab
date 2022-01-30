#include<stdio.h>
#include <string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//files on directory
//#include "functions-team-8.c"
#include "functions-team-8.h"

#define N 5
#define M 5
#define PI 3.141592654


    int main(int argc, char *argv[])
{
    int men1_menu_principal;
    int men2_menu_secundario;

    int flag_menu1 = 1;
    int flag_menu2 = 1;
    int number_menu1=-1;
    int number_menu2 = -1;
    srand(time(NULL));

    for (int i = 0; i < argc; i++)
    {
        printf("Argument: %d: %s\n", i, argv[i]);

        if (!(strcmp(argv[i], "--help"))){
            help_flag();
            }
    }
    int arrayOfValues[N];
    int arrayMulti[M][M];
    escreverVetor(arrayOfValues);
    mostrarVetor(arrayOfValues);
    premutacaoElementos(arrayOfValues);

    while (flag_menu1)
    {
        menu_principal();
        printf("\n");

        scanf("%d", &number_menu1);
        switch (number_menu1)
        {
        case 1:
            printf("Escolheu a opção [1]\n");
            ordernarCrescente(arrayOfValues);
            continue;
        case 2:
            printf("Você escolheu a opção [2]\n");
            SomaArray(arrayOfValues);
            break;
        case 3:
            printf("Escolheu a opção [3]\n");
            premutacaoElementos(arrayOfValues);
            break;
        case 4:
            printf("Escolheu a opção [4]\n");
            coseno2half(arrayOfValues);
            break;
        case 5:
            printf("Escolheu a opção [5]\n");
            randomNumber(arrayOfValues);
            break;
        case 6:
            printf("Escolheu a opção [6]\n");
            iDivisivel3(arrayOfValues);
            break;
        case 7:
            printf("Escolheu a opção [7]\n");
            menu_ajuda();
            printf("\n");
            break;

            case 8:
                metade1metade2(arrayOfValues);
                break;
            case 9:
                minimoMultiploComum(arrayOfValues);
                break;
            case 10:
                MultiplyArray(arrayOfValues, arrayMulti);
                break;

            case 11:
                TranspostadaMatriz(arrayMulti);
                break;
            case 12:
                return -1;
                break;

            default:
                
                break;
        }

    }
    }