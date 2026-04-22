/* Faça um algoritmo que leia 30 valores do tipo inteiro e armazene-os em um vetor. 
   O algoritmo deverá informar: (1) todos os números pares; (2) o menor e o 
   maior valor; (3) quantos valores são maiores que a média. */

#include <stdio.h>

int main() {
    int numeros[30];
    int soma = 0, menor, maior;
    float media;
    int acima_da_media = 0;
    int i;

    // Le os 30 numeros e calcula a soma durante a leitura
    for (i = 0; i < 30; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    // Inicializo com o primeiro elemento do vetor - para evitar lixo de memoria na comparacao
    menor = numeros[0];
    maior = numeros[0];

    for (i = 1; i < 30; i++) {
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }

    media = soma / 30.0;

    // Imprime os valores pares e conta quantos estao acima da media no mesmo loop
    printf("\nValores pares:\n");
    for (i = 0; i < 30; i++) {
        if (numeros[i] % 2 == 0) {
            printf("%d\n", numeros[i]);
        }
        if (numeros[i] > media) {
            acima_da_media++;
        }
    }

    printf("\nMenor valor: %d", menor);
    printf("\nMaior valor: %d", maior);
    printf("\nMedia: %.2f", media);
    printf("\nQuantidade acima da media: %d\n", acima_da_media);

    return 0;
}