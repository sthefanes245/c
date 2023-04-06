/*Faça um programa que leia os elementos de uma matriz do tipo inteiro com
tamanho 3 X 3 e imprima os elementos multiplicando por 2 */
#include <stdio.h>

int main()
{
    int mat[3][3], calc[3][3];
    int i, j;

    printf("Preencha a matriz \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &mat[i][j]);

            calc[i][j] = mat[i][j] * 2;
        }
    }

    printf("\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", calc[i][j]);
        }
        printf("\n");
    }
    return 0;
}
