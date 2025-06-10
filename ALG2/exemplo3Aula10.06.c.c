#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *vet = NULL;
    int val, tamanho = 0;

    printf("Informe os números ou -1 para sair:\n");

    while (1) {
        scanf("%d", &val);
        if (val == -1) break;

        tamanho++;
        int *temp = realloc(vet, tamanho * sizeof(int));

        if (temp == NULL) {
            printf("Falha ao realocar memória! \n");
            free(vet);
            return 1;
        }
        vet = temp;
        vet[tamanho - 1] = val;
    }

    printf("\n Números informados: ");
    for(int cont = 0; cont < tamanho; cont++) {
        printf("%d ", vet[cont]);
    }

    free(vet);
    return 0;
}
