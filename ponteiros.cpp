#include <iostream>  // Biblioteca para entrada e saída
#include <locale>    // Biblioteca para configuração de localização
using namespace std;

int main() {
    setlocale(LC_ALL, "");
    int num = 10;     // Declara uma variável inteira chamada 'num' e inicializa com 10
    int* ptr = &num;  // Cria um ponteiro 'ptr' que armazena o endereço de 'num'

    cout << "Valor de num: " << num << endl;          // Exibe o valor de 'num'
    cout << "Endereco de num: " << &num << endl;      // Exibe o endereço de 'num'
    cout << "Valor armazenado no ponteiro: " << ptr << endl;  // Exibe o endereço armazenado no ponteiro
    cout << "Valor apontado pelo ponteiro: " << *ptr << endl; // Exibe o valor armazenado no endereço apontado por 'ptr'

    *ptr = 20; //Modica o valor de 'num' através do ponteiro
    cout << "Novo valor de num: " << num << endl;

    return 0;
}
