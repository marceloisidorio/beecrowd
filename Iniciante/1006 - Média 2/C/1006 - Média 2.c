#include <stdio.h>
 
int main() {
    double A, B, C, MED;
    
    scanf("%lf %lf %lf", &A, &B, &C); // recebe os valores 
    
	MED = (A*2+B*3+C*5)/10; // realiza o cálculo
    
    printf("MEDIA = %.1f\n", MED); // apresenta o resultado
    
    return 0;
}
