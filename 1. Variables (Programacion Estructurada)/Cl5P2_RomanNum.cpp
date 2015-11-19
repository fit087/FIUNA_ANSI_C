/* Programa que lee un numero entero y positivo n,
	menor que 4000, e imprime el mismo numero en su
	representacion como numero romano.		*/
#include<iostream>
using namespace std;
int lect( );
void representar( int digito, char c1, char c2 );
int main()
{  int i, n, m, d;
   n = lect();
   while ( n > 0 && n < 4000 )
   {   cout << "\n\n\n\tLa representacion de " << n << " en nro. romano es: ";
	   m = n;
	   d = m/1000;
	   for ( i = 0; i < d; i++ ) cout << "M";
	   m = m%1000;
	   d = m/100;
	   if ( d == 9 ) cout << "CM";
	   else representar( d, 'C', 'D' );
	   m = m%100;
	   d = m/10;
	   if ( d == 9 ) cout << "XC";
	   else representar( d, 'X', 'L' );
	   d = m%10;
	   if ( d == 9 ) cout << "IX";
	   else representar( d, 'I', 'V' );
	   cout << "\n\n\n\t\t";
	   system ( "pause" );
   	n = lect();   }
	return 0;   
}
int lect( )
{	float nf;
 	do {
   	    system ( "cls" );
  		cout << "\n\n\tRepresentacion de un numero arabigo como numero romano";   
  		cout << "\n\n\n\n  Digite un numero >0 y < 4000, 0 para finalizar ";
  		cin >> nf;
    }	while ( nf != (int)nf || nf < 0 || nf >= 4000 );
    return (int)nf;
}
void representar( int digito, char c1, char c2 )
{   int i;
    if ( digito < 4 )
	    for ( i = 0; i < digito; i++ ) cout << c1;
    if ( digito == 4 ) cout << c1 << c2;
    if ( digito > 4 ) cout << c2;
    for ( i = 0; i < digito - 5; i++ ) cout << c1;
}
