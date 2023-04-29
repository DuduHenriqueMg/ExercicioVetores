#include <stdio.h>
#include <math.h>

int main(void){

    int A[10];
    int quadrado[10];

    printf("Digite um número:\n");
    for (int i = 0; i < 10; i++) {
        printf("Posição %d: ", i);
        scanf("%d", &A[i]);
    }

    printf("\nOs quadrados desses números são:\n");
    for (int i = 0; i < 10; i++){
        quadrado[i] = pow(A[i],2);
        printf("Posição %d: %d\n", i, quadrado[i]);

    }
  
    return 0;
}