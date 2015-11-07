// Programa que permite imprimir un numero con sus
// digitos en secuencia inversa
#include<iostream>
#include<math.h>
using namespace std;
int main()
{   int nro, coc, resto, nroInv;
    cout << "\n\n\tDigite un numero entero de cuatro dígitos ";
    cin >> nro;
    while ( nro < 1000 || nro >= 10000 )
    {   cout << "\nEl numero debe ser >= 1000 y < 10000 ";
        cout << "\n\tDigite nuevamente ";
        cin >> nro;  }
    nroInv = nro/1000;
    resto = nro%1000;
    coc = resto/100;
    resto %= 100;
    nroInv += coc*10;
    coc = resto/10;
    resto %= 10;
    nroInv += coc*100;
    nroInv += resto*1000;
    cout << "\n\n\tEl nuevo numero es " << nroInv << "\n\n";
    system ( "pause" );
}
        
