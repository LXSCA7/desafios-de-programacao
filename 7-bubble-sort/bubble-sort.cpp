#include <ctime>
#include <iostream>

using namespace std;

void bubble_sort(int lista[], int tamanho);

int main() {    
    const int TAMANHO_NUMEROS = 30;
    const int MAX_NUMEROS = 300;

    int lista[30];

    // gera semente para garantir que os numeros serao diferentes a cada execucao do codigo
    srand(time(nullptr));

    // gera numeros aleatorios
    for (int m = 0; m < TAMANHO_NUMEROS; m++) {
        lista[m] = rand() % MAX_NUMEROS + 1;
    } 

    cout << "lista desordenada: ";
    for (int l = 0; l < TAMANHO_NUMEROS; l++) {
        cout << lista[l] << " ";
    }
    cout << endl << endl; 

    bubble_sort(lista, TAMANHO_NUMEROS);

    cout << "lista ordenada: ";
    for (int k = 0; k < TAMANHO_NUMEROS; k++) {
        cout << lista[k] << " ";
    }

    return 0;
}

void bubble_sort(int lista[], int tamanho) {
    int num_temp;
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if(lista[i] > lista[j]) {
                num_temp = lista[i];
                lista[i] = lista[j];
                lista[j] = num_temp;
            }
        }
    }
}