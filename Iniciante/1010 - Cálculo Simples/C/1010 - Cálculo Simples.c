#include <stdio.h>
 
int main() {
	int cod01, cod02, quant01, quant02;
	float valor01, valor02, total; // variáveis
	
	scanf("%d %d %f", &cod01, &quant01, &valor01);
	scanf("%d %d %f", &cod02, &quant02, &valor02); // recebe os dados de entrada
	
	total = (quant01*valor01)+(quant02*valor02); // realiza o cálculo
	
	printf("VALOR A PAGAR: R$ %.2f\n", total); // apresenta o resultado
    
	return 0;
}
