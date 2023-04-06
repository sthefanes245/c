/* Faça um programa que leia a idade de uma pessoa e informe:
• Se é maior de idade
• Se é menor de idade
• Se é maior de 65 anos*/
#include <stdio.h>

int main()
{
    int idade;

    printf("Informe sua idade: \n");
    scanf("%d", &idade);

    if(idade >= 65)
    {
        printf("Maior de 65 anos\n");
    }
    else if(idade >= 18)
    {
        printf("Maior de idade \n");
    }
    else
    {
        printf("Menor de idade \n");
    }
    return 0;
}
