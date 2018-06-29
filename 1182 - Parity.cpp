// ALLAH IS ALMIGHTY //
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.sync_with_stdio( false );
    int t, cs=0;
    cin >> t;
    while( t-- ){
        int n, ons=0;
        cin >> n;
        while( n ){
            if( n&1 ){
                ons++;
            }
            n/=2;
        }
        if( ons%2 ){
            printf( "Case %d: odd\n",++cs );
        }else
            printf( "Case %d: even\n",++cs );
    }return 0;

}
