// Programa que permite determinar la fecha en  que
// cae el domingo de pascuas
#include<iostream>
#include<math.h>
using namespace std;
int main()
{   int anho, A, B, C, D, E, N;
    cout << "\n\n\tDigite el anho ";
    cin >> anho;
    while ( anho <= 0 || anho >= 3000 )
    {   cout << "\nEl anho debe ser > 0 y < 3000 ";
        cout << "\n\tDigite nuevamente ";
        cin >> anho;  }
    A = anho%19;   B = anho%4;   C = anho%7;
    D = (19*A + 24)%30; E = (2*B + 4*C + 6*D + 5)%7;
    N = 22 + D + E;
    if ( N <= 31 )
       cout << "\n\n\t" << N << "-03-" << anho << "\n\n";
    else
    {  N -= 31;
       cout << "\n\n\t" << N << "-04-" << anho << "\n\n";  }
    system ( "pause" );
}
        
