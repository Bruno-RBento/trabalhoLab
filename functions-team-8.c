/**
 * @autores:
 * Nome:Andre Ramos                 Número de Aluno:47816
 * Nome:Bruno Bento                 Número de Aluno:47583
 * Nome:Joel Tapia                  Número de Aluno:47275
 * Nome:Veronica                    Número de Aluno:Z638
 **/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define N 20
#define M 20
#define PI 3.141592654

/**
 * @brief Verifica os números ou dígitos que são introduzidos na array "números".
 * Se o dígito introduzido for 8 ou 9 então retornará o mesmo valor, se for um número diferente a função continuará 
 * e se não for um número então retornará -1.
 * Em caso de continuação, a função irá transformar a função num inteiro e imprimi-lo no ecrã.
 * Se o número obtido for inferior a 8 ou superior a 29, então -2 será devolvido, caso contrário o resultado será devolvido.
 * @param numbers É o array a ser verificada.
 * @param result Número transformado a ser avaliado
 * @return Dependendo do caso, o return sera: \n
 *   8 = Se o número de matriz for 8 \n
 *   9 = Se o número de matriz for 9 \n
 *  -1 = Se o valor não for um dígito \n
 *  -2 = Se o "result" for inferior a 8 e superior a 29
 */

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
        if (!isdigit(numbers[i]))
        {
            return -1;
        }
    }
    // muda o tipo da variavel de char para int 
    result = atoi(numbers);

    printf("%d", result);

    if (result < 8 || result > 29)
    {
        return -2;
    }
    else
    {
        return result;
    }
    return result;
}
/**
 * @brief Esta função permite escrever para o array "arrayOfValues" 
 * @details Permite a introdução de um dígito numa array auxiliar chamada "input", 
 * esta array será confirmada chamando à função "checkInputValues". \n
 * É criado um novo parâmetro chamado "valueFromCheck" que terá os retornos da função anterior, 
 * caso o dígito não esteja correcto voltará ao início, caso esteja correcto o valor será colocado em arrayOfValues.
 * 
 * @param arrayOfValues Este é o array onde todos os dígitos correctos são introduzidos.
 * @arg Input: É o array auxiliar.
 * @arg valueFromCheck: Variável a ser utilizada para verificar os dígitos.
 */
void escreverVetor(int arrayOfValues[N])
{
    for (int i = 0; i < N; i++)
    {
        printf("Coloque um valor entre 8 e 29\n");
        printf("╔══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗\n");
        printf("║                                                       Vai ficar na posiçao numero %d                                  ║\n",i);
        printf("╚══════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝\n");
        char input[2];
        printf("introduza um numero\n");
        scanf("%2s", input);

        int valueFromCheck = checkInputValues(input);

        switch (valueFromCheck)
        {
        case -1:
            printf("O valor introduzido nao é um numero \n");
            i--;
            continue;
        case -2:
            printf("O valor nao esta correto \n");
            i--;
            continue;
        default:
            printf("O valor esta correto continue \n");
            arrayOfValues[i] = valueFromCheck;
            continue;
        }
    }
}
/**
 * @brief Esta função atravessa o array e imprime-a. 
 * 
 * @param arrayOfValues Este é o conjunto a partir do qual serão retirados os valores para impressão
 */

void mostrarVetor(int arrayOfValues[N])
{
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arrayOfValues[i]);
    }
    printf("\n");
}

/**
 * @brief Esta função ordena, por ordem crescente, todos os valores da array. \n
 * Para o conseguir, verifica cada elemento da matriz para ver qual é maior e se é troca-os.
 * @param arrayOfValues É a matriz a ser comparada para a ordenação 
 */
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
    printf("o vetor odenado\n");
    mostrarVetor(arrayOfValues);
}
/**
 * @brief Esta função adiciona a primeira metade da função arrayOfValues com a outra metade, 
 * se o tamanho do array for uniforme, então a soma será normal, se for estranho, ignorará o elemento médio.
 * 
 * @param arrayOfValues Esta é a matriz que será somada.
 */
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
        for (int i = 0; i < N/2; i++)
        {
            printf("%d ", sumarray[i]);
        }
        printf("\n");
}
/**
 * @brief Esta função permuta os elementos do array passados como parâmetro, 
 * cria o array onde os novos valores serão introduzidos, 
 * e as variáveis j e temporárias para armazenar os valores. \n
 * A permutação ocorre no primeiro laço onde "j" recebe um valor aleatório, d
 * epois a variável temporária recebe o valor da posição "j" da matriz, 
 * depois esta mesma posição recebe o valor da posição "i", 
 * finalmente a posição "i" recebe o valor da posição "j". \n
 * No final basta colocar a nova matriz na matriz 20 x 20 e imprimi-la.
 * 
 * @param arrayOfValues É a matriz principal da qual será extraída para a matriz premutada.
 */
