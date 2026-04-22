/* BUSCA NO VETOR:
- Podemos inicializar um vetor diretamente com valores usando chaves {}.
- Para achar o maior valor, assumimos que o primeiro ([0]) é o maior.
- Percorremos o restante comparando cada posição com o "rei" atual.
*/

#include <stdio.h>

int main() {
    // Inicialização direta do vetor
    int numeros[5] = {12, 45, 8, 90, 34}; 
    int maior, i;

    // Assumimos que o elemento no índice 0 é o maior inicialmente
    maior = numeros[0];

    // Começamos o laço do índice 1 em diante para comparar com o "maior"
    for (i = 1; i < 5; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i]; // Encontramos um valor maior, atualizamos o "rei"
        }
    }

    printf("O maior numero no vetor é: %d\n", maior);

    return 0;
}