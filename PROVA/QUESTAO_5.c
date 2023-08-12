#include <stdio.h>

int produto_recursivo(int x1, int x2)
{
    if (x2 == 0)
    {
        return 0;
    }

    if (x2 == 1)
    {
        return x1;
    }

    return x1 + produto_recursivo(x1, x2 - 1);
}

int main()
{
    int produto, x1, x2;

    printf("Insira o valor de X1 \n");
    scanf("%d", &x1);
    printf("Insira o valor de X2 \n");
    scanf("%d", &x2);

    produto = produto_recursivo(x1, x2);

    printf("\nproduto: %i", produto);
    return 0;
}