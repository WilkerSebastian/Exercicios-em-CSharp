using System.Globalization;

namespace Exercicios
{

    public class Exercicio4
    {

        public static void executar()
        {

            double  aumento, novoSalario;

            Console.Write("\n\n\n Informe o valor do seu salário: ");
            double salario = Convert.ToDouble(Console.ReadLine());

            Console.Write("\n\n\n | CÓDIGO   CARGO      |");
            Console.Write("\n | 1 ------ Escrituário|");
            Console.Write("\n | 2 ------ Secretário |");
            Console.Write("\n | 3 ------ Caixa      |");
            Console.Write("\n | 4 ------ Gerente    |");
            Console.Write("\n | 5 ------ Diretor    |");
            Console.Write("\n Agora, digite uma das opções do menu: ");
            int opcao = Convert.ToInt32(Console.ReadLine());

            switch (opcao) {
                
                case 1:

                    aumento = salario * 0.5;

                    novoSalario = salario + aumento;

                    Console.Write("\n- Cargo: Escrituário");
                    Console.Write("\n- Aumento: R$ " + aumento.ToString("0.00", CultureInfo.InvariantCulture));
                    Console.Write("\n- Novo salário: " + novoSalario.ToString("0.00", CultureInfo.InvariantCulture));

                break;
                case 2:

                    aumento = salario * 0.35;

                    novoSalario = salario + aumento;

                    Console.Write("\n- Cargo: Escrituário");
                    Console.Write("\n- Aumento: R$ " + aumento.ToString("0.00", CultureInfo.InvariantCulture));
                    Console.Write("\n- Novo salário: " + novoSalario.ToString("0.00", CultureInfo.InvariantCulture));

                break;
                case 3:

                    aumento = salario * 0.2;

                    novoSalario = salario + aumento;

                    Console.Write("\n- Cargo: Escrituário");
                    Console.Write("\n- Aumento: R$ " + aumento.ToString("0.00", CultureInfo.InvariantCulture));
                    Console.Write("\n- Novo salário: " + novoSalario.ToString("0.00", CultureInfo.InvariantCulture));

                break;
                case 4:

                    aumento = salario * 0.1;

                    novoSalario = salario + aumento;

                    Console.Write("\n- Cargo: Escrituário");
                    Console.Write("\n- Aumento: R$ " + aumento.ToString("0.00", CultureInfo.InvariantCulture));
                    Console.Write("\n- Novo salário: " + novoSalario.ToString("0.00", CultureInfo.InvariantCulture));

                break;
                case 5:

                    Console.Write("\n- Cargo: Escrituário");
                    Console.Write("\n- Aumento: R$ 0");
                    Console.Write("\n- Novo salário: " + salario.ToString("0.00", CultureInfo.InvariantCulture));

                break;
                default:

                    Console.WriteLine("Opção inválida! Tente novamente");

                break;
            }

        }

    }

}