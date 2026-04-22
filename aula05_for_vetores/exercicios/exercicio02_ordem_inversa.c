/* Declarar um vetor de 5 números inteiros, pedir para o usuário digitar os valores, e depois imprimir na tela de trás para frente (Ordem inversa). */

#include <stdio.h>

int main() {
    int numeros[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", &numeros[i]);
    }

    printf("\nExibindo na ordem inversa:\n");
    // O laço começa no índice 4 e usa o decremento (i--) para percorrer o vetor de trás para frente
    for (i = 4; i >= 0; i--) {
        printf("Posicao %d: %d\n", i, numeros[i]);
    }

    return 0;
}