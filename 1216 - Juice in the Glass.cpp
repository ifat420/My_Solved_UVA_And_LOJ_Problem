// ALLAH IS ALMIGHTY //
#include <bits/stdc++.h>
using namespace std;

#define pi acos(-1)

int main()
{
    cin.sync_with_stdio( false );
    int t,cs=0;
    cin >> t;
    while( t-- ){
        double r1, r2, h, p, R;
        cin >> r1 >> r2 >> h >> p;
        R = r2+(r1-r2)*(p/h);
        double V = 1/3.0*pi*p*(R*R+R*r2+r2*r2);
        printf( "Case %d: %lf\n",++cs,V );
    }return 0;
}
