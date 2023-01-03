#include <stdio.h>
#include <math.h> // biblioteca matemática

int main() {
	
	double A, B, C, delta, x1, x2; // declaração de variáveis
	
	scanf("%lf %lf %lf", &A, &B, &C); // recebe dados de entrada
	
	delta = pow(B, 2)-4*A*C;
	x1 = (-B+sqrt(delta))/(2*A); // realiza cálculos
	x2 = (-B-sqrt(delta))/(2*A);
	
	system("cls"); // limpa a tela
	
	if(A == 0 || delta < 0) { // condicional
		printf("Impossivel calcular\n");
	} else {
		printf("R1 = %.5lf\nR2 = %.5lf\n", x1, x2);	
	}
	
	return 0;
}
