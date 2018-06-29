#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, cs=0;
    double r, pi;
    pi = 2*acos( 0.0 );
    scanf( "%d",&t );
    while( t-- ){
        scanf( "%lf",&r );
        printf( "Case %d: %.2lf\n",++cs,( ( (2*r)*(2*r) )- (pi*r*r) ));
    }
    return 0;

}

