/*Fa�a um programa que leia um n�mero e informe se ele � ou n�o divis�vel por 5. */
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
