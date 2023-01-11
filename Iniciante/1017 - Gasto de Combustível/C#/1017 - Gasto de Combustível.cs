using System;
using System.Globalization; // formata os valores para en-us (.)

class URI {
    static void Main() {
        int tempo = Int32.Parse(Console.ReadLine());
        int velocidade = Int32.Parse(Console.ReadLine());

        double litros = (double) (velocidade*tempo)/12; // conversão de int para double

        Console.WriteLine(litros.ToString("0.000", System.Globalization.CultureInfo.InvariantCulture));
    }
}