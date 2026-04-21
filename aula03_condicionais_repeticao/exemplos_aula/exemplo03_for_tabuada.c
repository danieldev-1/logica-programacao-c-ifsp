/* EXERCÍCIO DE FIXAÇÃO:
Desenvolver um programa que peça um número ao usuário e 
exiba a tabuada de 1 a 10 utilizando o laço FOR.
*/

#include <stdio.h>

int main() {
    int numero, i;

    printf("Digite um numero para ver sua tabuada: ");
    scanf("%d", &numero);

    printf("\n--- TABUADA DO %d ---\n", numero);

    // O laço vai rodar exatamente 10 vezes
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, (numero * i));
    }

    printf("--------------------\n");

    return 0;
}