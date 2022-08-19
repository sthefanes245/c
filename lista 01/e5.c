/*Elabore um algoritmo em pseudolinguagem (utilizando os conceitos vistos nesse capítulo) para ler um
número e verificar se ele é par ou ímpar. Quando for par armazenar esse valor em P e quando for ímpar
armazená-lo em I. Exibir P e I no final do processamento.
 */
#include <stdio.h>

int main()
{
    int num, P=0, I=0;

    printf("Informe um numero \n");
    scanf("%d", &num);

    if(num % 2 == 0)
    {
        P = num;
    }
    else
    {
        I = num;
    }
    printf("P=%d I=%d \n", P, I);
    return 0;
}