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

int menu_principal()
{
    int op;
    printf("╔══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗\n");
    printf("║                                                       MENU                                                           ║\n");
    printf("╠══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╣\n");
    printf("║- [1] Devolução do vetor ordenado por ordem crescente                                                                 ║\n");
    printf("║- [2] Cálculo da soma da primeira metade dos elementos no vetor com os da segunda metade                              ║\n");
    printf("║- [3] Construção de uma matriz 20x20, em que as linhas sãocomposta pelo vetor lido por permutações dos seus valores   ║\n");
    printf("║- [4] Cálculo do coseno (cos) da segunda metade dos elementos no vetor                                                ║\n");
    printf("║- [5] Retorno de um elemento aleatório desse vetor                                                                    ║\n");
    printf("║- [6] Devolução dos valores em posições múltiplas de três do vetor                                                    ║\n");
    printf("║- [7] Menu de ajuda                                                                                                   ║\n");
    printf("║- [8] Mostrar outras funções                                                                                          ║\n");
    printf("║- [9] Sair                                                                                                            ║\n");
    printf("╚══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝\n");
    printf("Seleciona uma opção:\n");
    scanf("%d", &op);
    while (op <= 1 && op > 10)
    {
        printf("Opção inválida,digite uma opção válida:\n");
        scanf("%d", &op);
    }
    return op;
}

int menu_secundario()
{
    int op2;
    printf("╔═════════════════════════════════════════════════════════════════════════════════════════════════════╗\n");
    printf("║                                                 MENU                                                ║\n");
    printf("╠═════════════════════════════════════════════════════════════════════════════════════════════════════╣\n");
    printf("║- [1] Leitura de um novo vetor,que mistura metade do primeiro e do segundo                           ║\n");
    printf("║- [2] Cálculo do mínimo múltiplo comum de cada dois números seguidos do vetor                        ║\n");
    printf("║- [3] Geração de um vetor 1x20 aleatório, cálculo e devolução da matriz 20x20 com o novo vetor lido  ║\n");
    printf("║- [4] Cálculo e apresentação da matriz transposta referida no ponto anterior                         ║\n");
    printf("║- [5] Regressar ao menu principal                                                                    ║\n");
    printf("╚═════════════════════════════════════════════════════════════════════════════════════════════════════╝\n");
    printf("Seleciona uma opção:\n");
    scanf("%d", &op2);
    while (op2 < 1 && op2 > 5)
    {
        printf("Opção inválida,digite uma opção válida:\n");
        scanf("%d", &op2);
    }
    return op2;
}

void help_flag()
{
    printf("╔═════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗\n");
    printf("╠════════════════════════════════════════════════════════════════  AJUDA  ════════════════════════════════════════════════════════════╣\n");
    printf("║- [1]O objetivo deste trabalho  é  implementar  um programa  para  calcular algumas estatísticas                                     ║\n");
    printf("║- [2] As operações são realizadas entre 20 números compreendidos entre 8 e 29. Após se verificar a operação retorna o menu principal ║\n");
    printf("╠═════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╣\n");
    printf("║ Existe um menu de ajuda extra na opção 7 do menu principal                                                                          ║\n");
    printf("╚═════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝\n");
}

void menu_ajuda()
{
    printf("╔═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗\n");
    printf("╠═════════════════════════════════════════════════════  AJUDA  ═══════════════════════════════════════════════════════╣\n");
    printf("║- [1]Devolução do vetor ordenado por ordem crescente                                                               ║\n");
    printf("║- [2] Cálculo da soma da primeira metade dos elementos no vetor com os da segunda metade                           ║\n");
    printf("║- [3] Construção de uma matriz 20x20, em que as linhas sãocomposta pelo vetor lido por permutações dos seus valores║\n");
    printf("║- [4] Cálculo do coseno (cos) da segunda metade dos elementos no vetor                                             ║\n");
    printf("║- [5] Retorno de um elemento aleatório desse vetor                                                                 ║\n");
    printf("║- [6] Devolução dos valores em posições múltiplas de três do vetor                                                 ║\n");
    printf("║- [7] Funções adicionais                                                                                           ║\n");
    printf("╠═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════╣\n");
    printf("╠═══════════════════════════════════════════════  FUNÇÕES ADICIONAIS  ═══════════════════════════════════════════════╣\n");
    printf("║- [1] Mistura de metade do primeiro vetor e do segundo                                                             ║\n");
    printf("║- [2] Cálucula o m.m.c de cada dois números seguidos do vetor                                                      ║\n");
    printf("║- [3] Gera um vetor 1x20 aleatório, e devolve a matriz 20x20 com o novo vetor                                      ║\n");
    printf("║- [4]Cálculo e apresentação da matriz transposta referida no ponto anterior                                        ║\n");
    printf("╚═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝\n");
}

