#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

bool checa_numero(char *digito);

int main(int argc, char *argv[]) {

    // verificando se o codigo foi iniciado corretamente
    if (argc > 2) {
        printf("ERRO: use apenas um numero");
        return 2;
    }
    
    if (argc != 2) {
        printf("ERRO: use ./reverse [NUMERO]");
        return 1;
    }
    
    if (!checa_numero(argv[1])) {
        printf("ERRO: use apenas caracteres numericos\n");
        return 3;
    }

    // verifica se o numero inserido possui apenas caracteres numericos
    int quantidade = strlen(argv[1]);
    int numero = atoi(argv[1]);


    // separa o numero por digitos em um array
    int digito[99];

    for (int i = 0; i < quantidade; i++) {
        digito[i] = numero % 10;
        numero /= 10;
    }

    // imprime o numero ao contrario
    for (int j = 0; j < strlen(argv[1]); j++) {
        printf("%i", digito[j]);
    }
}

bool checa_numero(char *digito) {
    for (int i = 0; i < strlen(digito); i++) {
        if (!isdigit(digito[i])) {
            return false;
        }
    }
    return true;
}