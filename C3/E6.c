/*Crie um programa em C que imprima os 20 primeiros termos da série de Fibonacci.
Observação: os dois primeiros termos desta série são 1 e 1 e os demais são gerados
a partir da soma dos anteriores. Exemplo:
• 1 + 1 = 2, terceiro termo;
• 1 + 2 = 3, quarto termo, etc */
#include <stdio.h>

int main()
{
    int fib1=1, fib2=1, fib=0;
    for(int i=2; i<=20; i++)
    {
        fib = fib2;
        fib2 += fib1 ;
        printf("Termo %d = %d \n", i+1, fib2);
        fib1 = fib;
    }
    return 0;
}
