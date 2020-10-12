/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int
main ()
{
  int op, n1, n2, somn1n2 = 0, prodn1n2;	// op = operaC'C#o;
  double median1n2;		// double para ter decimal, ex 2,5.
  cout <<
    "Programa para cC!lculos predeterminados C  partir de 2 valores inteiros."
    << endl;
  cout << "Digite o menor nC:mero: ";
  cin >> n1;
  cout << "Digite o segundo nC:mero: ";
  cin >> n2;
  cout << "Escolha as opC'C5es: " << endl;
  cout << "'1'para soma dos pares desde " << n1 << " C  " << n2 << endl;
  cout << "'2' para media aritmC)tica entre os mesmos, ou;" << endl;
  cout << "'3' para soma e produto destes nC:meros." << endl;
  cin >> op;
  switch (op)
    {
    case 1:
      for (int n = n1; n <= n2; n++)
	{
	  //cout << n << endl;
	  if (n % 2 == 0)

	    somn1n2 = somn1n2 + n;
	  //cout<<somn1n2; // "descomente", se quiser exibir os numeros somados.
	}
      cout << "A soma dos pares entre " << n1 << " e " << n2 << " C) " <<
	somn1n2 << ".";

      break;
    case 2:
      median1n2 = (n1 + n2) / 2;
      cout << "MC)dia = " << median1n2 << ".";
      break;
    case 3:
      somn1n2 = n1 + n2;
      cout << "Soma = " << somn1n2 << "." << endl;
      prodn1n2 = n1 * n2;
      cout << "Produto = " << prodn1n2 << ".";
      break;
    }
  return 0;			// ainda nC#o sei por que disso direito.
}

// fontes: http://www.cplusplus.com/doc/tutorial/basic_io/
// IDE: https://www.onlinegdb.com/
// ;J ou Djahirl 12/10/2020