void cleanConsole()
{
    system("clear");
}

void premute(char arrayofValues[4]){
    for (int i = 0; i < 4; i++)
    {
        
    }
}

    int main(int argc, char *argv[])
{
    int men1_menu_principal;
    int men2_menu_secundario;
    int verificar = 0;
    char av[5], *pos;
    int flag = 0;
    int enter = 1;
    //resolver o rand()
    srand(time(NULL));
    for (int i = 0; i < argc; i++)
    {
        printf("Argument: %d: %s\n", i, argv[i]);

        if (!(strcmp(argv[i], "--help"))){
                printf("thats it");
                //here show added help
            }
    }
    int arrayOfValues[N];
    int arrayMulti[M][M];
    escreverVetor(arrayOfValues);
    mostrarVetor(arrayOfValues);
    //MultiplyArray(arrayOfValues, arrayMulti);
    //TranspostadaMatriz(arrayMulti);

    premutacaoElementos(arrayOfValues);

    men1_menu_principal = menu_principal();

    while (men1_menu_principal != 10)
    {
        printf("\n");
        switch (men1_menu_principal)
        {
        case 1:

            cleanConsole();
            verificar = 0;

            printf("\n");
            printf("Você escolheu a opção [1]\n");
            printf("\n");

            //printf("Por ordem crescente, o vetor é:  %d\n", Max_arr(vetor));

            break;

        case 2:

            cleanConsole();
            verificar = 0;

            printf("Você escolheu a opção [2]\n");
            printf("\n");

            break;

        case 3:

            cleanConsole();
            verificar = 0;

            printf("Você escolheu a opção [3]\n");
            printf("\n");

            break;

        case 4:

            cleanConsole();
            verificar = 0;

            printf("Você escolheu a opção [4]\n");
            printf("\n");

            //printf("o coseno (cos) da segunda metade dos elementos no vetor é:%d \n", soma_multi3(vetor));

            break;

        case 5:

            cleanConsole();
            verificar = 0;

            printf("Você escolheu a opção [5]\n");
            printf("\n");

            printf("um elemento aleatório do vetor é: \n");
            printf("\n");

            break;

        case 6:

            cleanConsole();
            verificar = 0;

            printf("Você escolheu a opção [6]\n");
            printf("\n");

            break;
        case 7:
            cleanConsole();
            printf("Você escolheu a opção [7]\n");
            printf("\n");

            printf("Falta fazer\n");
            break;
        case 8:
            cleanConsole();
            verificar = 0;

            printf("Você escolheu a opção [8]\n");
            printf("\n");
            printf("O vetor introduzido foi: \n");
            printf("\n");

            for (int i = 0; i < 18; i++)
            {

            }
            printf("\n");
            break;

        case 9:
            /**Menu Secundário*/

            cleanConsole();
            verificar = 1;

            men2_menu_secundario = menu_secundario();

            switch (men2_menu_secundario)
            {
            case 1:
                cleanConsole();
                verificar = 1;

                printf("Você escolheu a opção [1]\n");
                printf("\n");

                cleanConsole();
                printf("\n");
                //printf("A mistura da metade do primeiro e do segundo é: %d", produto_interno(vetor, vetor_novo));
                printf("\n");

                break;
            case 2:
                cleanConsole();
                verificar = 1;

                printf("Você escolheu a opção [2]\n");
                printf("\n");

                break;
            case 3:
                cleanConsole();

                break;
            case 5:
                cleanConsole();

                break;
            }

            printf("\n");

            //cleanInput();
            if (verificar == 1)
            {
                do
                {
                    printf("Pressione a tecla ENTER para avançar");
                    fgets(av, 5, stdin);
                    pos = strchr(av, '\n');
                    *pos = '\0';

                    if ((strcmp(av, "\0") == 0))
                    {
                        enter = 1;
                        cleanConsole();
                    }
                    else
                        enter = 0;
                } while (enter == 0);

                men2_menu_secundario = menu_secundario();
            }

            else
            {
                do
                {
                    printf("Pressione a tecla ENTER para avançar");
                    fgets(av, 5, stdin);
                    pos = strchr(av, '\n');
                    *pos = '\0';

                    if ((strcmp(av, "\0") == 0))
                    {
                        enter = 1;
                        cleanConsole();
                    }
                    else
                        enter = 0;
                } while (enter == 0);

                men1_menu_principal = menu_principal();
            }
        }

        return 0;
    }
}