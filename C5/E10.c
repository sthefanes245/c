/*Construa um programa em C que leia valores inteiros para a matriz A3 x 5. Gerar e
imprimir a matriz SOMACOLUNA, em que cada elemento é a soma dos elementos
de uma coluna da matriz A. Faça o trecho que gera a matriz separado da entrada
e da saída */
#include <stdio.h>

int main()
{
    int A[3][5];
    int soma[5];
    int i, j;

    for(i = 0; i < 5; i++)
    {
        soma[i] = 0;
    }
    printf("Preencha a matriz: \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 5; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    // mostrando a matriz
     for(i = 0; i < 3; i++)
    {
        printf("\n");
        for(j = 0; j < 5; j++)
        {
            printf("%d ",A[i][j]);
        }
    }

    printf("\n");

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 3; j++)
        {
            soma[i] += A[j][i];
        }
    }

    for(i = 0; i < 5; i++)
    printf("%d \n", soma[i]);

    return 0;
}
