#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define N 5
#define M 5
#define PI 3.141592654

int checkInputValues(char numbers[2])
{
    int result;
    for (int i = 0; i < 2; i++)
    {
        if(numbers[0] == '8' && numbers[1] == '\0'){
            return 8;
        }else if(numbers[0]== '9' && numbers[1] == '\0'){
            return 9;
        }
        if (isdigit(numbers[i]))
        {
            // printf("var1 = |%c| is a digit\n", numbers[i]);
        }
        else
        {
            // printf("var1 = |%c| is not a digit\n", numbers[i]);
            return -1;
        }
    }
    // change the type of variable
    result = atoi(numbers);

    printf("%d", result);

    if (result < 8 || result > 29)
    {
        // printf("the value is not correct \n");
        return -2;
        // ask again
    }
    else
    {
        // printf("the value is correct \n");
        return result;
    }
    return result;
}

void escreverVetor(int arrayOfValues[N])
{

    for (int i = 0; i < N; i++)
    {
        printf("-------- %d ---------", i);
        char input[2];
        printf("introduza um numero\n");
        scanf("%2s", input);

        int valueFromCheck = checkInputValues(input);

        switch (valueFromCheck)
        {
        case -1:
            printf("the value is not a dIgit \n");
            i--;
            continue;
        case -2:
            printf("the value is not correct \n");
            i--;
            continue;
        default:
            printf("the value is correct \n");
            // add to total array
            arrayOfValues[i] = valueFromCheck;
            continue;
        }
    }
}

void mostrarVetor(int arrayOfValues[N])
{
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arrayOfValues[i]);
    }
    printf("\n");
}

// Bubble sort
void ordernarCrescente(int arrayOfValues[N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (arrayOfValues[i] < arrayOfValues[j])
            {
                int kepper = arrayOfValues[i];
                arrayOfValues[i] = arrayOfValues[j];
                arrayOfValues[j] = kepper;
            }
        }
    }
    mostrarVetor(arrayOfValues);
}

    void SomaArray(int arrayOfValues[N])
    {

        int sumarray[(N / 2)];
        for (int i = 0, j = N / 2; i < N / 2; i++, j++)
        {
            if(N % 2 == 0){
            sumarray[i] = arrayOfValues[i] + arrayOfValues[j];
            printf("soma %d entre %d e %d\n", sumarray[i], arrayOfValues[i], arrayOfValues[j]);
            }else{
                //quando o numero é impar o numero que fica no meio é ignorado
                sumarray[i] = arrayOfValues[i] + arrayOfValues[j+1];
                printf("soma %d entre %d e %d\n", sumarray[i], arrayOfValues[i], arrayOfValues[j+1]);
            }
        }
        printf("-__-__--_\n");
        for (int i = 0; i < N/2; i++)
        {
            printf("%d ", sumarray[i]);
        }
        printf("\n");
}
// Fisher–Yates shuffle
void premutacaoElementos(int arrayOfValues[N])
{
    int matriz[N][N];
    int j = 0;
    int temporario = 0;
    ; // create local variables to hold values for shuffle

    for (int z = 0; z < N; z++)
    {

        for (int i = N - 1; i > 0; i--)
        {                           // for loop to shuffle
            j = (rand() % (i + 1)); // randomise j for shuffle with Fisher Yates
            temporario = arrayOfValues[j];
            arrayOfValues[j] = arrayOfValues[i];
            arrayOfValues[i] = temporario;
        }
        for (int i = 0; i < N; i++)
        {
            matriz[z][i] = arrayOfValues[i];
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    }
void randomNumber(int arrayOfValues[N])
{
    int result = arrayOfValues[(rand() % N)];
    printf("----%d-----", result);
}

void coseno2half(int arrayOfValues[N])
{

    int half = N / 2;
    double arrayCos[(N / 2)];
    for (int i = 0; i < half; i++)
    {
        double convert = (arrayOfValues[half + i] * PI) / 180;
        double result = cos(convert);
        arrayCos[i] = result;
        printf("the number is %d and the cos is %f", arrayOfValues[half + i], arrayCos[i]);
    }
}

void iDivisivel3(int arrayOfValues[N])
{
    for (int i = 0; i < N; i++)
    {
        if ((i % 3) == 0)
        {
            printf(" i--> %d---n-->%d----\n", i, arrayOfValues[i]);
        }
    }
}

void metade1metade2(int arrayOfValues[N])
{
    for (int i = 0; i < N; i++)
    {
        printf("-------- %d ---------", i);
        char input[2];
        printf("introduza um numero\n");
        scanf("%2s", input);

        int valueFromCheck = checkInputValues(input);

        switch (valueFromCheck)
        {
        case -1:
            printf("the value is not a dIgit \n");
            i--;
            continue;
        case -2:
            printf("the value is not correct \n");
            i--;
            continue;
        default:
            printf("the value is correct \n");
            // add to total array
            if (N / 2 <= i)
            {
                arrayOfValues[i] = valueFromCheck;
            }
            continue;
        }
    }
}

void minimoMultiploComum(int arrayofValues[N])
{
    int a = 0, b = 0;
    int temp, a1, b1;

    for (int i = 0; i < N; i++)
    {
        a = arrayofValues[i];
        b = arrayofValues[i + 1];
        a1 = a, b1 = b;
        while (b1 != 0)
        {
            temp = b1;
            b1 = a1 % b1;
            a1 = temp;
        }
        if (i == N - 1)
        {
            //impar numero nao fazer nada
            //printf("(%d)", a);
        }
        else
        {
            printf("entre o numero %d e o numero %d = o minimo multiplo comum é %d\n", a, b, (a * b) / a1);
        }
    }
}

void MultiplyArray(int arrayofValues[N], int arrayMulti[M][M]){
    
    int rArray[1][M];
    
    for (int i = 0; i < M; i++)
    {
        rArray[0][i] = (rand() % 22) + 8;
    }
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            arrayMulti[i][j] = arrayofValues[i] * rArray[0][j];
        }
    }
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d ", arrayMulti[i][j]);
        }
        printf(" \n");
    }
}

void TranspostadaMatriz(int arrayMulti[M][M]){
    int arrayT[M][M];
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            arrayT[j][i] = arrayMulti[i][j];
        }
    }
    printf("array T\n");
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d ", arrayT[i][j]);
        }
        printf(" \n");
    }
}

void menu_principal()
{
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
    printf("╠══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╣\n");
    printf("║- [8] Leitura de um novo vetor,que mistura metade do primeiro e do segundo                                            ║\n");
    printf("║- [9] Cálculo do mínimo múltiplo comum de cada dois números seguidos do vetor                                         ║\n");
    printf("║- [10] Geração de um vetor 1x20 aleatório, cálculo e devolução da matriz 20x20 com o novo vetor lido                  ║\n");
    printf("║- [11] Cálculo e apresentação da matriz transposta referida no ponto anterior                                         ║\n");
    printf("║- [12] Sair                                                                                                           ║\n");
    printf("╚══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝\n");
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