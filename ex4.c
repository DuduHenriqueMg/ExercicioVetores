#include <stdio.h>

int main(void){

    int A[8];
    int x, y, soma;

    printf("Digite os números\n");
    for (int i = 0; i < 8; i++) {
        printf("Posição %d: ", i);
        scanf("%d", &A[i]);
       
    }

    do{
        printf("\nDigite duas posições do vetor entre 0 e 7: ");
        scanf("%d %d", &x, &y);

        if ((x < 0 || x > 7) || (y < 0 || y > 7)){
            printf("\nAs posições devem estar entre 0 e 7.\n");
        }
        
    }while ((x < 0 || x > 7) || (y < 0 || y > 7));

    soma = A[x] + A[y];

    printf("\nA soma dos valores %d e %d é %d ", A[x], A[y], soma);

    return 0;
}