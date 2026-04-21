/* LOOP FOR:
Utilizado quando sabemos exatamente quantas vezes o código deve repetir.
Anatomia: 
1. Inicialização (i = 1)
2. Condição (i <= 10)
3. Atualização/Passo (i++)
*/

#include <stdio.h>

int main() {
    int i; // 'i' é a variável de controle (index/iterator)

    printf("Iniciando a contagem...\n");

    // Repete de 1 até 10
    for (i = 1; i <= 10; i++) {
        printf("Numero: %d\n", i);
    }

    printf("Fim da contagem!\n");

    return 0;
}