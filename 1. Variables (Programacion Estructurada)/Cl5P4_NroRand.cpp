// Generacion de numeros al azar, comprendido entre
// dos numeros dados.
#include<iostream>
using namespace std;
int main()
{  int i, min, max, n;
   cout << "\n\n\tDigite cuantos numeros al azar quiere generar ";
   cin >> n;
   cout << "\n\nDigite cual es el menor numero aceptable "; cin >> min;
   cout << "\n\nDigite cual es el mayor numero aceptable "; cin >> max;
   srand( time(NULL) );
   cout << "\n\nNumeros al azar\n";
   cout << "\n" << rand()%(max - min) + min;
   for ( i = 1; i < n; i++ )
       if ( i%10 )
          cout << ", " << rand()%(max - min) + min;
       else
          cout << "\n" << rand()%(max - min) + min;
   cout << "\n\n";
   system ( "pause" );
}
