#include <iostream>
#include <string>

using namespace std;

string reverse(string palavra);

int main(int argc, char *argv[]) {

    // verifica se o usuario inseriu o comando corretamente
    if (argc < 2 || argc > 2) {
        cout << "erro: use ./palindromo [PALAVRA]\n";
        return 1;
    }

    string palavra = argv[1];

    for (char &c : palavra) {
        c = tolower(c);
    }

    int tamanho_palavra = palavra.length();
    string palavra_invertida = reverse(palavra);
    
    if (palavra == reverse(palavra)) {
        cout << "palindromo!\n";
        return 0;
    }

    cout << "nao e palindromo.\n";

    return 0;
}

string reverse(string palavra) {
    int tamanho = palavra.length();
    string palavra_invertida;
    
    for (int i = tamanho - 1; i >= 0; i--) {
        palavra_invertida += palavra[i];
    }
    
    return palavra_invertida;
}