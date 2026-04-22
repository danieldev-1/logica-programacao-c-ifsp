/* Faça um algoritmo que leia 10 valores em um vetor e três valores 
   nas variáveis A B e C. Após a leitura, informe o número de vezes 
   que os números A, B e C apareceram no vetor. */

#include <stdio.h>

int main() {
    int numeros[10];
    int valor_a = 0, valor_b = 0, valor_c = 0;
    int contador_a = 0, contador_b = 0, contador_c = 0;
    int i;

    for (i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }

    printf("Digite o valor A: ");
    scanf("%d", &valor_a);

    printf("Digite o valor B: ");
    scanf("%d", &valor_b);

    printf("Digite o valor C: ");
    scanf("%d", &valor_c);

    // Basicamente esse for percorre o vetor e quando acha o numero correspondente a A, B ou C, soma +1 no contador dele
    for (i = 0; i < 10; i++) {
        if (numeros[i] == valor_a) {
            contador_a++;
        }
        if (numeros[i] == valor_b) {
            contador_b++;
        }
        if (numeros[i] == valor_c) {
            contador_c++;
        }
    }

    printf("\nA apareceu %d vezes", contador_a);
    printf("\nB apareceu %d vezes", contador_b);
    printf("\nC apareceu %d vezes\n", contador_c);

    return 0;
}