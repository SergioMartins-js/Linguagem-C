#include <stdlib.h>
#include <stdio.h>
int main(){
    int op;
        printf("digite uma opção:\n1-Café\n2-Leite\n3-Suco\n" );
            scanf("%d", &op);

    switch(op){
    case 1:
        printf("Você escolheu Café ");
        break;
    case 2:
        printf("Você escolheu Leite ");
        break;
    case 3:
        printf("Você escolheu Suco ");
        break;
    default:
        printf("Opção inválida");
        break;
    }

}
