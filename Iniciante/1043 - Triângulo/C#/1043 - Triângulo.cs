using System;
using System.Globalization; // formata os valores para en-us (.)

class URI {
    static void Main() {
        // separa os valores para cada posição do array
        string[] entrada = Console.ReadLine().Split(' ');
            float A = float.Parse(entrada[0], CultureInfo.InvariantCulture);
            float B = float.Parse(entrada[1], CultureInfo.InvariantCulture);
            float C = float.Parse(entrada[2], CultureInfo.InvariantCulture);

        /* REGRA DO TRIÂNGULO
	
	        | b - c | < a < b + c
	        | a - c | < b < a + c
	        | a - b | < c < a + b
	
	    */

        if(Math.Abs(B-C)<A && A<(B+C)) {
            if(Math.Abs(A-C)<B && B<(A+C)) {
                if(Math.Abs(A-B)<C && C<(A+B)) { // triângulo
                    float perimetro = A+B+C;
                    Console.WriteLine("Perimetro = " + perimetro.ToString("F1", CultureInfo.InvariantCulture));
                }
            }
        } else { // trapézio
            float area = ((A+B)*C)/2;
            Console.WriteLine("Area = " + area.ToString("F1", CultureInfo.InvariantCulture));
        }
    }
}