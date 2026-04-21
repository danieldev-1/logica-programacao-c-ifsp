/* DESAFIO INTEGRADO - MENU REPETITIVO:
Problema: No início da aula, o menu rodava uma vez e o programa acabava. 
No mundo real, os programas continuam abertos até o usuário escolher "Sair".
Objetivo: Faça com que o menu tenha uma opção para sair (ex: 0) e continue 
repetindo a exibição das opções enquanto o usuário não pressionar a tecla de sair.
Utilizaremos a estrutura DO...WHILE para garantir que o menu apareça ao menos uma vez.
*/

#include <stdio.h>

int main() {
    int opcao;

    do {
        printf("\n--- SISTEMA DE GESTAO ---\n");
        printf("1. Cadastrar\n");
        printf("2. Editar\n");
        printf("3. Excluir\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf(">> Executando: CADASTRAR...\n");
                break;
            case 2:
                printf(">> Executando: EDITAR...\n");
                break;
            case 3:
                printf(">> Executando: EXCLUIR...\n");
                break;
            case 0:
                printf("Saindo do sistema... Ate logo!\n");
                break;
            default:
                printf("Opcao Invalida! Tente novamente.\n");
        }

    } while (opcao != 0); // Continua repetindo enquanto a opcao for diferente de 0

    return 0;
}