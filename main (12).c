#include <stdio.h>

int main() {
    int numero, maior, menor;
    
    printf("Digite um número inteiro (ou um número negativo para sair): ");
    scanf("%d", &numero);
    
    if (numero < 0) {
        printf("Nenhum número foi lido.\n");
        return 0;
    }
    
    maior = numero;
    menor = numero;
    
    while (numero >= 0) {
        if (numero > maior) {
            maior = numero;
        }
        if (numero < menor) {
            menor = numero;
        }
        printf("Digite outro número inteiro (ou um número negativo para sair): ");
        scanf("%d", &numero);
    }
    
    printf("O maior número lido foi: %d\n", maior);
    printf("O menor número lido foi: %d\n", menor);
    
    return 0;
}