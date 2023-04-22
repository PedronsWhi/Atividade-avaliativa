#include <stdio.h>

int main() {
    int n, i, termo_anterior = 0, termo_atual = 1, proximo_termo;
    
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
    if (n == 0) {
        printf("O enésimo termo da sequência de Fibonacci é: %d\n", termo_anterior);
    } else if (n == 1) {
        printf("O enésimo termo da sequência de Fibonacci é: %d\n", termo_atual);
    } else {
        for (i = 2; i <= n; i++) {
            proximo_termo = termo_anterior + termo_atual;
            termo_anterior = termo_atual;
            termo_atual = proximo_termo;
        }
        
        printf("O enésimo termo da sequência de Fibonacci é: %d\n", termo_atual);
    }
    
    return 0;
}