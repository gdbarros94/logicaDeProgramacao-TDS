//3. Crie um programa que pede ao usuário para digitar 
#include <iostream>

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    int dobro = numero * 2;
    printf("O dobro do número digitado é: %d\n", dobro);
    return false;
}
