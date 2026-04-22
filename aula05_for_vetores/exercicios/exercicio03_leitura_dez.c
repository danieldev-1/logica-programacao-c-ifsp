/* Ler dez elementos de uma matriz unidimensional do tipo inteiro e apresentar os valores lidos. */

#include <stdio.h>

int main() {
    int numeros[10];
    int i;

    // Leitura dos valores
    for (i = 0; i < 10; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Exibindo os valores
    printf("Valores lidos:\n");
    for (i = 0; i < 10; i++) {
        printf("%d\n", numeros[i]);
    }

    return 0;
}