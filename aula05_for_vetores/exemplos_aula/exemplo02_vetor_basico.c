/* VETORES (ARRAYS) - VARIÁVEIS HOMOGÊNEAS UNIDIMENSIONAIS:
- Estruturas que armazenam uma coleção de elementos do mesmo tipo.
- MEMÓRIA CONTÍGUA: O vetor aloca um bloco de memória sequencial na RAM.
- ÍNDICE ZERO: Em C, a contagem sempre começa do zero. 
- Se o tamanho é 3, os índices disponíveis são 0, 1 e 2.
*/

#include <stdio.h>

int main() {
    int numeros[3]; // Declaração de um vetor para 3 inteiros

    numeros[0] = 10; // Primeira posição (índice 0)
    numeros[1] = 25; // Segunda posição (índice 1)
    numeros[2] = 50; // Terceira posição (índice 2)

    printf("O primeiro numero eh: %d\n", numeros[0]);
    printf("O segundo numero eh: %d\n", numeros[1]);
    printf("O terceiro numero eh: %d\n", numeros[2]);

    return 0;
}