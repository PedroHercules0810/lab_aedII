#include <stdio.h>

int isPerfect(int num) {
    int sum = 1;  // Começamos com 1 porque 1 é sempre um fator
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i) {
                sum += num / i;
            }
        }
    }
    return sum == num;
}

int main() {
    printf("Numeros perfeitos entre 1 e 1000:\n");
    int k = 2000;
    for (int i = 2; i <= k; i++) {
        if (isPerfect(i)) {
            printf("%d: 1", i);
            for (int j = 2; j < i; j++) {
                if (i % j == 0) {
                    printf(" + %d", j);
                }
            }
            printf("\n");
        }
    }

    return 0;
}


