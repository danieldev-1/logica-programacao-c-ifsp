// Exercício Prático: Verificação de maioridade para CNH
#include <stdio.h>

int main() {
    int idade;

    printf("Qual a sua idade? ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("Acesso liberado: Voce ja pode iniciar o processo da CNH.\n");
    }

    // Se a idade for menor que 18, o programa não faz nada e apenas encerra.
    return 0;
}