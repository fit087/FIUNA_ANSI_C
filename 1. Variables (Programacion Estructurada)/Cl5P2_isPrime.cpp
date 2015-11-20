// Programa que verifica si un numero es primo
#include<iostream>
using namespace std;
int main()
{   int r, d, nro;
    cout << "\n\tDigite un numero ";
    cin >> nro;
    cout << "\n\tEl numero leido es " << nro;
    d = 2; 
    while ( d < nro )
    {     r = nro%d;
          if ( r == 0 ) break;
          d = d + 1;    }
    if ( d < nro )
    {  cout << "\n\nEl nro dado no es primo\n";
       cout << "\n\nEs divisible por " << d << "\n\n";  }
    else cout << "\n\nEl nro dado es primo\n\n";
    system("pause");
}
