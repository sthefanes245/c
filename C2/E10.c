/*Fa�a um programa em C que leia tr�s n�meros inteiros e imprima os tr�s em
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
