/*Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um algoritmo que calcule seu
peso ideal, utilizando as seguintes fórmulas:
a. Para homens: (72.7*ALTURA) - 58
b. Para mulheres: (62.1*ALTURA) - 44.7 */
#include <stdio.h>

int main()
{
    float altura, pesoid;
    char sexo;

    printf("Informe seu sexo - F femino ou M masculino\n");
    scanf("%c", &sexo);
    printf("Informe sua altura \n");
    scanf("%f", &altura);

    if(sexo == 'F' || sexo == 'f')
    {
       pesoid= (62.1*altura) - 44.7;
    }
    else
    {
        pesoid = (72.7 * altura) - 58;
    }

    printf("Peso ideal = %.3f \n", pesoid);
    
    return 0;
}