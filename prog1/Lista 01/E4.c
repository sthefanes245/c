/*A Secretaria de Meio Ambiente que controla o �ndice de polui��o mant�m 3 grupos de ind�strias que s�o
altamente poluentes do meio ambiente. O �ndice de polui��o aceit�vel varia de 0.05 at� 0.25. Se o
�ndice sobe para 0.3 as ind�strias do 1� grupo s�o intimadas a suspenderem suas atividades, se o �ndice
crescer para 0.4 as industrias do 1� e 2� grupo s�o intimadas a suspenderem suas atividades, se o
�ndice atingir 0,5 todos os grupos devem ser notificados a paralisarem suas atividades. Fa�a um
algoritmo que leia o �ndice de polui��o medido e emita a notifica��o adequada aos diferentes grupos de
empresas. */
#include <stdio.h>

int main()
{
    float poluicao;

    printf("Informe o indice de poluicao: \n");
    scanf("%f", &poluicao);

    if(poluicao < 0.4)
    {
        printf("INTIMACAO: Pare as atividades todas as industrias do grupo 1\n");
    }
    else if(poluicao < 0.5)
    {
        printf("INTIMACAO: Pare as atividades todas as industrias do grupo 1 e 2\n");
    }
    else
    {
        printf("INTIMACAO: TODAS as industrias devem parar suas atividades\n");
    }


    return 0;
}
