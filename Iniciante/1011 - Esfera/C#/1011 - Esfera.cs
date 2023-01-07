using System;
using System.Globalization; // formata os valores para en-us (.)

class URI {
    static void Main() {
        double pi = 3.14159;
        double raio = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);

        double volume = (4.0/3.0)*pi*Math.Pow(raio, 3);

        Console.WriteLine("VOLUME = " + volume.ToString("0.000", System.Globalization.CultureInfo.InvariantCulture));
    }
}