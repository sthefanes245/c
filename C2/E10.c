/*Faça um programa em C que leia três números inteiros e imprima os três em
ordem crescente. */
#include <stdio.h>

int main()
{
    int n1, n2, n3, aux;

    printf("Informe tres numeros: \n");
    scanf("%d %d %d", &n1, &n2, &n3);

    if(n1 < n2 && n1 < n3)
    {
        if(n2 < n3)
        {
            printf("%d %d %d \n", n1, n2, n3);
        }
        else
        {
            printf("%d %d %d \n", n1, n3, n2);
        }

    }
    else if(n2 < n1 && n2 < n3)
    {
        if(n1 < n3)
        {
            printf("%d %d %d \n", n2, n1, n3);
        }
        else
        {
            printf("%d %d %d \n", n2, n3, n1);
        }
    }
    else
    {
        if(n3 < n2 && n2 < n1)
        {
             printf("%d %d %d \n", n3, n2, n1);
        }
        else
        {
             printf("%d %d %d \n", n3, n1, n2);
        }
    }

    return 0;
}
