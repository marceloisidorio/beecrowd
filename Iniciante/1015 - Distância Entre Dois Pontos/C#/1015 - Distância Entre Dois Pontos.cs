using System;
using System.Globalization; // formata os valores para en-us (.)

class URI {
    static void Main() {
        // separa os valores para cada posição do array
        string[] ponto1 = Console.ReadLine().Split(' ');
            double x1 = double.Parse(ponto1[0], CultureInfo.InvariantCulture);
            double y1 = double.Parse(ponto1[1], CultureInfo.InvariantCulture);

        // separa os valores para cada posição do array
        string[] ponto2 = Console.ReadLine().Split(' ');
            double x2 = double.Parse(ponto2[0], CultureInfo.InvariantCulture);
            double y2 = double.Parse(ponto2[1], CultureInfo.InvariantCulture);

        double distancia = Math.Sqrt(Math.Pow((x2-x1), 2) + Math.Pow((y2-y1), 2));

        Console.WriteLine(distancia.ToString("0.0000", System.Globalization.CultureInfo.InvariantCulture));
    }
}