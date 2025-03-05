#include <iostream> // Inclui a biblioteca de entrada e saída padrão
using namespace std; // Usa o namespace padrão para evitar escrever std:: antes de cada comando

// Função recursiva que calcula o fatorial de um número inteiro
int fatorial(int n) {
    if(n == 0) return 1; // Caso base: o fatorial de 0 é 1
    return n * fatorial(n - 1); // Chamada recursiva: n * fatorial de (n-1)
}

int main() {
    // Imprime o resultado do fatorial de 5
    cout << "Fatorial de 5: " << fatorial(5) << endl;
    return 0; // Retorna 0 indicando que o programa terminou com sucesso
}