// Fisher–Yates shuffle
void premutacaoElementos(int arrayOfValues[N])
{
    int matriz[N][N];
    int j = 0;
    int temporario = 0;

    for (int z = 0; z < N; z++)
    {
        for (int i = N - 1; i > 0; i--)
        {
            j = (rand() % (i + 1));
            temporario = arrayOfValues[j];
            arrayOfValues[j] = arrayOfValues[i];
            arrayOfValues[i] = temporario;
        }
        //adicionar a matriz feita a matriz total 20/20
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
/**
 * @brief Esta função obtém um número aleatório para escolher uma posição aleatória da matriz e depois imprimi-la. 
 * 
 * @param arrayOfValues É a matriz da qual será obtido um valor aleatório.
 */
void randomNumber(int arrayOfValues[N])
{
    int result = arrayOfValues[(rand() % N)];
    printf(" o Numero aleatorio do vetor é %d\n", result);
}
/**
 * @brief Esta função toma o co-seno de metade do conjunto passado como parametro. \n
 * Cria uma nova matriz com apenas metade dos valores originais, 
 * depois converte-os em graus para finalmente obter o coseno de cada um dos valores originais. 
 * 
 * @param arrayOfValues É a matriz da qual será retirado o cosseno da metade de cada um dos elementos.
 */
void coseno2half(int arrayOfValues[N])
{

    int half = N / 2;
    double arrayCos[(N / 2)];
    for (int i = 0; i < half; i++)
    {
        double convert = (arrayOfValues[half + i] * PI) / 180;
        double result = cos(convert);
        arrayCos[i] = result;
        printf("O numero é %d e o cos é %f\n", arrayOfValues[half + i], arrayCos[i]);
    }
}
/**
 * @brief Percorre a array e verificar que números são múltiplos de 3.
 * 
 * @param arrayOfValues  É a array a ser atravessada
 */
void iDivisivel3(int arrayOfValues[N])
{
    for (int i = 0; i < N; i++)
    {
        if ((i % 3) == 0)
        {
            printf("A posiçao %d multipla de 3 tem o valor de %d\n", i, arrayOfValues[i]);
        }
    }
}
/**
 * @brief Esta função lê o array passado como parâmetro, 
 * depois verifica estes valores com a função "checkInputValues", 
 * no caso do valor não ser válido volta a pedir um novo número, 
 * se o valor estiver correcto então coloca estes dígitos na primeira metade do array,
 *  e se o valor não for válido volta a pedir um novo número, 
 * se o valor estiver correcto então coloca estes dígitos na primeira metade do array. 
 * 
 * @param arrayOfValues Esta é a matriz base na qual os novos valores serão introduzidos
 */

void metade1metade2(int arrayOfValues[N])
{
    for (int i = 0; i < N; i++)
    {
        char input[2];
        printf("Novo vetor, coloque um valor entre 8 e 29\n");
        printf("introduza um numero\n");
        scanf("%2s", input);

        int valueFromCheck = checkInputValues(input);

        switch (valueFromCheck)
        {
        case -1:
            printf("O valor introduzido nao é um numero \n");
            i--;
            continue;
        case -2:
            printf("O valor nao esta correto \n");
            i--;
            continue;
        default:
            printf("O valor esta correto continue \n");
            // add to total array
            if (N / 2 <= i)
            {
                arrayOfValues[i] = valueFromCheck;
            }
            continue;
        }
    }
    mostrarVetor(arrayOfValues);
}

/**
 * Function: minimoMultiploComum
 *
 * @brief Calcula o mínimo múltiplo comum de valores de 2 valores próximos no vetor, 
 * mostrando no ecrã os respetivos valores e o resultante mínimo múltiplo comum. \n
 * Criar as variáveis a, b e temp, a1, b1. estas serão usadas para armazenar os valores,
 *  com estas será obtido primeiro o divisor máximo comum que será armazenado em a1, 
 * depois este valor será usado para o mínimo comum multiplicando os valores de a e b e depois dividindo para a1.
 * 
 * @param arrayofValues vetor de valores pedidos ao utilizador
 * 
 */
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

        }
        else
        {
            printf("entre o numero %d e o numero %d = o minimo multiplo comum é %d\n", a, b, (a * b) / a1);
        }
    }
}
/**
 * Function: MultiplyArray
 *
 * @brief Multiplica o vetor inicial "arrayofValues[N]" por uma matriz multidimensional "rArray[1][M]" de valores aleatórios  gerados, criado uma matriz 20 por 20 que depois é mostrada no ecra.
 * @param  arrayofValues vetor de valores pedidos ao utilizador
 * @param arrayMulti é um array multidimensional onde se vai colocar o resultado da multiplicação
 * @arg rArray local onde vai ser guardado a matriz de valores aleatorios entre 8 e 29.
 *
 * */
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
/**
 * Function: TranspostadaMatriz
 *
 * @brief Transpoem a matriz multidimensional, mostrando no ecra
 *  @param arrayMulti: é um array multidimensional com o resultado da multiplicação na funcão MultiplyArray
 *  @arg arrayT: o array onde se vai colocar a matriz transposta
 * */
