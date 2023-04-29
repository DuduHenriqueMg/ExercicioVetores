#include <stdio.h>

int main(void) {

    int A[10];
    int maior, posicao;

    printf("Digite um número:\n");
    for (int i = 0; i < 10; i++) {
        printf("Posição %d: ", i);
        scanf("%d", &A[i]);
        
    }

    maior = A[0];
    posicao = 0;
    for (int i = 1; i < 10; i++) {
        if (A[i] > maior) {
            maior = A[i];
            posicao = i;
        }    
    }

    printf("\nOs números digitados foram: ");
    for (int i = 0; i < 10; i++){
        printf("%d, ", A[i]);
    }
    
    printf("\nO maior número do vetor é %d e a posição dele é a posição %d\n", maior, posicao);

    return 0;
}