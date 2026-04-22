/* O FAÇA..ENQUANTO (do..while): 
- Diferente do laço while, a pergunta (condição) é feita apenas no final.
- O bloco de código é executado pelo menos uma vez, independentemente da condição.
- A condição só é testada após a primeira execução para decidir se o fluxo deve repetir.
- Analogia: É como uma atração onde você entra primeiro e validam seu ticket na saída.
*/

#include <stdio.h>

int main() {
    int i = 1;

    // Executa o bloco primeiro, testa a condição depois
    do {
        printf("Numero: %d\n", i);
        i++;
    } while (i <= 5);

    return 0;
}