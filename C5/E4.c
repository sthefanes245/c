/*Construa um programa que armazene dados em uma matriz de ordem 4 e imprima: Todos os elementos com números ímpares */
#include <stdio.h>

int main()
{
    int mat[4][4];
    int i, j;

    printf("Preencha a matriz: \n");
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nElementos impares: \n");
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
           if(mat[i][j] % 2 != 0)
                printf("%d \n", mat[i][j]);
        }
    }
    return 0;
}
