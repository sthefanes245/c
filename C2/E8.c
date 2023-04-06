/*Faça um programa que leia um número e imprima uma das mensagens: "Maior
do que 20", "Igual a 20"ou "Menor do que 20". */
#include <stdio.h>

int main()
{
    int n;

    printf("Informe um numero \n");
    scanf("%d", &n);

    if(n > 20)
    {
        printf("Maior do que 20");
    }
    else if(n == 20)
    {
        printf("Igual a 20");
    }
    else
    {
        printf("Menor do que 20");
    }
    return 0;
}
