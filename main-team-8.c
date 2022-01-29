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
    while (op < 1 || op > 10)
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
    printf("╔═════════════════════════════════════════════════════════════╗\n");
    printf("╠═══════════════════════  AJUDA  ═════════════════════════════╣\n");
    printf("║ ║\n");
    printf("║ ║\n");
    printf("║ ║\n");
    printf("║ ║\n");
    printf("║ ║\n");
    printf("║ ║\n");
    printf("║ ║\n");
    printf("║ ║\n");
    printf("║ ║\n");
    printf("║ ║\n");
    printf("║ ║\n");
    printf("║ ║\n");
    printf("╠═════════════════════════════════════════════════════════════╣\n");
    printf("║║\n");
    printf("╚═════════════════════════════════════════════════════════════╝\n");
}

void menu_ajuda()
{
    printf("╔══════════════════════════════════════════════════════════════════╗\n");
    printf("╠═══════════════════════════  AJUDA  ══════════════════════════════╣\n");
    printf("║ ║\n");
    printf("║ ║\n");
    printf("║ ║\n");
    printf("║ ║\n");
    printf("║ ║\n");
    printf("║ ║\n");
    printf("║ ║\n");
    printf("║ ║\n");
    printf("╠══════════════════════════════════════════════════════════════════╣\n");
    printf("╠══════════════════════  FUNÇÕES ADICIONAIS  ══════════════════════╣\n");
    printf("║ ║\n");
    printf("║ ║\n");
    printf("║ ║\n");
    printf("║ ║\n");
    printf("║ ║\n");
    printf("║ ║\n");
    printf("╚══════════════════════════════════════════════════════════════════╝\n");
}

void premute(char arrayofValues[4]){
    for (int i = 0; i < 4; i++)
    {
        
    }
}

    int main(int argc, char *argv[])
{
    int flag = 0;
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
    //nao esta ler o 8 e 9 fix this
    //premutacao nao esta a funcionar
    //metade1metade2 resolver nao alterear o array original
    int arrayOfValues[N];
    int arrayMulti[M][M];
    escreverVetor(arrayOfValues);
    mostrarVetor(arrayOfValues);
    //minimoMultiploComum(arrayOfValues);
    MultiplyArray(arrayOfValues, arrayMulti);
    TranspostadaMatriz(arrayMulti);

    //randomArray(arrayOfValues, arrayMulti);
    //coseno2half(arrayOfValues);
    //ordernarCrescente(arrayOfValues);
    //mostrarVetor(arrayOfValues);
    //iDivisivel3(arrayOfValues);

   //metade1metade2(arrayOfValues);

    //mostrarVetor(arrayOfValues);

    /*
        int  op_menu_principal = menu_principal();

        while (flag)
        {
            printf("\n");
            switch (op_menu_principal)
            {
            case 1:
                printf("Escolheu a opção [1]\n");
                ordernarCrescente(arrayOfValues);
                continue;

            case 2:
                printf("Você escolheu a opção [2]\n");
                //SomaArray(arrayOfValues);
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

                //verificar = 0;

                printf("Escolheu a opção [8]\n");
                printf("\n");
                printf("O vetor introduzido foi: \n");
                printf("\n");

                for (int i = 0; i < 18; i++)
                {
                  //  printf("%d ", vetor[i]);
                }
                printf("\n");
                break;

            case 9:
                //Menu Secundário/

                switch (menu_secundario())
                {
                case 1:

                    printf("Escolheu a opção [1]\n");

                    break;
                case 2:

                    printf("Escolheu a opção [2]\n");
                    printf("\n");

                    break;
                case 3:

                    printf("Escolheu a opção [3]\n");

                    break;
                case 4:

                    printf("Escolheu a opção [4]\n");
                    break;
                case 5:

                    break;
          }
          break;
        }
          cleanInput();
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

      op_menu_secundario = menu_secundario();
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

      op_menu_principal = menu_principal();
    }
  }

  return 0;
}
}
*/
    }
