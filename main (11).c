//9
#include <stdio.h>

int main() {
    int escolha, quantidade;
    float valor_total = 0;
    
    printf("Bem-vindo à loja de frutas!\n");
    printf("Escolha a fruta desejada: \n");
    printf("1 => ABACAXI – 5,00 a unidade\n");
    printf("2 => MAÇA – 1,00 a unidade\n");
    printf("3 => PERA – 4,00 a unidade\n");
    printf("Digite 0 para sair.\n");
    
    while (1) {
        printf("Opção escolhida: ");
        scanf("%d", &escolha);
        
        if (escolha == 0) {
            break;
        }
        
        switch (escolha) {
            case 1:
                printf("Você escolheu ABACAXI. Qual a quantidade desejada? ");
                scanf("%d", &quantidade);
                valor_total += 5.0 * quantidade;
                break;
            case 2:
                printf("Você escolheu MAÇA. Qual a quantidade desejada? ");
                scanf("%d", &quantidade);
                valor_total += 1.0 * quantidade;
                break;
            case 3:
                printf("Você escolheu PERA. Qual a quantidade desejada? ");
                scanf("%d", &quantidade);
                valor_total += 4.0 * quantidade;
                break;
            default:
                printf("Opção inválida. Por favor, escolha novamente.\n");
        }
        
        printf("O valor total da sua compra é: R$%.2f\n", valor_total);
    }
    
    printf("O valor total da sua compra é: R$%.2f\n", valor_total);
    printf("Obrigado pela compra!\n");
    
    return 0;
}