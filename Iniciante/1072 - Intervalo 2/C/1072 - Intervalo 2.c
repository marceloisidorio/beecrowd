#include <stdio.h>

int main() {
	int N, i;
	int in = 0, out = 0;
	
	// entrada
	scanf("%d", &N);
	
	if(N < 10000) {
		int num[N];
		
		for(i=0;i<N;i++) {
			scanf("%d", &num[i]);
			
			if(num[i] >= 10 && num[i] <= 20) { // conta os valores dentro do intervalo
				in++;
				
			} else { // fora do intervalo
				out++;
			}
		}
		
		// saída
		printf("%d in\n%d out\n", in, out);
	}	
	return 0;
}