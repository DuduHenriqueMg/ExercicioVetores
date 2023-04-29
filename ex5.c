#include <stdio.h>

int main(void) {
    
    int A[10];
    int pares = 0;

    printf("Digite um número:\n");
    for (int i = 0; i < 10; i++) {
        printf("Posição %d: ", i);
        scanf("%d", &A[i]);

    }

    for (int i = 0; i < 10; i++) {
        if (A[i] % 2 == 0) {
            pares++;
        }
    }

    printf("\nO vetor possui %d números pares.\n", pares);

    return 0;
}




