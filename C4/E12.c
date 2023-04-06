/*Crie um programa para gerenciar um sistema de reservas de mesas em uma casa
de espet�culo. A casa possui 30 mesas de 5 lugares cada. O programa dever�
permitir que o usu�rio escolha o c�digo de uma mesa (100 a 129) e forne�a a
quantidade de lugares desejados. O programa dever� informar se foi poss�vel
realizar a reserva e atualizar a reserva. Se n�o for poss�vel, o programa dever�
emitir uma mensagem. O programa deve terminar quando o usu�rio digitar
o c�digo 0 (zero) para uma mesa ou quando todos os 150 lugares estiverem
ocupados.
 */
#include <stdio.h>

int main()
{
    int mesa[30], op, cadeiras=0, contcadeiras=0;

    for(int i = 0; i < 30; i++)
        mesa[i] = 0;

        do
        {
            printf("Digite o codigo da mesa(de 100 a 129) para reservar ou 0 para parar: \n");
            scanf("%d", &op);
            if(op >= 100 && op <= 129)
            {
                printf("Informe quantos lugares deseja reservar das 5 cadeiras disponiveis \n");
                scanf("%d", &cadeiras);

                if(cadeiras > 0 && cadeiras < 6)
                {

                    int n = op % 100;
                    if (mesa[n] + cadeiras < 6) {
                        printf("\nFoi possivel reservar/atualizar a reserva!");
                        mesa[n] += cadeiras;
                        cadeiras += cadeiras;

                    }
                    else
                        printf("A mesa nao possui cadeiras suficientes \n");

                }
                else
                    printf("A mesa nao possui cadeiras suficientes \n");

            }
            else
                printf("Codigo invalido \n");

            if(contcadeiras == 150)
                break;
    }while(op != 0);
    return 0;
}
