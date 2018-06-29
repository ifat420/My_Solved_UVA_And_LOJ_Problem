// Allah is ALMIGHTY //
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.sync_with_stdio( false );
    int t, cs=0;
    cin >> t;
    while( t-- ){
        int x1, y1, z1, x2, y2, z2, x, y, z, X, Y, Z, n;
        cin >> n;
        x = y = z = 0;
        X = Y = Z = 1010;
        printf( "Case %d: ",++cs );
        for( int i=0;i<n;i++ ){
            cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
            x = max( x1,x );
            y = max( y1,y );
            z = max( z1,z );
            X = min( x2,X );
            Y = min( y2,Y );
            Z = min( z2,Z );
        }
        if( X>x and Y>y and Z>z ){
            printf( "%d\n",(X-x)*(Y-y)*(Z-z) );
        }else
            printf( "0\n" );
    }return 0;

}
