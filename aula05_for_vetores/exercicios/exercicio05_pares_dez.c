/* Crie um algoritmo para ler 10 números inteiros 
   e mostrar os números pares deste vetor. */

#include <stdio.h>

int main() {
    int numeros[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }

    printf("\nNumeros pares:\n");
    for (i = 0; i < 10; i++) {
        if (numeros[i] % 2 == 0) { // Condicao para filtrar apenas os valores pares
            printf("%d\n", numeros[i]);
        }
    }

    return 0;
}