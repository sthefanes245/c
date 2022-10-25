/*Desenvolva um algoritmo que:
a. Leia 4 números;
b. Calcule o quadrado de cada um;
c. Se o valor resultante do quadrado do terceiro for >= 1000, mostre-o e finalize;
d. Caso contrário, mostre os valores lidos e seus respectivos quadrados.
 */
#include <stdio.h>

int main()
{
    float n1, n2, n3, n4, q1, q2, q3, q4;

    printf("Informe 4 numeros: \n");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    q1 = n1 * n1;
    q2 = n2 * n2;
    q3 = n3 * n3;
    q4 = n4 * n4;

    if(q3 >= 1000)
    {
        printf("%.2f \n", q3);
    }
    else
    {
        printf("Valores lidos = %.2f -- %.2f -- %.2f -- %.2f \n", n1, n2, n3, n4);
        printf("O quadrado desses valores sao, respectivamente: %.2f -- %.2f -- %.2f -- %.2f \n", q1, q2, q3, q4);
    }
    return 0;
}
