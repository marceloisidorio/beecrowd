using System;
using System.Globalization; // formata os valores para en-us (.)

class URI {
    static void Main() {
        double valor=0, valorFinal; // variáveis

        string[] op = Console.ReadLine().Split(' ');
            int cod = Int32.Parse(op[0]); // entrada de valores na mesma linha
            int quant = Int32.Parse(op[1]);


        if(cod == 1) { // condicional
            valor = 4.00;

        } else if(cod == 2) {
            valor = 4.50;

        } else if(cod == 3) {
            valor = 5.00;

        } else if(cod == 4) {
            valor = 2.00;

        } else if(cod == 5) {
            valor = 1.50;

        }

        valorFinal = quant*valor; // operação 

        // saída
        Console.WriteLine("Total: R$ " + valorFinal.ToString("0.00", System.Globalization.CultureInfo.InvariantCulture));
    }
}