#include <stdio.h>

int f(int m, int n) {
    if (n == 1) {
        return m + 1;
    } else if (m == 1) {
        return n + 1;
    } else {
        return f(m, n - 1) + f(m - 1, n);
    }
}

int main() {
    int m, n;
    
    printf("Digite o valor de M \n");
    scanf("%d", &m);
    
    printf("Digite o valor de N \n");
    scanf("%d", &n);

    int resultado = f(m, n);
    printf("f(%d, %d) = %d\n", m, n, resultado);

    return 0;
}
