using System;
using System.Globalization; // formata os valores para en-us (.)

class URI {
    static void Main() {
        // variável auxiliar
        double reajuste = 0;
        // entrada do salário inicial
        double sal_ini = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);

        // verifica o percentual de reajuste
        if(sal_ini > 0 && sal_ini <= 400) {
            reajuste = 0.15;

        } else if(sal_ini > 400 && sal_ini <= 800) {
            reajuste = 0.12;

        } else if(sal_ini > 800 && sal_ini <= 1200) {
            reajuste = 0.10;

        } else if(sal_ini > 1200 && sal_ini <= 2000) {
            reajuste = 0.07;

        } else if(sal_ini > 2000) {
            reajuste = 0.04;

        }

        // cálculo do salário + reajuste
        double sal_final = sal_ini + (sal_ini*reajuste);

        // saída
        Console.WriteLine("Novo salario: " + sal_final.ToString("0.00", System.Globalization.CultureInfo.InvariantCulture));
        Console.WriteLine("Reajuste ganho: " + (sal_ini*reajuste).ToString("0.00", System.Globalization.CultureInfo.InvariantCulture));
        Console.WriteLine("Em percentual: {0} %", reajuste*100);
        

    }
}