void TranspostadaMatriz(int arrayMulti[M][M]){
    int arrayT[M][M];
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            arrayT[j][i] = arrayMulti[i][j];
        }
    }
    printf("Matriz tranposta\n");
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d ", arrayT[i][j]);
        }
        printf(" \n");
    }
}
/**
 * Function: menu_principal
 *
 * @brief Mostra o menu principal, com as opções das funcionalidades.
 * */
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
    /**
     * Function: help_flag
     *
     *@brief Mostra uma pagina de ajuda, quando se adiciona --help no terminal
     * */
    void help_flag()
    {
        printf("╔═════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗\n");
        printf("╠════════════════════════════════════════════════════════════════  AJUDA  ════════════════════════════════════════════════════════════╣\n");
        printf("║- O objetivo deste trabalho  é  implementar  um programa  para  calcular algumas estatísticas                                     ║\n");
        printf("║- As operações são realizadas entre 20 números compreendidos entre 8 e 29. Após se verificar a operação retorna o menu principal ║\n");
        printf("╠═════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╣\n");
        printf("║ Existe um menu de ajuda extra na opção 7 do menu principal                                                                          ║\n");
        printf("╚═════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝\n");
}
/**
 * Function: menu_ajuda()
 *
 *@brief Mostra uma pagina de ajuda
 *
 * */
void menu_ajuda()
{
    printf("╔═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗\n");
    printf("╠═════════════════════════════════════════════════════  AJUDA  ═════════════════════════════════════════════════════╣\n");
    printf("║- [1] Devolução do vetor ordenado por ordem crescente                                                              ║\n");
    printf("║- [2] Cálculo da soma da primeira metade dos elementos no vetor com os da segunda metade                           ║\n");
    printf("║- [3] Construção de uma matriz 20x20, em que as linhas sãocomposta pelo vetor lido por permutações dos seus valores║\n");
    printf("║- [4] Cálculo do coseno (cos) da segunda metade dos elementos no vetor                                             ║\n");
    printf("║- [5] Retorno de um elemento aleatório desse vetor                                                                 ║\n");
    printf("║- [6] Devolução dos valores em posições múltiplas de três do vetor                                                 ║\n");
    printf("║- [7] Pagina de ajuda                                                                                              ║\n");
    printf("╠═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════╣\n");
    printf("╠═══════════════════════════════════════════════  FUNÇÕES ADICIONAIS  ══════════════════════════════════════════════╣\n");
    printf("║- [8] Mistura de metade do primeiro vetor e do segundo                                                             ║\n");
    printf("║- [9] Cálucula o m.m.c de cada dois números seguidos do vetor                                                      ║\n");
    printf("║- [10] Gera um vetor 1x20 aleatório, e devolve a matriz 20x20 com o novo vetor                                     ║\n");
    printf("║- [11] Cálculo e apresentação da matriz transposta referida no ponto anterior                                      ║\n");
    printf("║- [12] Saida do programa                                                                                           ║\n");
    printf("╚═══════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝\n");
}
