//10
#include <stdio.h>

int main() {
    int numeros[10];
    int i, soma = 0;
    float media;

    for(i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    media = (float) soma / 10;

    printf("\nA média dos números digitados é: %.2f\n", media);

    return 0;
}