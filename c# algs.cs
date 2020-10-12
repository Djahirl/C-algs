using System;

public class Processo
{
   public static void Main()
   {
    	/*
	À partir do problema proposto:
	
	Elaborar um  programa em  C++ que,  inicialmente,  leia  dois números inteiros.
		SÓ QUE AQUI FOI FEITO EM C#!
		Em  seguida,  o programa apresenta um menu de opções (switch...case) que permite escolher os seguintes cálculos,
		que devem ser mostrados na tela:
	1. A soma dos números pares contidos no intervalo formado por esses  números.
		(por  exemplo,  se  o  usuário  digitar  1  e  9  para  início  e  fim  de  intervalo,  o  resultado mostrado na tela será 20, que é a soma de 2+4+6+8);
	2. A média aritmética entre esses números; 
	3. A soma e o produto desses números. 
	
	* Dicas para a soma dos números pares: c
		-Crie um laço de repetição com o comando for, 
			cuja variável de controle está vinculada ao início e fim do intervalo determinado pelo usuário;
		-Para acumular a soma, crie uma variável soma que dentro do laço de repetição some apenas os números pares.
	
	fontes: 
	https://docs.microsoft.com/pt-br/dotnet/csharp/language-reference/keywords/if-else
	https://docs.microsoft.com/pt-br/dotnet/csharp/language-reference/keywords/switch

	;J 12.10.20
	*/
	
    int op, n1, n2, somn1n2 = 0, prodn1n2;
    double median1n2;
    Console.WriteLine("Programa para cálculos predeterminados à partid de 2 valores inteiros."); // claro que nessa versão simples o n1 < n2, blz? senão buga.
    Console.Write ("Digite o primeiro número: ");
    n1 = int.Parse(Console.ReadLine());
    Console.Write ("Digite o segundo número: ");
    n2 = int.Parse(Console.ReadLine());
    Console.WriteLine ("Escolha a opção:");
    Console.WriteLine ($"1 para soma dos pares desde {n1} a {n2};");
    Console.WriteLine ("2 para media aritmética entre os mesmos, ou;");
    Console.WriteLine ("3 para soma e produto destes números.");
    op = int.Parse(Console.ReadLine());
       switch (op)
      {
       case 1:
            for (int i = n1; i <= n2; i++) 
                if (i % 2 == 0) 
                {
                somn1n2 = somn1n2 +i;
            	//Console.WriteLine(somn1n2); // "descomente", se quiser exibir os numeros somados.
                }
                Console.WriteLine ($"A soma dos pares entre {n1} e {n2} é = {somn1n2}"); 
            break;
       case 2:
            median1n2 = (n1+n2)/2;
            Console.WriteLine($"Média = {median1n2}.");
            break;
       case 3:
            somn1n2 = n1 + n2;
            Console.WriteLine($"Soma = {somn1n2}.");
            prodn1n2 = n1 * n2;
            Console.WriteLine($"produto = {prodn1n2}");
            break;
        default:
            Console.WriteLine("stonks"); // isso eu não saquei direito o porquê, mas n faz diferença.
            break;
      }
   }
}
