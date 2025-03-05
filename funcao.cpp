#include <iostream> // Inclui a biblioteca de entrada e saída padrão
using namespace std; // Usa o namespace padrão para evitar escrever std:: antes de cada comando

// Função que soma dois números inteiros
int soma(int a, int b){
    return a + b; // Retorna a soma dos dois números
}

int main(){
    // Imprime o resultado da soma de 10 e 50
    cout << "Soma: " << soma(10, 50) << endl;
    return 0; // Retorna 0 indicando que o programa terminou com sucesso
}