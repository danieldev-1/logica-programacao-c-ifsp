// Exemplo de Uso de Constante
#include <stdio.h>

// Forma 1: Usando diretiva de pré-processamento
#define PI 3.14159

int main() {
    // Forma 2: Usando a palavra reservada const
    const float GRAVIDADE = 9.81;

    printf("O valor de PI eh: %f\n", PI);
    printf("A aceleracao da gravidade eh: %f m/s2\n", GRAVIDADE);

    return 0;
}