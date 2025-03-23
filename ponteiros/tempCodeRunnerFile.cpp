#include <iostream>

using namespace std;

int main() {
    int x = 10;
    int* prt = &x;
    
    cout << "Valor de X:" << x << endl;
    cout << "Endereço de X: " << &x << endl; 
    
    cout << "Valor armazenado no ponteiro X: " << prt << endl;
    cout << "Valor apontado pelo ponteiro (*prt) " << *prt << endl;

    *prt = 20; //Modica o valor de 'x' através do ponteiro

    cout << "Novo valor de x: " << x << endl;

    return 0;
}