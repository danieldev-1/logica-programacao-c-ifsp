/* EXERCÍCIO 2: Lógica de Ações em Jogos
Problema: Você está programando a interface de um jogo de RPG de turno. 
O jogador tem 4 opções de ação mapeadas por números. 

Requisitos:
1. Atacar com a espada
2. Usar magia de defesa
3. Beber poção de cura
4. Tentar fugir da batalha
- Se digitar fora do intervalo (1-4), exibir: "Ação inválida! Você perdeu o turno."
*/

#include <stdio.h>

int main() {
    int opcao;

    printf("Menu de Batalha:\n");
    printf("1. Atacar com a espada\n");
    printf("2. Usar magia de defesa\n");
    printf("3. Beber poção de cura\n");
    printf("4. Tentar fugir da batalha\n");
    printf("Digite uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Ataque com espada realizado!\n");
            break;
        case 2:
            printf("Magia de defesa ativada!\n");
            break;
        case 3:
            printf("Poção de cura utilizada!\n");
            break;
        case 4:
            printf("Tentativa de fuga iniciada!\n");
            break;
        default:
            printf("Ação inválida! Você perdeu o turno.\n");
            break;
    }

    return 0;
}