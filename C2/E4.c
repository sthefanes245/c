/*Faça um programa que leia um número e informe se ele é ou não divisível por 5. */
#include <stdio.h>

int main()
{
    int n;

    printf("Informe um numero: \n");
    scanf("%d", &n);

    if(n % 5 == 0)
    {
        printf("Eh divisivel por 5 \n");
    }
    else
    {
        printf("Nao eh divisivel por 5 \n");
    }
    return 0;
}
