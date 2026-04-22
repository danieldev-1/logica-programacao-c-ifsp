/* Faça um algoritmo que leia 20 números e armazene em um vetor. 
   Depois, some os 10 primeiros elementos deste vetor. */

#include <stdio.h>

int main() {
    int numeros[20];
    int soma = 0;
    int i;

    for (i = 0; i < 20; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }

    // Esse outro for estou pegando so os 10 primeiros numeros do vetor e realizando a soma deles
    for (i = 0; i < 10; i++) {
        // soma = soma + numeros[i]; // dessa forma tambem funcionaria
        soma += numeros[i];
    }

    printf("\nSoma dos 10 primeiros: %d\n", soma);
    return 0;
}