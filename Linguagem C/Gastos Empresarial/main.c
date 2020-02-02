#include<stdio.h>
#include<stdlib.h>
int main (){
    float fgts,irpf,salariomes,salarioano,salarioanop,salariomesp,irpfa,fgtsa,comparar,anos;
    int op,cont,comp;
    salariomes=(2800*28); // Salário mensal de todos os fucionários
    salarioano=(3179.06*28)+(2499.70*28)+(salariomes*12); // Salário Anual de Todos os funcionários incluindo férias e 13º salário
    salariomesp=2800; // Salário per capita
    salarioanop=(3179.06)+(2499.70)+(2800*12); // Salário Anual Per capita incluindo 13º e férias
    fgts=(2800*0.08); // 8% de FGTS
    irpf=(2800*0.11); // 11% de IRPF
    fgtsa=(fgts)*12;
    irpfa=(irpf)*12;
    anos=salarioano*10;
    comparar=(anos)*0.24;

        printf("============Bem Vindo========\n"); // embromation
        printf("==========SM DEVELOPER=======\n"); // embromation
        printf("Digite 1 para continuar:");
            scanf("%d", &cont);
    if (cont==1)
        printf("\nEscolha uma opção\n(1-Salário Mensal)\n(2-Salário Anual)\n(3-Salário Mensal per capita)\n(4-Salário Anual Per capita)\n(5-FGTS Anual)\n(6-IRPF Anual)\n(7-FGTS Mensal)\n(8-IPRF Mensal)\n(9-Adicional 2017)\n(10-Total gasto com Salário 10 anos)\nDigite a opção:");
            scanf("%d", &op);
    if (op==1)
        printf("\nTotal de despesas gasta com salário mensal pela empresa é de: R$ %.2f", salariomes);
    else
    if (op==2)
        printf("Total de despesas gasta com salário no ano pela empresa é de: R$ %.2f", salarioano);
    else
    if(op==3)
        printf("Total de despesas gasta com salário per capita no mês pela empresa é de: R$ %.2f", salariomesp);
    else
    if(op==4)
        printf("Total de despesas gasta com salário per capita no ano pela empresa é de: R$ %.2f", salarioanop);
    else
    if(op==5)
        printf("Total de despesas gasta com FGTS no ano é de: R$ %.2f", ((salariomes)*12)*0.08);
    else
    if(op==6)
        printf("Total de despesas gasta com IRPF no ano é de: R$ %.2f", ((salariomes)*12)*0.11);
    else
    if(op==7)
        printf("Total de despesas gasta com FGTS no mes é de : R$ %.2f", (salariomes)*0.08);
    else
    if(op==8)
        printf("Total de despesas gasta com IRPF no mes é de : R$ %.2f", (salariomes)*0.11);
    else
    if(op==9)
        printf("Total de despesas gasta com o salário junto com o adicional de 2017 é de: R$ %.2f", ((salarioano)*0.18)+(salarioano));
    else
    if(op==10)
        printf("Total de despesas gasta com o salário ao longo de 10 anos + adcional é de: R$ %.2f", (anos)+(comparar));
        printf("\nDigite 1 para Comparar o ano de 2017 com os 10 anos da empresa:");
        scanf("%d", &comp);
    if(comp==1)
    printf("No ano de 2017 a empresa gastou:\n %.2f", ((salarioano)*0.18)+(salarioano));
    printf("\nO Gasto total ao longo de 10 anos é:\n %.2f",(anos)+(comparar));



}
