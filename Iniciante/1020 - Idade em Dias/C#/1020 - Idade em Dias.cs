using System;

class URI {
    static void Main() {
        int idade = Int32.Parse(Console.ReadLine());

        int anos = idade/365;
        int meses = (idade%365)/30; // resto de anos dividido por meses
        int dias = (idade%365)%30; // resto de meses 

        Console.WriteLine("{0} ano(s)\n{1} mes(es)\n{2} dia(s)", anos, meses, dias);
    }
}