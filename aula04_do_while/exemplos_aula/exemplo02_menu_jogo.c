/* SOLUÇÃO COM DO..WHILE:
- Ideal para menus que precisam ser exibidos ao menos uma vez.
- Evita inicialização de variáveis com "valores mágicos".
*/

#include <stdio.h>

int main() {
    int opcao;

    do {
        printf("\n--- MENU PRINCIPAL ---\n");
        printf("1. Nova Partida\n");
        printf("2. Carregar Jogo\n");
        printf("3. Configuracoes\n");
        printf("0. Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: printf("Iniciando novo jogo...\n"); break;
            case 2: printf("Carregando o save...\n"); break;
            case 3: printf("Abrindo audio e video...\n"); break;
            case 0: printf("Fechando o jogo...\n"); break;
            default: printf("Opcao Invalida!\n");
        }
    } while (opcao != 0); // O menu repete até o usuário digitar 0

    return 0;
}