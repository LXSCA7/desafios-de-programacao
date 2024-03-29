#include <iostream>

using namespace std;

int primeira_verificacao(long long cpf);
int segunda_verificacao(long long cpf);

int main() {
    long long num_cpf;
    const int tamanho = 11;
    int digito[11];

    // usuario insere cpf
    cout << "insira cpf [somente numeros]: ";
    cin >> num_cpf;

    long long cpf_separado = num_cpf;

    // CPF separado em um array
    for (int i = tamanho -1; i >= 0; i--) {
        digito[i] = cpf_separado % 10;
        cpf_separado /= 10;
    }

    if (primeira_verificacao(num_cpf) != digito[9] || segunda_verificacao(num_cpf) != digito[10]) {
        cout << "erro: cpf invalido";
        return 1;
    }

    cout << "cpf valido";
    return 0;
}

int primeira_verificacao(long long cpf) {
    int tamanho = 9;
    int digito[9];

    int tamanho2[9] {0, 1, 2, 3, 4, 5, 6, 7, 8};

    cpf /= 100;

    for (int i = tamanho -1; i >= 0; i--) {
        digito[i] = cpf % 10;
        cpf /= 10;
    }

    int soma = 0;

    for (int j = 0; j < tamanho; j++) {
        digito[j] *= j + 1;
        soma += digito[j];
    }

    int verificador = soma % 11;
    return verificador;
}

int segunda_verificacao(long long cpf) {
    int tamanho = 10;
    int digito[10];

    int tamanho2[10] {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    cpf /= 10;

    for (int i = tamanho -1; i >= 0; i--) {
        digito[i] = cpf % 10;
        cpf /= 10;
    }

    int soma = 0;

    for (int j = 0; j < tamanho; j++) {
        digito[j] *= j;
        soma += digito[j];
    }

    int verificador = soma % 11;
    return verificador;
}