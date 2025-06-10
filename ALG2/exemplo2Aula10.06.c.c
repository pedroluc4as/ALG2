#include <stdio.h>
#include <stdlib.h>

int main(void) {

    float *p_notas;
    int num = 4;

    p_notas = (float *) calloc(num, sizeof(float));

    if (p_notas == NULL) {
        printf("Erro ao alocar memória! \n");
        return 1;
    }

    printf("Vetor inicializado:\n");
    for (int cont = 0; cont <= num; cont++) {
        printf("%d nota: %.1f \n", cont + 1, p_notas[cont]);
    }

    free(p_notas);

    return 0;
}