#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int& ref = a; // ref é uma referência para a

    cout << "Valor de a: " << a << endl;
    cout << "Valor da referência ref: " << ref << endl;

    ref = 20; // Alterando ref, também alteramos a
    cout << "Novo valor de a: " << a << endl;

    return 0;
}