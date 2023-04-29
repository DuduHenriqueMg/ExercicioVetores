#include <stdio.h>

int main(void) {

    int A[10];
    int maior, menor;

    printf("Digite um número:\n");
    for (int i = 0; i < 10; i++) {
        printf("Posição %d: ", i);
        scanf("%d", &A[i]);
        
    }

    maior = A[0];
    menor = A[0];
    for (int i = 1; i < 10; i++) {
        if (A[i] > maior) {
            maior = A[i];
        }
        if (A[i] < menor) {
            menor = A[i];
        }
    }
    
    printf("\nO menor número do vetor é %d e o maior é %d.\n", menor, maior);

    return 0;
}