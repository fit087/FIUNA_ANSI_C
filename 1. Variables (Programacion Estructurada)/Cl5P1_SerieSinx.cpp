/* Programa que lee un numero x, de punto flotante, que es la
   medida, en radianes, de un arco. Luego, obtiene y = sin(x),
   mediante la serie:
     sin(x) = sen(x) = x - x^3/3! + x^5/5! - x^7/7! + ...
   La suma realiza hasta que el primer termino que se deshecha
   tiene valor absoluto menor que un numero dado con el nombre
   de error en la directiva define.   */
#include<iostream>
#define pi 3.14159
#define error 0.000001
using namespace std;
int main()
{  int i;   float x, senox, term, sign, potx, deno;
   cout << "Digite un arco, en radianes (entre 0 y pi) ";   cin >> x;
   while ( x < 0 || x >= pi )
   {  cout << "\n\n\tEl valor del arco debe estar comprendido entre 0 y pi";
      cout << "\n\n\tDigite nuevamente ";
      cin >> x;   }
   senox = 0;         sign = 1;
   deno = 1;          potx = x;
   term = potx/deno;        i = 0;
   while ( term > error )
   {  senox += sign*term;   sign = -sign;            
      potx = potx*x*x;      deno = deno*(i + 2)*(i + 3);
      term = potx/deno;     i += 2;   } 
   cout << "\n\n\tsin(" << x << ") = " << senox;
   cout << "\n\n\t";   system("pause");   return 0;
}
