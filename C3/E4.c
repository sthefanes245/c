/*Faça um programa em C que permita entrar com o nome, a idade e o sexo de 20
pessoas. O programa deve imprimir o nome da pessoa se ela for do sexo masculino
e tiver mais de 21 anos */
#include <stdio.h>

int main()
{
    char nome[20];
    int idade;
    int sexo;

    for(int i=1; i<=2; i++)
    {
        printf("INFORME O NOME: \n");
        scanf("%s", &nome[i]);
        printf("INFORME A IDADE: \n");
        scanf("%d", &idade);
        printf("INFORME O SEXO: 1-feminino, 2-masculino\n");
        scanf("%d", &sexo);

        if(sexo == 2 && idade > 21)
        {
            printf("%s\n", nome);
        }
    }

    return 0;
}
