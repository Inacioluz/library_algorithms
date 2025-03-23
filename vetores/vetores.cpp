#include <vector>
#include <iostream>

int main() {
    std::vector<int> numero = {1, 2, 3, 4, 5};
    std::vector<int> vazio(10, 0);

    numero.push_back(6);
    numero.pop_back();

    std::cout << numero[0] << " " << numero.at(1) << std::endl;


    return 0;
}