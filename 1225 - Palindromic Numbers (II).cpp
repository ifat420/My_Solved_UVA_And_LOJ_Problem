// ALLAH IS ALMIGHTY //
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.sync_with_stdio( false );
    int t, cs=0;
    cin >> t;
    while( t-- ){
        string rr, aa;
        cin >> rr;
        aa = rr;
        reverse( rr.begin(),rr.end() );
        if( aa==rr )
            printf( "Case %d: Yes\n",++cs );
        else
            printf( "Case %d: No\n",++cs );
    }
    return 0;
}
