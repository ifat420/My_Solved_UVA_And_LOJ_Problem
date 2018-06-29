// ALLAH IS ALMIGHTY
#include <bits/stdc++.h>
using namespace std;

#define maxn 1000001

double a[maxn];

int main()
{
    cin.sync_with_stdio( false );
    a[0] = 0;
    for( int i=1;i<maxn;i++ ){
        a[i] = a[i-1] + log(i+0.0);
    }
    int t, n, b, cs=0;
    cin >> t;
    while( t-- ){
        cin >> n >> b;
        printf( "Case %d: %.lf\n",++cs,( floor( a[n]/log( b*1.0 ) )+1 ) );
    }

}
