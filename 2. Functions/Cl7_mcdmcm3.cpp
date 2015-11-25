// Determinar del mcd y mcm de tres numeros ;
#include <iostream>
using namespace std;
int fmcd( int a, int b );
int main()
{   int mcd, mcm, a, b, c;
    cout << "\nDigite tres numero enteros y positivos ";
    cin >> a >> b >> c;
    mcd = fmcd( a, b );
    mcm = a*b/mcd;
    mcd = fmcd( mcd, c );
    mcm = mcm*c/fmcd( mcm, c );
    cout << "\n\nmcd(" << a << ", " << b << ", " << c << " = " << mcd;
    cout << "\n\nmcm(" << a << ", " << b << ", " << c << " = " << mcm;
    cout << "\n\n";
    system( "pause" );
}
int fmcd( int a, int b )
{   int p, q, r;
    if ( a > b )
    {  p = a;  q = b;  }
    else
    {  p = b;  q = a;  }
    r = p%q;
    while ( r )
    {  p = q;  q = r;   r = p%q;  }
    return q;
}
