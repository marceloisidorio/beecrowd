using System;

class URI {
    static void Main() {
        string[] valores = Console.ReadLine().Split(' ');
            double A = double.Parse(valores[0]);
            double B = double.Parse(valores[1]);
            double C = double.Parse(valores[2]);

        double aux = 0; // variável auxiliar

        if(A < B) {
            aux = A;
            A = B;
            B = aux;
        }
        if(A < C) { // ordenação dos valores
            aux = A;
            A = C;
            C = aux;
        }
        if(B < C) {
            aux = B;
            B = C;
            C = aux;
        }
        
        double I = A*A;
        double J = B*B; // atribuição dos quadrados
        double K = C*C;

        if(A >= B+C) {
		    Console.WriteLine("NAO FORMA TRIANGULO");
		
        } else {
            if(I == J+K) {
                Console.WriteLine("TRIANGULO RETANGULO");
            }
            
            if(I > (J+K)) {
                Console.WriteLine("TRIANGULO OBTUSANGULO");
            
            }
            
            if(I < J+K) {
                Console.WriteLine("TRIANGULO ACUTANGULO");
            
            }
            
            if(A == B && B == C) {
                Console.WriteLine("TRIANGULO EQUILATERO");
            
            } else if(A == B || B == C || C == A) {
                Console.WriteLine("TRIANGULO ISOSCELES");
            }

        }
    }
}