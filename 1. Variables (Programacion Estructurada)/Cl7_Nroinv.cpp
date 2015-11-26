// Programa que lee un numero entero y positivo y lo 
// imprime con sus cifras en orden inverso
#include<iostream>
#include<math.h>
using namespace std;
int main()
{  int nro, nroinv, m, n, d, e;
   do {
      cout << "\n\n\tDigite un numero entero mayor que 10 ";
      cin >> nro;
   }  while( nro <= 10 );
   m = nro;
   d = 1;  while ( d < m ) d *= 10;
   d /= 10;
   e = 1;
   nroinv = 0;
   while ( d >= 1 )
   {  n = m/d;
      nroinv += n*e;
      m = m%d;
      d /= 10;
      e *= 10;  }
   cout << "\nEl numero con sus cifras en orden inverso es " << nroinv << "\n";
   system("pause");
}
