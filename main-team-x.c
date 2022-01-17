#include<stdio.h>
#include <string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//files on directory
//#include "functions-team-x.c"
//#include "functions-team-x.h"

#define N 4
#define PI 3.141592654

int checkInputValues(char numbers[2]){
    int result;
    for (int i = 0; i < 2; i++)
    {
        if (isdigit(numbers[i]))
        {
            //printf("var1 = |%c| is a digit\n", numbers[i]);
        }
        else
        {
            //printf("var1 = |%c| is not a digit\n", numbers[i]);
            return -1;
        }
    }
    // change the type of variable
    result = atoi(numbers);

    printf("%d", result);

    if (result < 8 || result > 29)
    {
        //printf("the value is not correct \n");
        return -2;
        // ask again
    }
    else
    {
        //printf("the value is correct \n");
        return result;
    }
    return result;

}

void escreverVetor(int arrayOfValues[N]){

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
}

//Bubble sort
void ordernarCrescente(int arrayOfValues[N]){
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (arrayOfValues[i] > arrayOfValues[j])
            {
                int kepper = arrayOfValues[i];
                arrayOfValues[i] = arrayOfValues[j];
                arrayOfValues[j] = kepper;
            }
        }
    }
}

void SomaArray(){}


void premutacaoElementos(int arrayOfValues[N]){
    int matriz[N][N];
    int number = 0;

    int arrayElements[N];
    for (int i = 0; i < N; i++)
    {

        // alterar o valor 10 para o tamanho do vetor
        matriz[i][0] = arrayOfValues[i];

        matriz[i][1] = arrayOfValues[rand() % N];
    }
    // only to test if it is working delete after
    for (int i = 0; i < N; i++)
    {

        printf("the array number %d { %d, %d } \n", i, matriz[i][0], matriz[i][1]);
    }
}

void randomNumber (int arrayOfValues[N]){
    int result = arrayOfValues[(rand() % N)];
    printf("----%d-----", result);
}


void coseno2half (int arrayOfValues[N]){

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


void iDivisivel3(int arrayOfValues[N]){
    for (int i = 0; i < N; i++)
    {
        if ((i % 3) == 0)
        {
            printf(" i--> %d---n-->%d----\n", i, arrayOfValues[i]);
        }
    }
}

void metade1metade2(int arrayOfValues[N]){
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
    int arrayOfValues[N];

    escreverVetor(arrayOfValues);
    mostrarVetor(arrayOfValues);
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
    for (int i = 0; i < 20; i++)
    {
    int result = (rand() % N);
    printf("----%d-----", result);
    }
}


