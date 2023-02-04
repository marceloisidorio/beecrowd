#include <stdio.h>

int main() {
	int i, contador=0;
	float num[6];

	for(i=0; i<6; i++) {
		scanf("%f", &num[i]);
		
		if(num[i] > 0) {
			contador = contador + 1;
		}
	}
	
	printf("%d valores positivos\n", contador);
	return 0;
}