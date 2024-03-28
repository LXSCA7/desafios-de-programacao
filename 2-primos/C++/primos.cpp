#include <iostream>
using namespace std;

bool checa_primo(int numero);

int main(int argc, char *argv[]) {

    // checa se o usuario seguiu os passos corretamente
    if (argc < 2) {
        cout << "use ./primoscpp [numero]";
        return 1;
    }

    if (argc > 2) {
        cout << "use apenas um numero";
        return 2;
    }
    
    int numero = atoi(argv[1]);

    if (numero < 0) {
        cout << "use apenas numeros positivos";
        return 3;
    }

    // chama a funcao checa_primo para ver se o numero é primo ou nao
    if(checa_primo(numero)) {
        cout << "true";
        return 0;
    }

    cout << "false";
    return 0;
}

bool checa_primo(int numero) {

    int primo = 0;

    // ve quantas vezes o numero pode ser dividido de forma inteira
    for (int i = 1; i < numero + 1; i++) {
        if (numero % i == 0) {
            primo++;
        }
    }

    // checa a quantidade de vezes q o numero foi dividido
    if (primo == 2) {
        return true;
    }

    return false;
}