// Programa que permite resolver triangulos oblicuangulos
#include<iostream>
#include<math.h>
using namespace std;
int main()
{   char caso; float a, b, c, A, B, C, pi = atan(1.)*4;
    cout << "\n\n\t\tPrograma que resuelve triángulos oblicuangulos\n\n";
    cout << "\tCaso 1: Conocidos dos lados y el angulo comprendido\n";
    cout << "\tCaso 2: Conocidos un lado y los angulos contiguos\n";
    cout << "\tCaso 3: Conocidos los tres lados\n";
    cout << "\tCaso 4: Conocidos dos lados y el angulo opuesto a uno de ellos\n";
    cout << "\nDigite el caso a considerar "; cin >> caso;
    switch ( caso )
    {  case '1':
            cout << "\n\tDigite la longitud del lado a   : "; cin >> a;
            cout << "\tDigite la longitud del lado b   : "; cin >> b;
            cout << "\tDigite el valor del angulo C(gr): "; cin >> C;
            c = sqrt(a*a + b*b - 2*a*b*cos(C*pi/180));
            B = asin(b*sin(C*pi/180)/c)*180/pi;
            A = 180 - ( B + C );
            cout << "\n\tEl lado c mide  : " << c;
            cout << "\n\tEl angulo B mide: " << B;
            cout << "\n\tEl angulo A mide: " << A;
            break;
       case '2':
            cout << "\n\tDigite la longitud del lado a   : "; cin >> a;
            cout << "\tDigite el valor del angulo B(gr): "; cin >> B;
            cout << "\tDigite el valor del angulo C(gr): "; cin >> C;
            A = 180 - ( B + C );
            b = a*sin(B*pi/180)/sin(A*pi/180);
            c = a*sin(C*pi/180)/sin(A*pi/180);
            cout << "\n\tEl angulo A mide: " << A;
            cout << "\n\tEl lado b mide  : " << b;
            cout << "\n\tEl lado c mide  : " << c;
            break;
       case '3':
            cout << "\n\tDigite la longitud del lado a  : "; cin >> a;
            cout << "\tDigite la longitud del lado b  : "; cin >> b;
            cout << "\tDigite la longitud del lado c  : "; cin >> c;
            A = acos((b*b + c*c - a*a)/2/b/c)*180/pi;
            B = acos((a*a + c*c - b*b)/2/a/c)*180/pi;
            C = acos((b*b + a*a - c*c)/2/a/b)*180/pi;
            cout << "\n\tEl angulo A mide: " << A;
            cout << "\n\tEl angulo B mide: " << B;
            cout << "\n\tEl angulo C mide: " << C;
            break;
       case '4':
            cout << "\n\tDigite la longitud del lado a   : "; cin >> a;
            cout << "\tDigite la longitud del lado b   : "; cin >> b;
            cout << "\tDigite el valor del angulo A(gr): "; cin >> A;
            if ( A == 90 )
            {  if ( a > b )
               {  c = sqrt(a*a - b*b);
                  B = atan(b/a)*180/pi;
                  C = 90 - B;
                  cout << "\n\tEl lado c mide  : " << c;
                  cout << "\n\tEl angulo B mide: " << B;
                  cout << "\n\tEl angulo C mide: " << C;  }
               else
                  cout << "No tiene solución";   }
            else
            {  if ( a < b*sin(A/180*pi) )
                  cout << "No tiene solución";
               else
               {  if ( a == b*sin(A/180*pi) )
                  {  if ( A < 90 )  
                     {  B = 90;
                        c = sqrt( b*b - a*a );
                        C = 90 - A;
                        cout << "\n\tEl angulo B mide: " << B;
                        cout << "\n\tEl lado b mide  : " << b;
                        cout << "\n\tEl lado c mide  : " << c;  }
                     else
                        cout << "No tiene solución";  }
                  else
                  {  if ( A < 90 )
                     {  if ( a < b )
                        {  B = asin(b/a*sin(A/180*pi));
                           b = a/sin(A/180*pi)*sin(B);
                           B = B/pi*180;
                           C = 180 - A - B;
                           c = a/sin(A/180*pi)*sin(C/180*pi);
                           cout << "\n\tEl angulo B mide: " << B;
                           cout << "\n\tEl angulo C mide: " << C;
                           cout << "\n\tEl lado c mide  : " << c;
                           B = 180 - B;
                           C = 180 - A - B;
                           c = a/sin(A/180*pi)*sin(C/180*pi);
                           cout << "\n\n\tEl angulo B mide: " << B;
                           cout << "\n\tEl angulo C mide: " << C;
                           cout << "\n\tEl lado c mide  : " << c;  }
                        else
                        {  B = asin(b/a*sin(A/180*pi)*a);
                           b = a/sin(A/180*pi)*sin(B);
                           B = B/180*pi;
                           c = a/sin(A/180*pi)*sin(C/180*pi);
                           cout << "\n\tEl angulo B mide: " << B;
                           cout << "\n\tEl lado b mide  : " << b;
                           cout << "\n\tEl lado c mide  : " << c;  }  }
                     else
                     {  if ( a > b )
                        {  B = asin(b/a*sin(A/180*pi))/pi*180;
                           C = 180 - A - B;
                           c = a/sin(A/180*pi)*sin(C/180*pi);
                           cout << "\n\tEl angulo B mide: " << B;
                           cout << "\n\tEl angulo C mide: " << C;
                           cout << "\n\tEl lado c mide  : " << c;  } } } } }
            break;
       default:
            cout << "\nsolo puede digitar 1, 2, 3 o 4";   }
   cout << "\n";
   system("pause");
}
