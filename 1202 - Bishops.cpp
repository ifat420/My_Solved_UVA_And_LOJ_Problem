// ALLAH IS ALMIGHTY //
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.sync_with_stdio( false );
    int t, cs=0;
    cin >> t;
    while( t-- ){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        x1 = abs( x1-x2 );
        y1 = abs( y1-y2 );
        if( x1==y1 )printf( "Case %d: 1\n",++cs );
        else if( x1%2==y1%2 )printf( "Case %d: 2\n",++cs );
        else printf( "Case %d: impossible\n",++cs );
    }return 0;
}
