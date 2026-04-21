// Exemplo de Uso de Variável
#include <stdio.h>

int main() {
    // Declaração da variável
    int idade;

    // Solicitando dado ao usuário (escrevendo na tela/ Output)
    printf("Digite a sua idade: ");

    // Lendo o dado do teclado e guardando no endereço da variável (&idade)/ Input
    scanf("%d", &idade);

    // Exibindo o valor armazenado
    printf("Voce tem %d anos.\n", idade);

    return 0;
}