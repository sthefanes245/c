/*Em um campeonato Europeu de Volleyball, se inscreveram 30 países. Sabendo-se
que na lista oficial de cada país consta, além de outros dados, peso e idade de 12
jogadores, crie um programa que apresente as seguintes informações:
Em um campeonato Europeu de Volleyball, se inscreveram 30 países. Sabendo-se
que na lista oficial de cada país consta, além de outros dados, peso e idade de 12
jogadores, crie um programa que apresente as seguintes informações:
• O peso médio e a idade média de cada um dos times;
• O atleta mais pesado de cada time;
• O atleta mais jovem de cada time;
• O peso médio e a idade média de todos os participantes.
 */
#include <stdio.h>

int main()
{
    int i, j, idade, peso=0, mais_pesado, mais_jovem;
    float peso_medio=0, idade_media=0, p_total=0, i_total=0;

    for(i=1; i<=30; i++)
    {
        mais_jovem = 0;
        mais_pesado = 0;
        printf("Informe os dados dos jogadores do pais %d:\n", i);
        for(j=1; j<=12; j++)
        {
            printf("Peso:\n");
            scanf("%d", &peso);
            printf("Idade:\n");
            scanf("%d", &idade);
            if(mais_pesado < peso)
            {
                mais_pesado = peso;
            }
            if(j==1 || mais_jovem > idade) /*O teste j == 1 é só para atribuir a idade no primeiro ciclo do for e
            garantir que a variável jovem receberá a primeira entrada */
            {
                mais_jovem = idade;
            }

            peso_medio += peso;
            idade_media += idade;
        }
        peso_medio = peso_medio / (j-1);
        idade_media = idade_media / (j-1); /* pq tem que ser j-1???, se for so j da errado o calculo */
        printf("O atleta mais pesado tem: %d \n", mais_pesado);
        printf("O atleta mais jovem tem: %d \n", mais_jovem);
        printf("O peso medio do time %d eh: %.3f \n", i, peso_medio);
        printf("A idade media do time %d eh: %.1f \n", i, idade_media);
        /*dando valor as variaveis */
        p_total += peso_medio;
        i_total += idade_media;
    }

    p_total = p_total / (i * j);
    i_total = i_total / (i * j);
    printf("Peso medio de todos os participantes: %.3f \n", p_total);
    printf("Idade media de todos os participantes: %.1f \n", i_total);

    return 0;
}
