/*Elabore um algoritmo em pseudolinguagem (utilizando os conceitos vistos nesse cap�tulo) para ler uma
vari�vel num�rica N e mostr�-la somente se a mesma for maior que 100, caso contr�rio mostr�-la com o
valor zero.
 */
#include <stdio.h>

int main()
{
    int n;

    printf("Informe um numero inteiro: \n");
    scanf("%d", &n);

    if(n > 100)
    {
        printf("%d\n", n);
    }
    else
    {
        n = 0;
        printf("%d\n", n);
    }
    return 0;
}
