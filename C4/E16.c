/*Crie um programa em C para ler um conjunto de 100 n�meros reais e informe:
� quantos n�meros lidos s�o iguais a 30
� quantos s�o maior que a m�dia
� quantos s�o iguais a m�dia */
#include <stdio.h>

#define tam 100
int main()
{
    float vet[tam], media=0;
    int  a=0, b=0, c=0;

    printf("Informe os valores: \n");
    for(int i = 0; i < tam; i++)
    {
        scanf("%f", &vet[i]);

        if(vet[i] == 30)
        {
            a++;
        }
        media += vet[i];
    }
        media = media / tam;
    for(int i = 0; i < tam; i++)
    {
        if(vet[i] > media)
           b++;
        else if(vet[i] == media)
            c++;
    }
    printf("%d Numeros lidos sao iguais a 30 \n", a);
    printf("%d Numeros lidos sao maior que a media \n", b);
    printf("%d Numeros lidos sao iguais a media \n", c);
    return 0;
}
