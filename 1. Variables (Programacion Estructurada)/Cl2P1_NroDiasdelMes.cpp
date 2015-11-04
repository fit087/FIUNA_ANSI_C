#include<iostream>
using namespace std;
int main()
{  int a, m;
   cout << "\n\tDigite el mes (de 1 a 12) ";
   cin >> m;
   
   if ( m < 1 || m > 12 )
      cout << "\nMes invalido, debe ser de 1 a 12";
   else
      if ( m == 2 )
      {  cout << "\n\tDigite el año ";
         cin >> a;
//         if ( a%4 != 0 )
         if ( a%4 )
            cout << "\nEl mes " << m << " tiene 28 dias";
         else
            if ( a%100 == 0 )
               if ( a%400 == 0 )
                  cout << "\nEl mes " << m << " tiene 29 dias";
               else
                  cout << "\nEl mes " << m << " tiene 28 dias";
            else   
               cout << "\nEl mes " << m << " tiene 29 dias";  }
      else
         if ( m == 4 || m == 6 || m == 9 || m == 11 )
            cout << "\nEl mes " << m << " tiene 30 dias";   
         else
            cout << "\nEl mes " << m << " tiene 31 dias";
   cout << "\n\n";
   system ( "pause");
}
