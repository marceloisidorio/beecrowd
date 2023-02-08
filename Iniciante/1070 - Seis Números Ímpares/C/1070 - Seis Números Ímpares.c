#include <stdio.h>

int main() {
	int num, op, i;
	
	// entrada
	scanf("%d", &num);
	
	// saída
	while(i<6) {
		if(num%2 != 0) {
			printf("%d\n", num);
			i++;
		}
		
		num++;
	}
	
	return 0;
}