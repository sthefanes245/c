#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, peso, imc;

    printf("Informe sua altura e peso: \n");
    scanf("%f %f", &altura, &peso);

    imc = peso / (altura * altura);

    if(imc < 19.9)
    {
        printf("Voc� est� abaixo do peso ideal \n");
    }
    else if(imc >= 20.0 && imc <= 24.9)
    {
        printf("Parab�ns! voc� est� em seu peso normal!\n");
    }
    else if(imc >= 25.0 && imc <= 29.9)
    {
        printf("Voc� est� acima de seu peso (sobrepeso)\n");
    }
    else if(imc >= 30.0 && imc <= 34.9)
    {
        printf("Obesidade moderada (grau I)\n");
    }
    else if(imc >= 35.0 && imc <= 39.9)
    {
        printf("Obesidade severa (grau II)\n");
    }
    else
    {
        printf("Obesidade m�rbida (grau III)\n");
    }


    return 0;
}
