/*A confederação brasileira de natação irá promover eliminatórias para o próximo
mundial. Faça um programa em C que receba a idade de um nadador e imprima
a sua categoria segundo a tabela a seguir:
Categoria Idade
Infantil A 5 - 7 anos
Infantil B 8 - 10 anos
Juvenil A 11 - 13 anos
Juvenil B 14 - 17 anos
Sênior maiores de 18 anos*/
#include <stdio.h>

int main()
{
    int idade;

    printf("Informe a idade do nadador: \n");
    scanf("%d", &idade);

    if(idade <= 4)
    {
        printf("Idade nao permitida \n");
    }
    else
    {
        if(idade <= 7)
        {
            printf("Infantil A\n");
        }
        else if(idade <= 10)
        {
            printf("Infantil B\n");
        }
        else if(idade <= 13)
        {
            printf("Juvenil A\n");
        }
        else if(idade <= 17)
        {
            printf("Juvenil B\n");
        }
        else
        {
            printf("Senior\n");
        }
    }
    return 0;
}
