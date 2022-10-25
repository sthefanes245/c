/*Faça um algoritmo chamado Calculadora, onde o usuário fornece dois valores e o operador (um dentre
+, -, * e /), e o programa faz a conta. */
#include <stdio.h>

int main()
{
    float n1, n2;
    int op;

    printf("Informe 2 numeros: \n");
    scanf("%f %f", &n1, &n2);
    printf("Escolha a operacao: 1-soma, 2-subtracao, 3-multiplicacao, 4-divisao\n");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        printf("%.2f+%.2f = %.2f\n", n1, n2, n1+n2);
        break;
    case 2:
        printf("%.2f-%.2f = %.2f\n", n1, n2, n1-n2);
        break;
    case 3:
        printf("%.2f*%.2f = %.2f\n", n1, n2, n1*n2);
        break;
    case 4:
        printf("%.2f/%.2f = %.2f\n", n1, n2, n1/n2);
        break;
    default:
        printf("Opcao invalida\n");
    }
    return 0;
}
