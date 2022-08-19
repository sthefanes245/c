/*Elabore um algoritmo que leia o CPF e o número de horas trabalhadas de um operário. Calcule o salário
sabendo-se que ele ganha R$ 10,00 por hora. Quando o número de horas exceder a 50, calcule o
excesso de pagamento armazenando-o em outra variável, caso contrário zerar tal variável. A hora
excedente de trabalho vale R$ 20,00. No final do processamento mostre o salário total e o salário
excedente do trabalhador. */

#include <stdio.h>

int main()
{
    char cpf[11];
    int horas_trabalhadas, hora_extra;
    float sal, extra;

    printf("Informe seu cpf: \n");
    scanf("%s", &cpf);
    printf("Informe a quantidade de horas trabalhadas: \n");
    scanf("%d", &horas_trabalhadas);

    sal = horas_trabalhadas * 10;

    if(horas_trabalhadas > 50){
        hora_extra = horas_trabalhadas - 50;
        extra = hora_extra * 20;
    }
    else{
        hora_extra = 0;
    }

    printf("Salario Total: %.2f \n", sal);
    printf("Salario Excedente: %.2f \n", extra);

    return 0;
}