/*Fa�a um programa que armazene 10 letras em um vetor e imprima uma listagem
numerada */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letras[10];
    int i;

    printf("Informe as 10 letras: \n");
    for(i = 0; i < 10; i++){
        fflush(stdin);/*fflush() � normalmente usado apenas para fluxo de sa�da. Sua finalidade � limpar (ou liberar) o
         buffer de sa�da e mover os dados do buffer para o console (no caso de stdout) ou disco (no caso de fluxo de sa�da de arquivo).*/
        scanf("%c", &letras[i]);/
    }
    printf("Listagem numerada das letras: \n");
    for(i = 0; i < 10; i++){
        printf("%d letra: %c \n", i+1, letras[i]);
    }
    return 0;
}
