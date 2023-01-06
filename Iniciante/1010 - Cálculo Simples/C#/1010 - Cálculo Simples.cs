using System;
using System.Globalization; // formata os valores para en-us (.)

class URI {
    static void Main() {
        string[] compra = Console.ReadLine().Split(' ');
        int CodProd = Int32.Parse(compra[0]);
        int QtdProd = Int32.Parse(compra[1]);
        double ValorProd = double.Parse(compra[2], CultureInfo.InvariantCulture);

        string[] compra1 = Console.ReadLine().Split(' '); // separa os valores para cada posição do array
        int CodProd1 = Int32.Parse(compra1[0]);
        int QtdProd1 = Int32.Parse(compra1[1]);
        double ValorProd1 = double.Parse(compra1[2], CultureInfo.InvariantCulture);

        double total = (QtdProd * ValorProd) + (QtdProd1 * ValorProd1);

        Console.WriteLine("VALOR A PAGAR: R$ " + total.ToString("0.00", System.Globalization.CultureInfo.InvariantCulture));
    }
}