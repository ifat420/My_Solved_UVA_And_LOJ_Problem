// ALLAH IS ALMIGHTY //
#include <bits/stdc++.h>
using namespace std;

const double EPS = 1e-9;

int main()
{
    cin.sync_with_stdio( false );
    int t,cs=0;
    cin >> t;
    while( t-- ){
        double r1, r2, r3, a, b, c, area, s, A, B, C, result;
        cin >> r1 >> r2 >> r3;
        a = r1+r2;
        c = r1+r3;
        b = r2+r3;

        s = (a+b+c)*0.5;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        A = acos( ( a*a+c*c-b*b ) /( 2.0*a*c ) );
        B = acos( ( a*a+b*b-c*c )  /( 2.0*a*b ) );
        C = acos( ( b*b+c*c-a*a ) /( 2.0*b*c ) );
        result = area - A*r1*r1*0.5-B*r2*r2*0.5- C*r3*r3*0.5;
        printf( "Case %d: %.8lf\n",++cs,result+EPS );

    }
}
