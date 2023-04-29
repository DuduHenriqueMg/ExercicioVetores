#include <stdio.h>

int main(void) {

    float A[10];
    int negativos = 0;
    float positivos = 0;

    printf("Digite números reais:\n");
    for (int i = 0; i < 10; i++) {
        printf("Posição %d: ", i);
        scanf("%f", &A[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (A[i] < 0) {
            negativos++;
        }else {
            positivos += A[i];
        }
    }

    printf("\nQuantidade de números negativos: %d\n", negativos);
    printf("Soma dos números positivos: %.2f\n", positivos);

    return 0;
}    

