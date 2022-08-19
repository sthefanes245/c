/*Faça um algoritmo que leia um número inteiro e mostre uma mensagem indicando se este número é par
ou ímpar, e se é positivo ou negativo */
#include <stdio.h>

int main()
{
    int num;

    printf("Informe um numero inteiro: \n");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("Par \n");
        if (num > 0)
        {
            printf("Positivo \n");
        }
        else
        {
            printf("Negativo \n");
        }
    }

    else
    {
        printf("Impar \n");
        if (num > 0)
        {
            printf("Positivo \n");
        }
        else
        {
            printf("Negativo \n");
        }
    }
    return 0;
}