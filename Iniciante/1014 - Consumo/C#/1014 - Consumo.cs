using System;
using System.Globalization; // formata os valores para en-us (.)

class URI {
    static void Main() {
        int X = Int32.Parse(Console.ReadLine());
        double Y = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);

        double CM = X/Y;

        Console.WriteLine(CM.ToString("0.000", System.Globalization.CultureInfo.InvariantCulture) + " km/l");
    }
}