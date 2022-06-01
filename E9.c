#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;

    printf("Informe a idade do nadador:\n");
    scanf("%d", &idade);

    if(idade < 5)
    {
        printf("O nadador nao esta em nenhuma das categorias");
    }
    else if(idade >= 5 && idade <= 7)
    {
        printf("Infantil A \n");
    }
    else if(idade >= 8 && idade <= 11)
    {
        printf("Infantil B \n");
    }
    else if(idade >= 12 && idade <= 13)
    {
        printf("Juvenial A \n");
    }
    else if(idade >= 14 && idade <= 17)
    {
        printf("Juvenil B \n");
    }
    else
    {
        printf("Adulto\n");
    }
    return 0;
}
