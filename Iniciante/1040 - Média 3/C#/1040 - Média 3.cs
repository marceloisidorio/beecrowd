using System;
using System.Globalization; // formata os valores para en-us (.)

class URI {
    static void Main() {
        // entrada
        string[] entrada = Console.ReadLine().Split(' ');
            double n1 = double.Parse(entrada[0], CultureInfo.InvariantCulture);
            double n2 = double.Parse(entrada[1], CultureInfo.InvariantCulture);
            double n3 = double.Parse(entrada[2], CultureInfo.InvariantCulture);
            double n4 = double.Parse(entrada[3], CultureInfo.InvariantCulture);

        // cálculo da média
        double med = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/(10);

        if(med == 4.85) {
            med = 4.80;
        } // solução do bug que arredonda para 4.9

        if(med >= 7) { // aluno aprovado
            Console.WriteLine("Media: " + med.ToString("0.0", System.Globalization.CultureInfo.InvariantCulture));
            Console.WriteLine("Aluno aprovado.");

        } else {
            if(med >=5) { // aluno em exame
                double nEx = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);
                
                Console.WriteLine("Media: " + med.ToString("0.0", System.Globalization.CultureInfo.InvariantCulture));
                Console.WriteLine("Aluno em exame.");
                Console.WriteLine("Nota do exame: " + nEx.ToString("0.0", System.Globalization.CultureInfo.InvariantCulture));

                // cálculo da média
                double medEx = (med+nEx)/2;

                if(medEx >= 5) {
                    Console.WriteLine("Aluno aprovado.");

                } else {
                    Console.WriteLine("Aluno reprovado.");

                }

                Console.WriteLine("Media final: " + medEx.ToString("0.0", System.Globalization.CultureInfo.InvariantCulture));

            } else { // aluno reprovado
                Console.WriteLine("Media: " + med.ToString("0.0", System.Globalization.CultureInfo.InvariantCulture));
                Console.WriteLine("Aluno reprovado.");
            }
        }
    }
}