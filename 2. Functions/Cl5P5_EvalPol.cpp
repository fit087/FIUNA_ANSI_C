// Uso de una funcion
#include<iostream>
using namespace std;
float pol( float x );
int main()
{   float x;
    while ( x )
    {   cout << "\n\tDigite un valor de la variable ";
        cin >> x;
        cout << "\n\tEl valor del polinomio es " << pol(x);  }
}
float pol( float x )
{  float y;
   y = x*x - 5*x + 2;
   return y;
}
