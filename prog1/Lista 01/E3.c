/*Fa�a um algoritmo que leia um n�mero inteiro e mostre uma mensagem indicando se este n�mero � par
ou �mpar, e se � positivo ou negativo */
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
