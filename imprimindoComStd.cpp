#include <iostream>

int main() {
    int numero;

    // Solicita ao usuário para digitar um número
    std::cout << "Digite um número: ";
    
    // Lê o número digitado pelo usuário
    std::cin >> numero;

    // Imprime o número digitado pelo usuário
    std::cout << "Você digitou: " << numero << std::endl;

    return 0;
}