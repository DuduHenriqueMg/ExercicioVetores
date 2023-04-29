#include <stdio.h>

int main(void) {
    
    int maior, menor;
    double A[5];
    double soma;
    double media;

    printf("Digite um número: \n");
    for (int i = 0; i < 5; i++) {

        printf("Posição %d: ", i);
        scanf("%lf", &A[i]);
        soma += A[i];
    }

    media = soma /5;

    maior = A[0];
    menor = A[0];
    for (int i = 1; i < 5; i++) {
        if (A[i] > maior) {
            maior = A[i];
        }
        if (A[i] < menor) {
            menor = A[i];
        }
    }

    printf("\nA média dos números é: %.2lf\n", media);
    printf("O menor número é %d e o maior é %d.\n", menor, maior);

    return 0;
}