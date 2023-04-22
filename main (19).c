// numero 1
#include <stdio.h>
int main(void){

int A,B,C,D, produtoAB, produtoCD, diferenca;
  printf("\nDigite o valor de A:");
  scanf("%d", &A);
   printf("\nDigite o valor de B:");
    scanf("%d", &B);
   printf("\nDigite o valor de C:");
    scanf("%d", &C);
   printf("\nDigite o valor de D:");
    scanf("%d", &D);



  produtoAB = A*B;
  produtoCD = C*D;
  diferenca = produtoAB - produtoCD;

   printf("DIFERENÇA = %d\n", diferenca);

  return 0;
}