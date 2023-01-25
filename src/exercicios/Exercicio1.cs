
namespace Exercicios
{
    public class Exercicio1
    {

        public static void executar()
        {

            int opcao;
            double n1, n2, result;

            Console.WriteLine("\n\n1) Somar dois números");
            Console.WriteLine("2) Raiz quadrada de um número");
            Console.Write("\nDigite uma das opções acima:");
            opcao = Convert.ToInt32(Console.ReadLine());

            switch (opcao) {

                case 1:

                    Console.Write("\n\nDigite o primeiro número: ");
                    n1 = Convert.ToDouble(Console.ReadLine());

                    Console.Write("\n\nDigite o segundo número: ");
                    n2 = Convert.ToDouble(Console.ReadLine());

                    result = n1 + n2;

                    Console.WriteLine(String.Format("\n\nA soma dos dois numeros é: {0:0.00}", result));

                    break;
                case 2:

                    Console.Write("\n\nDigite o número: ");
                    n1 = Convert.ToDouble(Console.ReadLine());

                    result = Math.Sqrt(n1);

                     Console.WriteLine(String.Format("\n\nA raiz quadrada do número é: {0:0.00}" + result));

                    break;
                default:
                    Console.WriteLine("Esta opção não existe. Tente novamente!");
                    break;

            }

        }

    }

}