// Exemplo 06: Estrutura SE (if) - Desvio Composto (Aprovado/Reprovado)
#include <stdio.h>

int main() {
    float nota;

    printf("Digite a nota do aluno (0 a 10): ");
    scanf("%f", &nota);

    if (nota >= 6.0) {
        printf("Status: APROVADO.\n");
    } else {
        printf("Status: REPROVADO.\n");
    }

    return 0;
}