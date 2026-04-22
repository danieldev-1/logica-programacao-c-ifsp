/* VALIDAÇÃO DE ENTRADA:
- "Nunca confie no usuário": Processo fundamental para garantir que os dados inseridos 
  estejam no formato, tipo e intervalo corretos antes do processamento.
- Essencial para segurança e integridade, evitando que valores absurdos quebrem a lógica.
- Estratégia: O laço do..while mantém o usuário "preso" até que ele digite um valor válido.
*/

#include <stdio.h>

int main() {
    float nota;

    do {
        printf("Digite a nota final do aluno (0 a 10): ");
        scanf("%f", &nota);

        // Verifica se a nota está fora do intervalo permitido
        if (nota < 0 || nota > 10) {
            printf("ERRO: Nota invalida! Digite novamente.\n\n");
        }
    } while (nota < 0 || nota > 10); // Repete ENQUANTO a entrada for inválida

    printf("Nota aceita: %.2f\n", nota);

    return 0;
}