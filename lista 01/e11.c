/*1. Escreva um programa que determine o grau de obesidade de uma pessoa, sendo fornecido o peso e a
altura da pessoa. O grau de obesidade é determinado pelo índice da massa corpórea - IMC (Massa =
Peso/Altura2
) através dos seguintes índices:
a. Abaixo de 19.9: Você está abaixo do peso ideal.
b. Entre 20.0 e 24.9: Parabéns! você está em seu peso normal!
c. Entre 25.0 e 29.9: Você está acima de seu peso (sobrepeso).
d. Entre 30.0 e 34.9: Obesidade moderada (grau I).
e. Entre 35.0 e 39.9: Obesidade severa (grau II).
f. 40.0 e acima: Obesidade mórbida (grau III) */
#include <stdio.h>

int main()
{
    float altura, peso, imc;

    printf("Informe sua altura e peso: \n");
    scanf("%f %f", &altura, &peso);

    imc = peso / (altura * altura);

    if(imc < 19.9)
    {
        printf("Você está abaixo do peso ideal \n");
    }
    else if(imc >= 20.0 && imc <= 24.9)
    {
        printf("Parabéns! você está em seu peso normal!\n");
    }
    else if(imc >= 25.0 && imc <= 29.9)
    {
        printf("Você está acima de seu peso (sobrepeso)\n");
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
        printf("Obesidade mórbida (grau III)\n");
    }

    return 0;
}
