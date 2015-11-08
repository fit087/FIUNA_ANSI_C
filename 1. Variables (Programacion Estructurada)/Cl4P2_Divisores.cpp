// Programa que permite determinar los divisores de
// de un numero entero
#include<iostream>
#include<math.h>
using namespace std;
int main()
{   int nro, d;
    cout << "\n\n\tDigite el numero ";
    cin >> nro;
    while ( nro <= 0 || nro >= 20000000 )
    {   cout << "\nEl nro debe ser > 0 y < 20000000 ";
        cout << "\n\tDigite nuevamente ";
        cin >> nro;  }
    cout << "\n\nDivisores de " << nro << " = { ";
    for ( d = 1; d < nro; d++ )
    {   if ( nro%d == 0 )
           cout << d << ", ";  }
    cout << nro << " }\n\n";
    system ( "pause" );
}
     
