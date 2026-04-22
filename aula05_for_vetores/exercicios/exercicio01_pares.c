/* Mostrar apenas os números pares entre 1 e 20. */

#include <stdio.h>

int main() {
    int i;

    printf("Numeros pares entre 1 e 20:\n");
    for (i = 1; i <= 20; i++) {
        // O operador % 2 == 0 filtra apenas os números que divididos por 2 têm resto zero
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}