#include <stdio.h>

int main(void) {

    int A[6];
    

    printf("Digite um número:\n");
    for (int i = 0; i < 6; i++) {
        printf("Posição %d: ", i);
        scanf("%d", &A[i]);
        
    }

    printf("\nOs números digitados na ordem inversa foram: ");
    for (int i = 5; i >= 0; i--) {
         printf("%d, ", A[i]);
    }
    
    return 0;
}