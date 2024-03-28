#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool checa_primo(int numero);

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("ERRO: use ./primos [NUMERO]\n");
        return 1;
    }

    if (argc > 2) {
        printf("ERRO: use apenas um numero.");
        return 2;
    }

    int numero = atoi(argv[1]);

    if (checa_primo(numero)) {
        printf("true");
        return 0;
    }

    printf("false");
    return 0;
}

bool checa_primo(int numero) {
    int soma = 0;

    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            soma++;
        }
    }

    if (soma == 2) {
        return true;
    }

    return false;
}
