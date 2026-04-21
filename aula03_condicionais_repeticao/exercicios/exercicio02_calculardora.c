/* EXERCÍCIO 1: A Calculadora Simples
Problema: Escreva um programa em C que simule uma calculadora básica. 
O programa deve solicitar ao usuário dois números decimais (float) e, 
em seguida, um caractere representando a operação matemática desejada: 
+ (soma), - (subtração), * (multiplicação) ou / (divisão).

Requisitos:
- Utilize a estrutura switch..case para a operação.
- Tratar o caso da divisão por zero.
- Criar um caso default para operadores inválidos.
*/

#include <stdio.h>

int main() {
    float num1, num2;
    char operador;

    printf("=== Calculadora Simples ===\n");

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    // O espaco antes de %c eh necessario para "limpar" o Enter que ficou no teclado
    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);

    switch (operador) {
        case '+':
            printf("Resultado: %.2f\n", num1 + num2);
            break;

        case '-':
            printf("Resultado: %.2f\n", num1 - num2);
            break;

        case '*':
            printf("Resultado: %.2f\n", num1 * num2);
            break;

        case '/':
            if (num2 != 0) {
                printf("Resultado: %.2f\n", num1 / num2);
            } else {
                printf("Erro: nao eh possivel dividir um numero por zero.\n");
            }
            break;

        default:
            printf("Operador invalido.\n");
    }

    return 0;
}
