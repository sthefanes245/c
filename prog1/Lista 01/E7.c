/*Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um algoritmo que calcule seu
peso ideal, utilizando as seguintes fórmulas:
a. Para homens: (72.7*ALTURA) - 58
b. Para mulheres: (62.1*ALTURA) - 44.7 */
#include <stdio.h>

int main()
{
    float altura, pesoideal;
    char sexo;

    printf("Informe sua altura: \n");
    scanf("%f", &altura);
    printf("Informe o seu sexo -- F-feminino ou M-masculino\n");
    scanf("%s", &sexo);

    if(sexo == 'F' || sexo =='M')
    {
        pesoideal = (62.1 * altura) - 44.7;
    }
    else
    {
        pesoideal = (72.7 * altura) - 58;
    }

    printf("Seu peso ideal eh: %.3f\n", pesoideal);

    return 0;
}
