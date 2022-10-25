/*A Secretaria de Meio Ambiente que controla o índice de poluição mantém 3 grupos de indústrias que são
altamente poluentes do meio ambiente. O índice de poluição aceitável varia de 0.05 até 0.25. Se o
índice sobe para 0.3 as indústrias do 1º grupo são intimadas a suspenderem suas atividades, se o índice
crescer para 0.4 as industrias do 1º e 2º grupo são intimadas a suspenderem suas atividades, se o
índice atingir 0,5 todos os grupos devem ser notificados a paralisarem suas atividades. Faça um
algoritmo que leia o índice de poluição medido e emita a notificação adequada aos diferentes grupos de
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
