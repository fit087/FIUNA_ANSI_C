/* Programa que lee un numero entero y positivo n,
	e imprime el mismo numero redondeado a la cifra
    de las decenas.		*/
#include<iostream>
using namespace std;
int lect( void );
int main()
{  int n, m, du, dd;
   n = lect();
   while ( n > 0 )
   {   cout << "\n\n\n\tEl numero " << n << " se redondeo a : ";
       if ( n > 10 )
       {   du = n%10;
           if ( du < 5 ) m = n - du;
           else
        	   if ( du > 5 ) m = n + 10 - du;
        	   else
        	   {   dd = ( n%100 - du )/10;
                   if ( dd%2 ) m = n + 10 - du;
                   else m = n - du;  }   }
       else
           cout << n;
       cout << m << "\n\n";
	   system ( "pause" );
   	   n = lect();   }
	return 0;   
}
int lect( void )
{	float nf;
 	do {
   	    system ( "cls" );
  		cout << "\n\n\tRedondeo de un numero leido hasta la cifra de las decenas";   
  		cout << "\n\n\n\n  Digite un numero entero y positivo (0 para finalizar) ";
  		cin >> nf;
    }	while ( nf != (int)nf || nf < 0 );
    return (int)nf;
}
