/* DESAFIO FINAL INTEGRADO:
Problema: Uma loja vende um produto. Crie variáveis/constantes para o 
preco_padrao e a quantidade_comprada. Calcule o valor_total. 
Se a quantidade for maior que 10, aplique um desconto de 20% e mostre 
o valor com desconto. Senão, mostre o valor normal e uma mensagem 
"Compre mais de 10 para ter desconto!".
*/

#include <stdio.h>

int main() {
    const float PRECO_PADRAO = 50.00; // Constante de preco
    int quantidade_comprada;
    float valor_total;

    printf("Quantas unidades do produto voce deseja comprar? ");
    scanf("%d", &quantidade_comprada);

    // Processamento inicial
    valor_total = quantidade_comprada * PRECO_PADRAO;

    // Estrutura de decisao composta
    if (quantidade_comprada > 10) {
        // Aplica 20% de desconto
        valor_total = valor_total - (valor_total * 0.20);
        printf("Parabens! Voce ganhou 20%% de desconto.\n");
    } else {
        printf("Dica: Compre mais de 10 unidades para ganhar desconto!\n");
    }

    // Saida final independente do caminho tomado
    printf("O valor total da sua compra eh: R$ %.2f\n", valor_total);

    return 0;
}