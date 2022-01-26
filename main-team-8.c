#include<stdio.h>
#include <string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//files on directory
//#include "functions-team-8.c"
//#include "functions-team-8.h"

#define N 4
#define PI 3.141592654


    int main(int argc, char *argv[])
{
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
    //int arrayOfValues[N];

    //escreverVetor(arrayOfValues);
    //mostrarVetor(arrayOfValues);
    //printf("\n");
    //coseno2half(arrayOfValues);
    //ordernarCrescente(arrayOfValues);
    //mostrarVetor(arrayOfValues);
    //iDivisivel3(arrayOfValues);

   //metade1metade2(arrayOfValues);

    //mostrarVetor(arrayOfValues);


    printf("-------------------Menu do trabalho de Labrotorio de programacao----------------");
//parte 1
    printf("Escolha a opcao que pretende\n");
    printf("1 -> Devolucao do vetor ordenado\n");
    printf("2 -> Soma da 1 metade do vetor com a 2 metade\n");
    printf("3 -> criacao de uma matriz com a permtacao da matriz original\n");
    printf("4 -> Calculo do coseno da 2 metade dos elementos do vetor\n");
    printf("5 -> Retorno de um elemento aleatorio do vetor\n");
    printf("6 -> Devlucao os valores em posicoes multiplas de 3\n");
    printf("7 -> ajuda o utilizador\n");
    printf("8-> exit");
    printf("test");
    for (int i = 0; i < 20; i++)
    {
    int result = (rand() % N);
    printf("----%d-----", result);
    }
}


