using System;
using System.Globalization; // formata os valores para en-us (.)

class URI {
    static void Main() {
        double A, B, MED;

        A = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);
        B = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);

        MED = ((A*3.5) + (B*7.5)) / 11;

        Console.WriteLine("MEDIA = " + MED.ToString("0.00000", System.Globalization.CultureInfo.InvariantCulture));
    }
}