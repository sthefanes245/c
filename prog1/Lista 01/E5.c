/*Elabore um algoritmo em pseudolinguagem (utilizando os conceitos vistos nesse cap�tulo) para ler um
n�mero e verificar se ele � par ou �mpar. Quando for par armazenar esse valor em P e quando for �mpar
armazen�-lo em I. Exibir P e I no final do processamento.
 */
#include <stdio.h>

int main()
{
    int n, P=0, I=0;

    printf("Informe um numero inteiro: \n");
    scanf("%d", &n);

    if(n % 2 == 0)
    {
        P = n;
    }
    else
    {
        I = n;
    }
    printf("I=%d e P=%d \n", I, P);
    return 0;
}
