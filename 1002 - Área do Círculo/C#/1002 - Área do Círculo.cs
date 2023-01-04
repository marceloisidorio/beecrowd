using System;
using System.Globalization; // formata os valores para en-us (.)

class URI {
    static void Main() {
        double raio, area;
        double pi = 3.14159;

        raio = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);
        area = Math.Pow(raio, 2)*pi; // Math.Pow(base, expoente)

        Console.WriteLine("A=" + area.ToString("0.0000", System.Globalization.CultureInfo.InvariantCulture));

    }
}