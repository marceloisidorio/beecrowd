#include <stdio.h>

int main() {
	int num[5];
	int i, contPar=0, contImp=0, contPos=0, contNeg=0;

	// entrada
	for(i=0; i<5; i++) {
		scanf("%d", &num[i]);
		
		if(num[i]%2 == 0) { // conta números pares e ímpares
			contPar++;
		} else if(num[i] != 0) {
			contImp++;
		}
		
		if(num[i] > 0) { // conta números positivos e negativos
			contPos++;
		} else if(num[i] < 0) {
			contNeg++;
		}
	}
	
	// saída
	printf("%d valor(es) par(es)\n", contPar);
	printf("%d valor(es) impar(es)\n", contImp);
	printf("%d valor(es) positivo(s)\n", contPos);
	printf("%d valor(es) negativo(s)\n", contNeg);
	
	return 0;
}