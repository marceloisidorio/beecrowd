using System;
using System.Globalization; // formata os valores para en-us (.)

class URI {
    static void Main() {
        double valorHora, salario;
        int numFuncionario, numHoras;
        
        numFuncionario = Convert.ToInt32(Console.ReadLine());
        numHoras = Convert.ToInt32(Console.ReadLine());
        valorHora = Convert.ToDouble(Console.ReadLine(), CultureInfo.InvariantCulture);

        salario = numHoras*valorHora;

        Console.WriteLine("NUMBER = " + numFuncionario);
        Console.WriteLine("SALARY = U$ " + salario.ToString("0.00", System.Globalization.CultureInfo.InvariantCulture));
    }
}