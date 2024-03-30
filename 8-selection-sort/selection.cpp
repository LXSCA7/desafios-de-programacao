#include <iostream>

using namespace std;

void selectionSort(int lista[], int tamanho);

int main() {
    int lista[] = {27, 13, 12, 16, 21, 3, 6, 7, 8, 94, 14, 5, 94, 95, 64, 0, 77};
    int tamanho = sizeof(lista) / sizeof(lista[0]);

    cout << "lista desordenada: ";
    for (int i : lista) {
        cout << i << " ";
    }

    cout << endl;
    selectionSort(lista, tamanho); // ordena a lista com a função criada

    cout << "lista ordenada: ";
    for (int j: lista) {
        cout << j << " ";
    }
}

void selectionSort(int lista[], int tamanho) {
    int menor_valor, valor_temporario;
    for (int i = 0; i < tamanho; i++) {
        menor_valor = i;
        for (int j = i + 1; j < tamanho; j++) {
            if (lista[menor_valor] > lista[j]) {
                menor_valor = j; // faz a troca com o novo menor valor
            }
        }
        if (menor_valor != i) {
            valor_temporario = lista[i];
            lista[i] = lista[menor_valor];
            lista[menor_valor] = valor_temporario;
        }
    }
}
