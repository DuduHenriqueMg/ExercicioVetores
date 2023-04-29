#include <stdio.h>

int main(void) {
    
    int maior, menor, posicaoMaior, posicaoMenor;
    int A[5];
    
    printf("Digite um número: \n");
    for (int i = 0; i < 5; i++) {
        printf("Posição %d: ", i);
        scanf("%d", &A[i]);
    }

    maior = A[0];
    menor = A[0];
    for (int i = 1; i < 5; i++) {
        if (A[i] > maior) {
            maior = A[i];
            posicaoMaior = i;
        }
        if (A[i] < menor) {
            menor = A[i];
            posicaoMenor = i;
        }
    }

    printf("\nO menor número é %d e o maior é %d.\n", menor, maior);
    printf("A posição do menor número é %d e a do maior é %d.\n", posicaoMenor, posicaoMaior);

    return 0;
}