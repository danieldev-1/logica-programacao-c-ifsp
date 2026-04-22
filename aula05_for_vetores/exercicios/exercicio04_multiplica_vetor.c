/* Ler oito elementos inteiros em uma matriz unidimensional (A). Construir uma matriz B de mesma dimensão com os elementos da matriz A multiplicados por 3. Após, apresente os números da matriz B. */

#include <stdio.h>

int main() {
    int vetorA[8], vetorB[8];
    int i;

    // Faco a leitura do vetor A
    for (i = 0; i < 8; i++) {
        printf("Digite um valor para A[%d] = ", i + 1);
        scanf("%d", &vetorA[i]);
        vetorB[i] = vetorA[i] * 3; // O vetor b recebe o valor de A na posicao i multiplicado por 3
    }

    printf("\nValores da matriz B:\n");
    for (i = 0; i < 8; i++) {
        printf("%d\n", vetorB[i]);
    }

    return 0;
}