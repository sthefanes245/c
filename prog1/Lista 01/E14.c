/*Uma rainha requisitou os servi�os de um monge e disse-lhe que pagaria qualquer pre�o. O monge,
necessitando de alimentos, indagou � rainha sobre o pagamento, se poderia ser feito com gr�os de trigo
dispostos em um tabuleiro de xadrez (tem 64 quadros), de tal forma que o primeiro quadro deveria
conter apenas um gr�o e os quadros subseq�entes, o dobro do quadro anterior. A rainha achou o
trabalho barato e pediu que o servi�o fosse executado, sem se dar conta de que seria imposs�vel efetuar
o pagamento. Fa�a um algoritmo para calcular o n�mero de gr�os que o monge esperava receber. */
#include <stdio.h>

#define num_q 64

int main()
{
    float graos = 0.5;
    for(int i=1; i<= num_q; i++)
    {
        graos *= 2;
        printf("Qtd= %.2f \n", graos);
    }

    return 0;
}
