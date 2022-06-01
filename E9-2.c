#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;

    printf("Informe a idade do nadador:\n");
    scanf("%d", &idade);

    switch(idade)
    {
    case 5:
        printf("Infantil A \n");
        break;
    case 6:
        printf("Infantil A \n");
        break;
    case 7:
        printf("Infantil A \n");
        break;
    case 8:
        printf("Infantil B \n");
        break;
    case 9:
        printf("Infantil B \n");
        break;
    case 10:
        printf("Infantil B \n");
        break;
    case 11:
        printf("Infantil B \n");
        break;
    case 12:
        printf("Juvenial A \n");
        break;
    case 13:
        printf("Juvenial A \n");
        break;
    case 14:
        printf("Juvenil B \n");
        break;
    case 15:
        printf("Juvenil B \n");
        break;
    case 16:
        printf("Juvenil B \n");
        break;
    case 17:
        printf("Juvenil B \n");
        break;
    default:
        printf("Adulto\n");
    }

    return 0;
}

