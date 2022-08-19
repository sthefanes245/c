/*Elabore um algoritmo em pseudolinguagem (utilizando os conceitos vistos nesse capítulo) para ler uma
variável numérica N e mostrá-la somente se a mesma for maior que 100, caso contrário mostrá-la com o
valor zero. */
#include <stdio.h>

int main()
{
    float N;

    printf("Informe um valor para a variavel: \n");
    scanf("%f", &N);

    if(N > 100)
    {
        N = N;
    }
    else 
    {
        N = 0;
    }
    printf("%.1f \n", N);
    return 0;
}