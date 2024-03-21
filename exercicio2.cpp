//2. Crie um programa que pede ao usuário dois números e depois imprime a soma desses números.
#include <iostream>

int main() {
    int num1, num2;
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    int soma = num1 + num2;
    printf("A soma dos números é: %d\n", soma);
    return false;
}