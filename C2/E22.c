/*Construa um programa que leia o percurso em quilómetros, o tipo do carro e
informe o consumo estimado de combustível, sabendo-se que um carro tipo A
faz 12 km com um litro de gasolina, um tipo B faz 9 km e o tipo C, 8 km por litro. */
#include <stdio.h>

int main()
{
    float km, consumo;
    char tipo;

    printf("Informe o valor do percurso em quilómetros\n");
    scanf("%f", &km);
    printf("Informe o tipo de carro A, B ou C\n");
    scanf("%s", &tipo);

    switch(tipo)
    {
        case 'A':
            consumo = km / 12.0;
        break;
        case 'B':
            consumo = km / 9.0;
        break;

        case 'C':
            consumo = km / 8.0;
        break;

        default:
            printf("Tipo invalido\n");
    }
    printf("O consumo estimado eh de %.2f\n", consumo);

    return 0;
}
