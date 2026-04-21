/* EXEMPLO PRÁTICO:
O laço while é perfeito para situações onde não sabemos quantas vezes a 
repetição vai ocorrer (ex: o usuário pode errar a senha 1 ou 50 vezes).
O laço continua enquanto a senha digitada for diferente da correta.
*/

#include <stdio.h>

int main() {
    int senha_digitada = 0;
    const int SENHA_CORRETA = 1234;

    printf("Digite a senha (4 numeros): ");
    scanf("%d", &senha_digitada);

    // Enquanto a senha estiver errada, repete o bloco!
    while (senha_digitada != SENHA_CORRETA) {
        printf("Senha Invalida! Tente novamente: ");
        scanf("%d", &senha_digitada); // Atualização da variável por nova leitura
    }

    printf("Acesso Permitido! Bem-vindo.\n");

    return 0;
}