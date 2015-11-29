/* Prog.: PrConjetGoldb.cpp
   Fecha: 16/08/07 modif. 08-03-2012
   Obs. : Verificar la conjetura de Goldbach.
        "todo número par, mayor que dos, puede
         escribirse como las suma de dos
         números primos.  */
#include<iostream>
using namespace std;
int esprimo( int x );
int main()
{  int n, p, q;
   do
   {  do {
         cout << "\n\n\tDigite un numero entero par mayor que dos: ";
         cin >> n;
         if ( !n ) return 0;
      }	 while ( n <= 2 || n%2 );
      p = 2;
      q = n - p;
      while ( !esprimo( q ) )
      {  p++;
         while ( !esprimo ( p ) ) p++;
         q = n - p;
      }
      cout << "\n\t\t" << n << " = " << p << " + " << q << "\n";
   }  while ( n > 2 );
}
int esprimo( int x )
{  if ( x == 2 ) return 1;
   int d = 2;
   while ( x%d ) d++;
   return d == x ? 1 : 0;
}
