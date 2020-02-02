#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("Digite um número: ");
        scanf("%d", &a);

    if(a % 2 == 1){ //Usando para saber se impar (var % 2 == 1)... Para saber se é par usar (var % 2 == 0)
        printf("O número é impar");
    }else{
        printf("O número é Par");
    }
}
