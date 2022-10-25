/*Faça um algoritmo que leia um número inteiro e mostre uma mensagem indicando se este número é par
ou ímpar, e se é positivo ou negativo */
#include <stdio.h>

int main()
{
    int n;

    printf("Informe um numero inteiro: \n");
    scanf("%d", &n);

    if(n % 2 == 0)
    {
        if(n>0)
        {
            printf("O numero eh par e positivo \n");
        }
        else
        {
            printf("O numero eh par e negativo \n");
        }
    }
    else
    {
        if(n>0)
        {
            printf("O numero eh impar e positivo \n");
        }
        else
        {
            printf("O numero eh impar e negativo \n");
        }
    }
    return 0;
}
