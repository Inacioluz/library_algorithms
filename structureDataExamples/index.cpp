#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <unordered_map>
#include <string>

// 1. Array (Lista)
void exemploArray() {
    // Lista de tarefas do dia
    std::vector<std::string> tarefas = {"comprar pão", "ir ao banco", "estudar"};

    std::cout << "Lista de Tarefas do Dia:\n";
    for (const auto& tarefa : tarefas) {
        std::cout << "- " << tarefa << std::endl;
    }
}

// 2. Pilha (Stack)
void exemploPilha() {
    // Pilha de pratos sujos
    std::stack<std::string> pratos;

    // Adicionando pratos na pilha
    pratos.push("Prato 1");
    pratos.push("Prato 2");
    pratos.push("Prato 3");

    std::cout << "\nPilha de Pratos Sujos (último a entrar é o primeiro a sair):\n";
    // Removendo pratos da pilha (LIFO)
    while (!pratos.empty()) {
        std::cout << "Lavando " << pratos.top() << std::endl;
        pratos.pop();
    }
}

// 3. Fila (Queue)
void exemploFila() {
    // Fila de clientes no supermercado
    std::queue<std::string> fila;

    // Adicionando clientes na fila
    fila.push("Cliente 1");
    fila.push("Cliente 2");
    fila.push("Cliente 3");

    std::cout << "\nFila do Supermercado (primeiro a entrar é o primeiro a sair):\n";
    // Atendendo clientes na ordem que entraram (FIFO)
    while (!fila.empty()) {
        std::cout << "Atendendo " << fila.front() << std::endl;
        fila.pop();
    }
}

// 4. Árvores e Grafos (Árvore Binária Simples)
class Node {
public:
    int valor;
    Node* esquerda;
    Node* direita;

    Node(int val) : valor(val), esquerda(nullptr), direita(nullptr) {}
};

void exemploArvore() {
    // Criando uma árvore binária simples
    Node* raiz = new Node(10);
    raiz->esquerda = new Node(5);
    raiz->direita = new Node(20);
    raiz->esquerda->esquerda = new Node(3);
    raiz->esquerda->direita = new Node(7);

    std::cout << "\nExemplo de Árvore Binária:\n";
    std::cout << "Raiz: " << raiz->valor << ", Esquerda: " << raiz->esquerda->valor << ", Direita: " << raiz->direita->valor << std::endl;
    std::cout << "Subárvore esquerda: " << raiz->esquerda->esquerda->valor << ", " << raiz->esquerda->direita->valor << std::endl;
}

// 5. Hashmaps (Tabelas Hash)
void exemploHashMap() {
    // Agenda telefônica (chave-valor)
    std::unordered_map<std::string, std::string> agenda;
    agenda["João"] = "9999-9999";
    agenda["Maria"] = "8888-8888";
    agenda["Pedro"] = "7777-7777";

    std::cout << "\nAgenda Telefônica (Chave-Valor):\n";
    for (const auto& contato : agenda) {
        std::cout << "Nome: " << contato.first << ", Telefone: " << contato.second << std::endl;
    }
}

int main() {
    // Exemplo de Array (Lista)
    exemploArray();

    // Exemplo de Pilha (Stack)
    exemploPilha();

    // Exemplo de Fila (Queue)
    exemploFila();

    // Exemplo de Árvore (Árvore Binária)
    exemploArvore();

    // Exemplo de HashMap (Tabela Hash)
    exemploHashMap();

    return 0;
}
