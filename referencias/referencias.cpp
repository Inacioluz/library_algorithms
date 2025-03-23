#include <iostream>  // Biblioteca padrão para entrada e saída
using namespace std;

int main() {
    int x = 5;    // Declara uma variável 'x' e inicializa com 5
    int& ref = x; // Cria uma referência 'ref' que aponta para 'x'

    ref = 10;     // Modifica 'x' através da referência 'ref'

    cout << "Valor de x: " << x << endl;    // Exibe o valor de 'x' (10)
    cout << "Valor de ref: " << ref << endl; // Exibe o valor da referência (10)

    return 0;
}