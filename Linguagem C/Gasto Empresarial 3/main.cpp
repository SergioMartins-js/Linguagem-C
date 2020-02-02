#include<stdio.h>
#include<stdlib.h>
int main (){
    float fgts,irpf,irpfa,fgtsa,mes,novo,aumento,percent,fgtsn,irpfn;
    int op,cont,func,soldo,percentual;


    printf("\nDigite a Quantidade de Funcionários: ");
        scanf("%d", &func);
    printf("\nDigite o salário: ");
        scanf("%d", &soldo);
    mes=func*soldo;
    fgts=((mes)*0.08); // 8% de FGTS
    irpf=((mes)*0.11); // 11% de IRPF
    fgtsa=(fgts)*12;
    printf("\nO gasto total por mês com funcionários é de: %.2f", (mes));
    printf("\nO gasto total por ano com funcionários é de: %.2f", (mes)*12);
    printf("\nO gasto total por mês com FGTS é de: %.2f", (fgts));
    printf("\nO gasto total por ano com FGTS é de: %.2f", (fgtsa));
    printf("\nO gasto total por ano com IRPF é de: %.2f", (irpf)*12);
    printf("\nO gasto total por mês com IRPF é de: %.2f", (irpf));
    printf("\nDigite o percentual de aumento entre 1 a 100:");
        scanf("%f", &percent);
        aumento=(percent/100);
        novo=(((mes*aumento)+mes));
        fgtsn=((novo)*0.08); // 8% de FGTS
        irpfn=((novo)*0.11);


    printf("\nO gasto total por mês com funcionários é de: %.2f", (((mes*aumento)+mes)));
    printf("\nO gasto total por ano com funcionários é de: %.2f", (((mes*aumento)+mes))*12);
    printf("\nO gasto total por mês com FGTS é de: %.2f", ((fgtsn)*func));
    printf("\nO gasto total por ano com FGTS é de: %.2f", ((fgtsn)*func)*12);
    printf("\nO gasto total por ano com IRPF é de: %.2f", ((irpfn)*func)*12);
    printf("\nO gasto total por mês com IRPF é de: %.2f", ((irpfn)*func));
}
