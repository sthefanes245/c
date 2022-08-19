/*Elabore dois algoritmos, um utilizando seleções compostas e outro utilizando seleções múltiplas) que
dada a idade de um nadador classifique-o em uma das seguintes categorias:
a. Infantil A = 5 a 7 anos
b. Infantil B = 8 a 11 anos
c. Juvenil A = 12 a 13 anos
d. Juvenil B = 14 a 17 anos
e. Adultos = Maiores de 18 anos */
#include <stdio.h>

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