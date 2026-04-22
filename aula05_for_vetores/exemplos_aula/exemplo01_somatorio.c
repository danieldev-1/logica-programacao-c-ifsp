/* DEFINIÇÃO DO LAÇO FOR:
- Estrutura de repetição usada para executar um bloco de código de maneira controlada.
- Ideal quando se sabe de antemão quantas iterações (voltas) são necessárias.
- COMPONENTES:
  1. Inicialização: Define a variável de controle (ex: i = 0).
  2. Condição: Teste booleano que decide se o laço continua.
  3. Incremento: Atualiza a variável a cada repetição.
*/

#include <stdio.h>

int main() {
    int i;
    int soma = 0; // Acumulador deve iniciar em 0

    // O laço executa de 1 até 5 de forma fixa
    for (i = 1; i <= 5; i++) {
        printf("Adicionando %d a soma...\n", i);
        soma = soma + i;
    }

    printf("Soma total: %d\n", soma);

    return 0;
}