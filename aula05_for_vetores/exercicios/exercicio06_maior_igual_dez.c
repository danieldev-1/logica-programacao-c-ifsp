/* Crie um algoritmo para ler 15 números inteiros e mostrar 
   no final, os que forem maiores ou igual a 10. */

#include <stdio.h>

int main() {
    int valores[15];
    int i;

    for (i = 0; i < 15; i++) {
        printf("Digite um valor: ");
        scanf("%d", &valores[i]);
    }

    printf("\nValores maiores ou igual a 10:\n");
    for (i = 0; i < 15; i++) {
        if (valores[i] >= 10) { // Condicao para filtrar valores maiores ou iguais a 10
            printf("%d\n", valores[i]);
        }
    }

    return 0;
}