/*Crie um programa para gerenciar um sistema de reservas de mesas em uma casa
de espetáculo. A casa possui 30 mesas de 5 lugares cada. O programa deverá
permitir que o usuário escolha o código de uma mesa (100 a 129) e forneça a
quantidade de lugares desejados. O programa deverá informar se foi possível
realizar a reserva e atualizar a reserva. Se não for possível, o programa deverá
emitir uma mensagem. O programa deve terminar quando o usuário digitar
o código 0 (zero) para uma mesa ou quando todos os 150 lugares estiverem
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
