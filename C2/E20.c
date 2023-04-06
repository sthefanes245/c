/*O banco XXX conceder� um cr�dito especial com juros de 2% aos seus clientes
de acordo com o saldo m�dio no �ltimo ano. Fa�a um programa que leia o saldo
m�dio de um cliente e calcule o valor do cr�dito de acordo com a tabela a seguir.
O programa deve imprimir uma mensagem informando o saldo m�dio e o valor
de cr�dito.
Saldo M�dio Percentual
de 0 a 500 nenhum cr�dito
de 501 a 1000 30% do valor do saldo m�dio
de 1001 a 3000 40% do valor do saldo m�dio
acima de 3001 50% do valor do saldo m�dio
 */
#include <stdio.h>

int main()
{
    int saldo_medio;

    printf("Informe o saldo medio do cliente: \n");
    scanf("%d", &saldo_medio);

    if(saldo_medio <= 500)
    {
        printf("Nenhum credito");
    }
    else if(saldo_medio <= 1000)
    {
        printf("Saldo medio = %d ... valor de credito = %.2f \n", saldo_medio, saldo_medio*0.3);
    }
    else if(saldo_medio <= 3000)
    {
        printf("Saldo medio = %d ... valor de credito = %.2f \n", saldo_medio, saldo_medio*0.4);
    }
    else
    {
        printf("Saldo medio = %d ... valor de credito = %.2f \n", saldo_medio, saldo_medio*0.5);
    }
    return 0;
}
