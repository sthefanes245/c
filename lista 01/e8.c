/*Faça um algoritmo chamado Calculadora, onde o usuário fornece dois valores e o operador (um dentre
+, -, * e /), e o programa faz a conta */
#include <stdio.h>

int main()
{
    float n1, n2, resul;
    int op;

    printf("Informe dois numeros: \n");
    scanf("%f %f", &n1, &n2);
    printf("Escolha uma operacao de acordo com as opcoes:\n");
    printf("1 para soma\n");
    printf("2 para subtracao\n");
    printf("3 para multiplicacao\n");
    printf("4 para divisao\n");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        resul = n1 + n2;
        break;
    case 2:
        resul = n1 - n2;
        break;
    case 3:
        resul = n1 * n2;
        break;
    case 4:
        resul = n1 / n2;
        break;
    }

    printf("O resultado da conta eh %.2f \n", resul);

    return 0;
}