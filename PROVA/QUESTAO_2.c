#include <stdio.h>

#define dias_no_ano 365
#define dias_no_mes 30

int diasDeAulas(int dia, int mes, int ano, int ultimo_dia, int ultimo_mes, int ultimo_ano) {
    int dias_totais = (ultimo_ano - ano) * dias_no_ano +
                     (ultimo_mes - mes) * dias_no_mes +
                     (ultimo_dia - dia);

    int semanas = dias_totais / 7;
    int qntdAulas = semanas * 2;

    return qntdAulas;
}

int main(void) {
    int dia, mes, ano;
    int ultimo_dia, ultimo_mes, ultimo_ano;

d:
    printf("\nInsira o ultimo dia do semestre: ");
    scanf("%i", &ultimo_dia);
    if (ultimo_dia > 31) {
        printf("Dia invalido\n");
        goto d;
    }

m:
    printf("\nInsira o ultimo mes do semestre: ");
    scanf("%i", &ultimo_mes);
    if (ultimo_mes > 12) {
        printf("Mes invalido\n");
        goto m;
    }

    printf("\nInsira o ultimo ano do semestre: ");
    scanf("%i", &ultimo_ano);

d1:
    printf("\nInsira o dia: ");
    scanf("%d", &dia);
    if (dia > 31) {
        printf("Dia invalido\n");
        goto d1;
    }

m1:
    printf("\nInsira o mes: ");
    scanf("%d", &mes);
    if (mes > 12) {
        printf("Mes invalido\n");
        goto m1;
    }

y:
    printf("\nInsira o ano: ");
    scanf("%d", &ano);
    if (ano > ultimo_ano || (ano == ultimo_ano && mes > ultimo_mes)) {
        printf("Data excede o ultimo dia de aula\n");
        goto y;
    }

    int resultado = diasDeAulas(dia, mes, ano, ultimo_dia, ultimo_mes, ultimo_ano);
    printf("\nQuantidade de aulas entre a data atual e fim do periodo: %i\n", resultado);
    return 0;
}
