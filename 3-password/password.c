#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool verifica_digitos(char senha[99], int tamanho);
bool verifica_maiusculas(char senha[99], int tamanho);
bool verifica_minusculas(char senha[99], int tamanho);
bool verifica_caracteres(char senha[99], int tamanho);

int main(void) {
    const int tamanho_minimo = 8;

    char senha[99];

    printf("insira senha: ");
    scanf("%s", senha);

    int tamanho = strlen(senha);

    // checa se a senha tem o tamanho minimo
    if (strlen(senha) < tamanho_minimo) {
        printf("erro: minimo 8 caracteres");
        return 1;
    }

    // checa se a senha possui digitos numericos
    if (!verifica_digitos(senha, tamanho)) {
        printf("erro: a sua senha precisa um digito numerico");
        return 2;
    }

    // checa se a senha possui letras maiusculas
    if (!verifica_maiusculas(senha, tamanho)) {
        printf("erro: a sua senha precisa ter uma letra maiuscula");
        return 3;
    }

    // checa se a senha possui letras minusculas
    if (!verifica_minusculas(senha, tamanho)) {
        printf("erro: a sua senha precisa ter uma letra minuscula.");
        return 4;
    }

    // checa se a senha possui caracteres especiais
    if (!verifica_caracteres(senha, tamanho)) {
        printf("erro: a sua senha precisa ter um caracter especial");
        return 5;
    }

    // caso a senha cumpra todos os requisitos, imprime a mensagem de sucesso
    printf("senha forte cadastrada");
    return 0;
}

/* funcoes */

bool verifica_digitos(char senha[99], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (isdigit(senha[i])) {
            return true;
        }
    }
    return false;
}

bool verifica_maiusculas(char senha[99], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (isupper(senha[i])) {
            return true;
        }
    }

    return false;
}

bool verifica_minusculas(char senha[99], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if(islower(senha[i])) {
            return true;
        }
    }
    return false;
}

bool verifica_caracteres(char senha[99], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if(ispunct(senha[i])) {
            return true;
        }
    }
    return false;
}

/* https://github.com/backend-br/desafios/blob/master/secure-password/PROBLEM.md */