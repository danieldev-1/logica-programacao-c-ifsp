/* REPETINDO O SISTEMA INTEIRO E TRATAMENTO DE BUFFER:
- Permite que o usuário decida se deseja realizar uma nova operação sem fechar o programa.
- PROBLEMA DO BUFFER: Ao ler caracteres (char) com scanf, a tecla "Enter" (\n) da leitura 
  anterior permanece na memória, podendo pular a próxima leitura.
- SOLUÇÃO: Inserir um espaço em branco antes do especificador %c para ignorar resíduos no buffer.
*/

#include <stdio.h>

int main() {
    char continuar;
    float n1, n2, soma;

    do {
        printf("--- SOMA RAPIDA ---\n");
        printf("Digite dois numeros: ");
        scanf("%f %f", &n1, &n2);

        soma = n1 + n2;
        printf("Resultado da soma: %.2f\n", soma);

        printf("\nDeseja realizar outro calculo? (s/n): ");
        // O espaço antes do %c eh necessario para ignorar o 'Enter' da leitura anterior
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    printf("Sistema encerrado.\n");

    return 0;
}