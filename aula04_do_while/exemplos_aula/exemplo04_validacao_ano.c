/* EXERCÍCIO DE FIXAÇÃO:
- Validação de intervalo de anos (1900 a 2024).
*/

#include <stdio.h>

int main() {
    int ano_nascimento;

    do {
        printf("Digite o ano de seu nascimento (1900 a 2024): ");
        scanf("%d", &ano_nascimento);

        if (ano_nascimento < 1900 || ano_nascimento > 2024) {
            printf("ERRO: Ano fora da faixa permitida!\n");
        }
    } while (ano_nascimento < 1900 || ano_nascimento > 2024); // Repete até acertar

    printf("Ano registrado com sucesso: %d\n", ano_nascimento);

    return 0;
}