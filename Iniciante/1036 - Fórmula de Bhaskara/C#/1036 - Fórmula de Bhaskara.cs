using System;
using System.Globalization; // formata os valores para en-us (.)

class URI {
    static void Main() {
        string[] calculo = Console.ReadLine().Split(' ');
            double A = double.Parse(calculo[0]);
            double B = double.Parse(calculo[1]);
            double C = double.Parse(calculo[2]);

        double delta = Math.Pow(B, 2)-4*A*C;
        double x1 = (-B+Math.Sqrt(delta))/(2*A);
        double x2 = (-B-Math.Sqrt(delta))/(2*A);

        if(A == 0 || delta < 0) {
            Console.WriteLine("Impossivel calcular");
        } else {
            Console.WriteLine("R1 = " + x1.ToString("0.00000", System.Globalization.CultureInfo.InvariantCulture));

            Console.WriteLine("R2 = " + x2.ToString("0.00000", System.Globalization.CultureInfo.InvariantCulture));
        }
    }
}