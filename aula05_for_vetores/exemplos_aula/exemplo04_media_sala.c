/* PROBLEMA DA MÉDIA:
- Cenário: Armazenar notas de alunos e calcular a média.
- Sem vetores, precisaríamos de dezenas de variáveis isoladas.
- Com vetor e FOR, processamos tudo em um único bloco.
*/

#include <stdio.h>

int main() {
    float notas[4];
    float soma = 0.0, media;
    int i;

    // 1. Lendo e Somando ao mesmo tempo para otimizar
    for (i = 0; i < 4; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma = soma + notas[i]; // Acumulando os valores do vetor
    }

    // 2. Calculando a média após o laço terminar
    media = soma / 4;
    printf("\nA media da sala eh: %.2f\n", media);

    return 0;
}