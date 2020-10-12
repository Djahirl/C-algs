// ;J

#include <iostream>
using namespace std;

int
main ()
{
  int op, n1, n2, somn1n2 = 0, prodn1n2;	// op = operaC'C#o;
  double median1n2;		// double para ter decimal, ex 2,5.
  cout <<
    "Programa para calculos predeterminados C  partir de 2 valores inteiros."
    << endl;
  cout << "Digite o menor número: ";
  cin >> n1;
  cout << "Digite o segundo número: ";
  cin >> n2;
  cout << "Escolha a operacao pelo número: " << endl;
  cout << "'1' para soma dos pares desde " << n1 << " C  " << n2 << endl <<";";
  cout << "'2' para média aritmética entre os mesmos, ou;" << endl;
  cout << "'3' para soma e produto destes números." << endl;
  cin >> op;
  switch (op)
    {
    case 1:
      for (int n = n1; n <= n2; n++)
	{
	 if (n % 2 == 0)
	 somn1n2 = somn1n2 + n;
	}
      cout << "A soma dos pares entre " << n1 << " e " << n2 << " é " <<somn1n2 << ".";
     break;
    case 2:
      median1n2 = (n1 + n2) / 2;
      cout << "Média = " << median1n2 << ".";
     break;
    case 3:
      somn1n2 = n1 + n2;
      cout << "Soma = " << somn1n2 << "." << endl;
      prodn1n2 = n1 * n2;
      cout << "Produto = " << prodn1n2 << ".";
     break;
    }
  return 0;			// (ainda não sei por que disso direito.)
}

// fontes: http://www.cplusplus.com/doc/tutorial/basic_io/
// IDE: https://www.onlinegdb.com/
// ;J ou Djahirl 12/10/2020
