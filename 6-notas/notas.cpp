#include <iostream>
using namespace std;

int main() {

    int nota;

    cout << "insira nota: ";

    if (!(cin >> nota) || nota < 0 || nota > 100) {
        cout << "nota invalida. por favor insira novamente\n";
        return 1;
    }
    
    if (nota == 0) {
        cout << "E" << endl;
    } else if (nota > 1 && nota <= 35) {
        cout << "D" << endl;
    } else if (nota > 35 && nota <= 60) {
        cout << "C" << endl; 
    } else if (nota > 60 && nota <= 85) {
        cout << "B" << endl;
    } else {
        cout << "A" << endl; 
    }
    return 0;
}