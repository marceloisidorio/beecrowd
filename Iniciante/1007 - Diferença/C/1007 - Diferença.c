#include <stdio.h>
 
int main() {
    int A, B, C, D, DIF, i;

	scanf("%d %d %d %d", &A, &B, &C, &D); // recebe os valores
	
    DIF = (A*B)-(C*D); // realiza o cálculo

    printf("DIFERENCA = %d\n", DIF); // apresenta o resultado
    
	return 0;
}
