//1. Crie um programa que pede ao usuário seu nome e idade e depois imprime uma mensagem de saudação.
#include <iostream>

int main() {
    char nome[100];
    int idade;

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Olá, %s! Você tem %d anos.\n", nome, idade);

    return 0;
}