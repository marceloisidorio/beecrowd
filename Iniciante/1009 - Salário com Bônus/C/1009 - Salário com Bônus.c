#include <stdio.h>
 
int main() {
    char nome[10]; // vari�veis
    double salario, vendas, total;
    
    scanf("%s %lf %lf", &nome, &salario, &vendas); // recebe os dados de entrada
    
    total = salario+(0.15*vendas); // realiza o c�lculo
    
    printf("TOTAL = R$ %.2f\n", total); // apresenta o resultado
    
	return 0;
}
