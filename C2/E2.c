/*Faça um programa em C que leia dois valores inteiros e efetue a adição. Caso o
valor somado seja maior que 20, este deverá ser apresentado somando-se a ele
mais 8, caso o valor somado seja menor ou igual a 20, este deverá ser apresentado
subtraindo-se 5 */
#include <stdio.h>

int main()
{
    int n1, n2, soma;

    printf("INFORME DOIS VALORES INTEIROS: \n");
    scanf("%d %d", &n1, &n2);

    soma = n1 + n2;
    if(soma > 20)
    {
        printf("%d \n", soma+8);
    }
    else
    {
        printf("%d \n", soma-5);
    }
    return 0;
}
