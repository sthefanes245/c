/*Fa�a um programa que leia um n�mero inteiro entre 1 e 12 e escreva o m�s
correspondente. Caso o usu�rio digite um n�mero fora desse intervalo, dever�
aparecer uma mensagem informando que n�o existe m�s com este n�mero.
Utilize o switch para este problema.*/
#include <stdio.h>

int main()
{
    int n;

    printf("Informe um numero inteiro entre 1 e 12\n");
    scanf("%d", &n);

    switch(n)
    {
        case 1:
            printf("Janeiro");
        break;

        case 2:
            printf("Fevereiro");
        break;

        case 3:
            printf("Marco");
        break;

        case 4:
            printf("Abril");
        break;

        case 5:
            printf("Maio");
        break;

        case 6:
            printf("Junho");
        break;

        case 7:
            printf("Julho");
        break;

        case 8:
            printf("Agosto");
        break;

        case 9:
            printf("Setembro");
        break;

        case 10:
            printf("Outubro");
        break;

        case 11:
            printf("Novembro");
        break;

        case 12:
            printf("Dezembro");
        break;

        default:
            printf("mes invalido \n");
    }
    return 0;
}
