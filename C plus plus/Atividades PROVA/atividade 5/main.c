#include <stdio.h>
#include <stdlib.h>

int main()
{
    int media, total, op, roda[4], cor[4];
        for(int i = 0; i < 4; i++){
        printf("Qual Roda voçê deseja\n Escolha de acordo com o valor: \n300-Aros 15 custam 300,00 por roda\n350-Aros 17 custam 350,00 por roda\n450-Aros 20 custam 450,00 por roda\n:");
        scanf("%d", &roda[i]);
        printf("Deseja Customizar a roda(1-SIM)(2-NÃO):");
        scanf("%d", &op);
            printf("\nCores Disponiveis: \nEscolha de acordo com o valor: \n55-Azul: 55,00 por roda\n60-Vermelha: 60,00 por roda\n80-Dourada: 80,00 por roda\n:");
            scanf("%d", &cor[i]);

        total = roda[i] + cor[i];
        media = total / 4;
        }

        printf("Total = %i", total);
        printf("media = %i", media);

}
