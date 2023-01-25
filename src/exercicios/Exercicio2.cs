

using System.Globalization;

namespace Exercicios {

    public class Exercicio2 {

        public static void executar() {

            Console.Clear();

            Console.Write("\n\n\nDigite um número: ");
            double num = Convert.ToDouble(Console.ReadLine());

            string typeNum =  num % 2 == 0 ? "par" : "ímpar";

            Console.WriteLine("\n\n " + num.ToString("0.00", CultureInfo.InvariantCulture) + " é " + typeNum);

        }
        
    }

}