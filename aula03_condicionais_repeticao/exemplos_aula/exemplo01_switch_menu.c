/* SINTAXE SWITCH..CASE:
O switch avalia o valor de uma única variável e direciona o fluxo direto 
para o "caso" correspondente. É ideal para menus.
Componentes: switch(variável), case valor, break (para sair do bloco) 
e default (o "senão" do switch).
*/

#include <stdio.h>

int main() {
    int opcao;

    printf("--- MENU ---\n");
    printf("1. Cadastrar\n");
    printf("2. Editar\n");
    printf("3. Excluir\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    // Estrutura ESCOLHA..CASO
    switch (opcao) {
        case 1:
            printf("Voce escolheu: CADASTRAR.\n");
            break; // Sem o break, ele executaria o Editar logo em seguida!
        case 2:
            printf("Voce escolheu: EDITAR.\n");
            break;
        case 3:
            printf("Voce escolheu: EXCLUIR.\n");
            break;
        default:
            // Executa se digitar qualquer outro valor
            printf("Opcao Invalida! Tente novamente.\n");
    }

    return 0;
}