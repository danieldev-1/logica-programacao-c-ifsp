// Exemplo 04: Estrutura SE (if) - Desvio Simples
#include <stdio.h>

int main() {
    float valor_compra;

    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valor_compra);

    // O desvio simples: só acontece se a condição for verdadeira
    if (valor_compra > 100.0) {
        valor_compra = valor_compra - (valor_compra * 0.10);
        printf("Desconto de 10%% aplicado!\n");
    }

    printf("Valor final a pagar: R$ %.2f\n", valor_compra);

    return 0;
}