#include <stdio.h>
 
int main() {
    int num, horas;
    float valor;
    
    scanf("%d %d %f", &num, &horas, &valor); // recebe os valores
    
	printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2f\n", horas*valor); // apresenta o resultado + operação
    
	return 0;
}
