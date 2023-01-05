using System;
using System.Globalization; // formata os valores para en-us (.)

class URI {
    static void Main() {
        double A, B, C, MED;

        A = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);
        B = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);
        C = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);

        MED = ((A*2) + (B*3) + (C*5)) / 10;

        Console.WriteLine("MEDIA = " + MED.ToString("0.0", System.Globalization.CultureInfo.InvariantCulture));
    }
}