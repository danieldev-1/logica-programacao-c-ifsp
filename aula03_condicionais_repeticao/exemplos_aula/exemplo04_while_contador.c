/* LOOP WHILE (ENQUANTO):
Realiza o teste lógico no início. Se a condição for falsa de cara, não executa nada.
É crucial atualizar a variável de controle dentro do bloco para evitar o Loop Infinito.
*/

#include <stdio.h>

int main() {
    int contador = 1; // 1. Inicialização

    // 2. Condição de continuidade
    while (contador <= 5) {
        printf("Numero: %d\n", contador);

        // 3. Atualização (Passo)
        contador++; 
    }

    printf("Fim da contagem!\n");

    return 0;
}