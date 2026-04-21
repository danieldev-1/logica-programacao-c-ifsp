// Exemplo 05: Estrutura SE (if) - Desvio Composto (if/else)
#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Se o resto da divisao por 2 for igual a zero...
    if (numero % 2 == 0) {
        printf("O numero %d eh PAR.\n", numero);
    } else {
        // Se nao for zero, obrigatoriamente eh impar
        printf("O numero %d eh IMPAR.\n", numero);
    }

    return 0;
}