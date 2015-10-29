// Programa que resuelve una ecuacion de segundo grado
#include<iostream>  // permite utilizacion de instrucciones de I/O
#include<math.h>
using namespace std;
int main()
{   float a, b, c, d, x1, x2;
    cout << "Digite los coeficientes a, b y c de la ecuacion: ";
    cin >> a >> b >> c;
    cout << "\nLos valores leidos son a = " << a << "; b = " << b << "; c = " << c << "\n";
    if ( a == 0 )
    {  x1 = -c/b;
       cout << "La raiz es " << x1 << "\n";  }
    else
    {  d = b*b - 4*a*c;
       if ( d >= 0 )
       {  d = sqrt(d);
          x1 = ( -b - d)/2/a;
          x2 = ( -b + d)/2/a;
          cout << "x1 = " << x1 << "; x2 = " << x2 << "\n";  }
       else
       {  d = sqrt(-d);
          x1 = (-b - d)/2/a;
          x2 = (-b + d)/2/a;
          cout << "x = " << x1 << " ± i " << x2 << "\n";  }   }
    system("pause");
}
