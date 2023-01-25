using Exercicios;

namespace App
{
    public class Program
    {

        public static void Main(string[] args)
        {

            int opcao;

            do {

                opcao = menu();

                switch (opcao)
                {

                    case 1:

                        Exercicio1.executar();

                        break;
                    case 2:

                        Exercicio2.executar();

                        break;
                    case 3:

                        Exercicio3.executar();

                        break;
                    case 4:

                        break;
                    case 5:

                        break;
                    case 6:

                        break;
                    case 7:

                        break;
                    case 8:

                        break;
                    case 9:

                        break;
                    case 10:

                        break;
                    case 11:

                        break;
                    case 12:

                        break;
                    case 0:

                        Console.WriteLine("FINALIZANDO...");

                        break;
                    default:

                        Console.WriteLine("ERRO DE INPUT");

                        break;
                }

                Console.Clear();

            } while (opcao != 0);

        }

        public static int menu()
        {
            Console.WriteLine("\n\n\n-----Lista Exercícios-----");
            for (int i = 1; i <= 12; i++)
            {

                Console.WriteLine(i + ") Exercício " + i);

            }
            Console.WriteLine("0) SAIR");
            Console.WriteLine("--------------------------");
            Console.Write("Opção: ");

            return Convert.ToInt32(Console.ReadLine());

        }

    }

}