using System.Globalization;

namespace Exercicios
{

    public class Exercicio3
    {

        public static void executar()
        {

            Console.Clear();

            double result;

            Console.Write("\n\n\nInforme o primeiro número: ");
            double n1 = Convert.ToDouble(Console.ReadLine());

            Console.Write("\n\n\nInforme o segundo número: ");
            double n2 = Convert.ToDouble(Console.ReadLine());

            Console.Write("\n | CÓDIGO   OPERAÇÃO                       |");
            Console.Write("\n | 1 ------ Soma                           |");
            Console.Write("\n | 2 ------ Subtração (o maior pelo menor) |");
            Console.Write("\n | 3 ------ Multiplicação                  |");
            Console.Write("\n | 4 ------ Divisão                        |");
            Console.Write("\n Agora, digite uma das opções do menu:");

            int opcao = Convert.ToInt32(Console.ReadLine());

            Console.Clear();

            switch (opcao)
            {
                case 1:

                    Console.WriteLine("\nO resultado é: " + (n1 + n2).ToString("0.00", CultureInfo.CurrentCulture));

                    break;
                case 2:

                    result = Math.Max(n1, n2) - Math.Min(n1 , n2);

                    Console.WriteLine("\nO resultado é: " + result.ToString("0.00", CultureInfo.CurrentCulture));

                    break;
                case 3:

                    Console.WriteLine("\nO resultado é: " + (n1 * n2).ToString("0.00", CultureInfo.CurrentCulture));

                    break;
                case 4:

                    if(n2 != 0) {

                        result = n1 / n2;

                        Console.WriteLine("\nO resultado é: " + result.ToString("0.00", CultureInfo.CurrentCulture));

                    } else {

                        Console.WriteLine("\nNão há como dividir um número por zero");

                    }

                    break;
                default:

                    Console.WriteLine(" Opção inválida! Tente novamente.");

                    break;
            }

        }

    }

}