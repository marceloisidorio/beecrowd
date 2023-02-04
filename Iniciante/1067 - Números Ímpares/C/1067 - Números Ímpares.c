#include <stdio.h>

int main() {
	int num, i;
	
	// entrada
	scanf("%d", &num);
	
	// saída
	for(i=0; i<num; i++) {
		i = i+1;
		printf("%d\n", i);
	}
	
	return 0;
}