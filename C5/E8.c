/*Faça um programa que leia uma matriz 4 X 5 de inteiros, calcule e imprima a
soma de todos os seus elementos.
 */
#include <stdio.h>

int main()
{
    int mat[4][5], soma=0;
    int i, j;

    printf("Preencha a matriz: \n");
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 5; j++)
        {
            scanf("%d",&mat[i][j]);

            soma += mat[i][j];
        }
    }

    printf("A soma dos elementos da matriz = %d \n", soma);

    return 0;
}
