using System;
using System.Globalization; // formata os valores para en-us (.)

class URI {
    static void Main() {
        string nome;
        double salFixo, totalVendas, salTotal;

        nome = Console.ReadLine();
        salFixo = Convert.ToDouble(Console.ReadLine(), CultureInfo.InvariantCulture);
        totalVendas = Convert.ToDouble(Console.ReadLine(), CultureInfo.InvariantCulture);

        salTotal = (totalVendas*0.15) + salFixo;

        Console.WriteLine("TOTAL = R$ " + salTotal.ToString("0.00", System.Globalization.CultureInfo.InvariantCulture));
    }
}