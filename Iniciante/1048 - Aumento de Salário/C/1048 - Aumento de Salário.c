#include <stdio.h>


int main() { // variáveis
	float num, reajuste, salario;
	
	scanf("%f", &num); // entrada
	
	if(num > 0 && num <=400) { // definindo valor do reajuste
		reajuste = 0.15;
		
	} else if(num > 400 && num <= 800) {
		reajuste = 0.12;
		
	} else if(num > 800 && num <= 1200) {
		reajuste = 0.10;
		
	} else if(num > 1200 && num <= 2000) {
		reajuste = 0.07;
		
	} else if(num > 2000) {
		reajuste = 0.04;
	}
	
	// cálculo do salário + reajuste
	salario = num + (num*reajuste);
	
	system("cls"); // limpa a tela
	
	// saída
	printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.0f %%\n", salario, reajuste*num, reajuste*100);
	
	return 0;
}