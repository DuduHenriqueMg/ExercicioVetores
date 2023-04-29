#include <stdio.h>

int main(void) {
    
    double notas[15];
    double soma;
    double media;

    printf("Digite as notas dos alunos:\n");
    for (int i = 0; i < 15; i++) {

        printf("Aluno %d: ", i);
        scanf("%lf", &notas[i]);
        soma += notas[i];
    }

    media = soma / 15;

    printf("\nA média geral foi : %.2lf\n", media);

    return 0;
}