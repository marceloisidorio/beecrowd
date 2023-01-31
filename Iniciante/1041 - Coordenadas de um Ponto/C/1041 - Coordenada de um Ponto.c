#include <stdio.h>

int main() {
	float p1, p2;
	
	// entrada
	scanf("%f %f", &p1, &p2);
	
	// saída
	if(p1==0 && p2== 0) { // origem
		printf("Origem\n");
	
	} else if(p1>0 && p2>0) {
		printf("Q1\n");
		
	} else if(p1<0 && p2>0) {
		printf("Q2\n");
		
	} else if(p1<0 && p2<0) {
		printf("Q3\n");
		
	} else if(p1>0 && p2<0) {
		printf("Q4\n");
		
	} else if(p1==0 && p2!=0) { // sobre a reta
		printf("Eixo Y\n");
		
	} else if(p1!=0 && p2==0) {
		printf("Eixo X\n");
		
	}
	
	return 0;
}