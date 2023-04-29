#include <stdio.h>

int main(void){

    int resultado[6];
    int A[6] = {1, 0, 5, -2, -5, 7};
    int soma = A[0] + A[1] + A[5];
    A[4] = 100;


    for (int i = 0; i < 6; i++){
        printf("Números do vetor: %d, ", A[i]);
    }

    printf("\nSoma: %d\n", soma);
    
    return 0;
}
