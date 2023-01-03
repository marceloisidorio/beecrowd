#include <stdio.h>
 
int main() {
	double A, B, C; // variáveis
	
	scanf("%lf %lf %lf", &A, &B, &C); // recebe os dados de entrada
	
	printf("TRIANGULO: %.3f\n", (A*C)/2);
	printf("CIRCULO: %.3f\n", 3.14159*(C*C));
	printf("TRAPEZIO: %.3f\n", ((A+B)*C)/2);
	printf("QUADRADO: %.3f\n", B*B);
	printf("RETANGULO: %.3f\n", A*B); // apresenta o resultado e realiza os cálculos
	
	return 0;
}
