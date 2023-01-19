#include <stdio.h>
#include <math.h> // biblioteca matemática

int main() {
	double valor, resto;
	
	scanf("%lf", &valor); // entrada
	
	// atribuição de valores das notas
	int n100 = floor(valor/100);
	resto = fmod(valor, 100);
	
	int n50 = floor(resto/50);
	resto = fmod(resto, 50);
	
	int n20 = floor(resto/20);
	resto = fmod(resto, 20);
	
	int n10 = floor(resto/10);
	resto = fmod(resto, 10);
	
	int n5 = floor(resto/5);
	resto = fmod(resto, 5);
	
	int n2 = floor(resto/2);
	resto = fmod(resto, 2);
	
	// atribuição de valores das moedas
	int n1 = floor(resto/1);
	resto = fmod(resto, 1);
	
	int n050 = floor(resto/0.50);
	resto = fmod(resto, 0.50);
	
	int n025 = floor(resto/0.25);
	resto = fmod(resto, 0.25);
	
	int n010 = floor(resto/0.10);
	resto = fmod(resto, 0.10);
	
	int n005 = floor(resto/0.05);
	resto = fmod(resto, 0.05);
	
	int n001 = floor(resto/0.01);

	// saída
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", n100);
	printf("%d nota(s) de R$ 50.00\n", n50);
	printf("%d nota(s) de R$ 20.00\n", n20);
	printf("%d nota(s) de R$ 10.00\n", n10);
	printf("%d nota(s) de R$ 5.00\n", n5);
	printf("%d nota(s) de R$ 2.00\n", n2);
	
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", n1);
	printf("%d moeda(s) de R$ 0.50\n", n050);
	printf("%d moeda(s) de R$ 0.25\n", n025);
	printf("%d moeda(s) de R$ 0.10\n", n010);
	printf("%d moeda(s) de R$ 0.05\n", n005);
	printf("%d moeda(s) de R$ 0.01\n", n001);
	
	return 0;
}
