#include<stdio.h>
#include<stdlib.h>

int main (){
int a,b,c;
float soma,media;
soma = a+b+c;
media = soma/3;

        printf("\n Digite um numero: ");
            scanf("%d", &a);
        printf("\n Digite um numero: ");
            scanf("%d", &b);
        printf("\n Digite um numero: ");
            scanf("%d", &c);

    if ((a>b)&&(a>c))
        printf("\n O Maior numero eh: %d  ", a);
    else
    if ((b>a)&&(b>c))
        printf("\n O Maior numero eh: %d  ", b);
    else
    if ((c>a)&&(c>b))
        printf("\n O Maior numero eh: %d  ", c);


    if ((a<b)&&(a<c))
        printf("\n O Menor numero eh: %d  ", a);
    else
    if ((b<a)&&(b<c))
        printf("\n O Menor numero eh: %d  ", b);
    else
    if ((c<a)&&(c<b))
        printf("\n O Menor numero eh: %d  ", c);

        printf("A soma dos numeros eh: %.f ", soma);

        printf("\n A media eh: %.2f\n ", media);


}
