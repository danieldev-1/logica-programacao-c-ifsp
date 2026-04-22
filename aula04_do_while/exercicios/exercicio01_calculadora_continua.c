/* Exercício SPOLOG1 - Calculadora Contínua
Escreva um programa em linguagem C que funcione como uma "Calculadora do Dobro" de uso contínuo. 
O sistema deve seguir o fluxo abaixo:
1. Solicitar ao usuário a entrada de um número real (float).
2. Calcular e exibir na tela o dobro do valor digitado, formatado com duas casas decimais.
3. Apresentar a seguinte pergunta para controle de fluxo: "Deseja calcular outro número? (S para Sim / N para Não): "
4. Ler a resposta do usuário armazenando-a em uma variável do tipo char.
5. Avaliar a resposta digitada:
   a. Se o usuário digitar 'S' ou 's', o programa deve recomeçar.
   b. Se o usuário digitar 'N' ou 'n', o programa deve exibir a mensagem "Calculadora encerrada. Até logo!" e finalizar.
*/

#include <stdio.h>

int main() {
    float numero;
    char resposta;

    do {
        printf("Digite un numero real: ");
        scanf("%f", &numero);

        printf("O dobro de %.2f é %.2f\n", numero, numero * 2);

        printf("Deseja calcular outro numero? (S para SIM / N para nao): ");
        // Espaco antes do %c limpa o buffer do 'Enter' anterior
        scanf(" %c", &resposta);
                
        // Validacao para garantir que o usuario digite apenas S ou N
        while (resposta != 'S' && resposta != 's' && resposta != 'N' && resposta != 'n') {
            printf("Valor invalido. Voce deve digitar S ou N: ");
            scanf(" %c", &resposta);
        }

    } while (resposta == 'S' || resposta == 's'); // Repete o programa se o usuario digitar 'S' ou 's'

    printf("Calculadora encerrada. Até logo!\n");
    
    return 0;
}