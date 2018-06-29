//ALLAH IS ALMITY
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen( "input.txt","r",stdin );
    cin.sync_with_stdio( false );
    int t, cs=0;
    cin >> t;
    while( t-- ){
        int x1, y1, x2, y2, cx, cy, m;
        cin >> x1 >> y1 >> x2 >> y2;
        cin >> m;
        printf( "Case %d:\n",++cs );
        while( m-- ){
            cin >> cx >> cy;
            if( x1<=cx and cx<=x2 and y1<=cy and cy<=y2 ){
                printf( "Yes\n" );
            }else
                printf( "No\n" );
        }
    }return 0;
}
