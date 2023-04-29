#include <stdio.h>

int main(void) {

    int A[6];
    int pares = 0;

    for (int i = 0; i < 6; i++) {
        printf("Digite um número par: ");
        scanf("%d", &A[i]);

        if (A[i] % 2 == 0) {
            pares++;
        } else {
            printf("O valor digitado não é par digite novamente\n");
            i--;
        }
    }

    printf("\nOs números digitados na ordem inversa foram: ");
    for (int i = 5; i >= 0; i--) {
        printf("%d ", A[i]);
    }

    return 0;
}
