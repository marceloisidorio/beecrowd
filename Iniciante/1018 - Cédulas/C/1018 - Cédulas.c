#include <stdio.h>
 
int main() {
	int N, n100, n50, n20, n10, n05, n02, n01; // declaração de variáveis
	
	scanf("%d", &N); // recebe dados de entrada
	
	n100 = N/100; // realiza cálculo
	n50 = (N%100)/50;
	n20 = ((N%100)%50)/20;
	n10 = (((N%100)%50)%20)/10;
	n05 = ((((N%100)%50)%20)%10)/5;
	n02 = (((((N%100)%50)%20)%10)%5)/2;
	n01 = (((((N%100)%50)%20)%10)%5)%2;
	
	system("cls"); // limpa a tela
	printf("%d\n", N);
	printf("%d nota(s) de R$ 100,00\n", n100);
	printf("%d nota(s) de R$ 50,00\n", n50);
	printf("%d nota(s) de R$ 20,00\n", n20);
	printf("%d nota(s) de R$ 10,00\n", n10);
	printf("%d nota(s) de R$ 5,00\n", n05); // apresenta o resultado
	printf("%d nota(s) de R$ 2,00\n", n02);
	printf("%d nota(s) de R$ 1,00\n", n01);
	
	return 0;
}
