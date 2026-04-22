/* Faça um algoritmo para ler um vetor com 10 elementos e inverter a 
   posição destes elementos, de tal modo que o primeiro elemento 
   venha a ser o último depois da inversão. */

#include <stdio.h>

int main() {
    int numeros[10];
    int invertido[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }

    /* A cada repeticao, i comeca em 0 e vai ate 9
       uso o [9 - i] para pegar os elementos de tras pra frente(invertido)
       quando i = 0 pego o numeros[9] que e o ultimo elemento do vetor
       quando i = 1 pego o numeros[8] que e o penultimo
       e assim por diante, ate i = 9 que pega numeros[0], primeiro elemento
       dessa forma o vetor invertido fica com os elementos ao contrario */
    for (i = 0; i < 10; i++) {
        invertido[i] = numeros[9 - i];
    }

    printf("\nVetor invertido:\n");
    for (i = 0; i < 10; i++) {
        printf("%d\n", invertido[i]);
    }

    return 0;
}