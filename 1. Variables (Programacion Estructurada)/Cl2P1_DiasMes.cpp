// Programa que da el numero de dias de un mes
#include<iostream>  // permite utilizacion de instrucciones de I/O
using namespace std;
int main()
{   int mes, dia;
    cout << "Digite el mes, en numero ";
    cin >> mes;
    if ( mes < 1 || mes > 12 )
       cout << "Mes invalido";
    else
    {  if ( mes == 2 )
       {   int anho;
           cout << "Digite el año ";
           cin >> anho;
//           if ( anho%4 != 0 )
           if ( anho%4 )
              cout << "28 dias";
           else
              if ( anho%100 == 0 && anho%400 != 0 )
                 cout << "28 dias";
              else
                 cout << "29 dias";    }
       else
           if ( mes == 4 || mes == 6 || mes == 9 || mes == 11 )
              cout << "30 dias";
           else   
              cout << "31 dias";   }
    cout << "\n";
    system("pause");
}
           
