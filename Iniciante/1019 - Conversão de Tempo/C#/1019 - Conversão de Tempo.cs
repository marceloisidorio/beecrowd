using System;

class URI {
    static void Main() {
        int tempo = Int32.Parse(Console.ReadLine());

        int horas = tempo/3600;
        int minutos = (tempo%3600)/60; // resto de horas dividido por minutos
        int segundos = (tempo%3600)%60; // resto de minutos

        Console.WriteLine("{0}:{1}:{2}", horas, minutos, segundos);

    }
}