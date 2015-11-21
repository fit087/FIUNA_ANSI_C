/* Elaborar un programa en lenguaje C/C++, que determine los
   números perfectos menores que un numero dado. (Un numero se
   dice perfecto si es igual a la suma de sus divisores, excepto
   el mismo numero) */
#include<iostream>
using namespace std;
int main()
{  int d, sd, n, nro;
   float fnro;
// Lectura y verificacion del dato
   do
   { cout << "\nDigite un numero entero positivo ";
     cin >> fnro;
     nro = (int)fnro;
   } while( nro != fnro || nro < 6  );
// Procesamiento
   for ( n = 6; n < nro; n++ )
   {  sd = 1;
      for ( d = 2; d < n; d++ )
         if ( n%d == 0 ) sd += d;
      if ( sd == n )
         cout << "\nEl numero " << n << " es un numero perfecto";  }
   cout << "\nLa lista anterior incluye todos los numeros perfectos menores que " << n << "\n";
   system( "pause" );
   return 0;
}
