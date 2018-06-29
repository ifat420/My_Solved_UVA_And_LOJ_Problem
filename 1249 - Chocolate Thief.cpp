// ALLAH IS ALMIGHTY //
#include <bits/stdc++.h>
using namespace std;

pair<int,string> p[110];

int main()
{
    cin.sync_with_stdio( false );
    int t,cs=0;
    cin >> t;
    while( t-- ){
        int n, a, b, c;
        cin >> n;
        for( int i=0;i<n;i++ ){
            cin >> p[i].second;
            cin >> a >> b >> c;
            p[i].first = a*b*c;

        }
        sort( p,p+n );
        if( p[0].first==p[n-1].first )printf( "Case %d: no thief\n",++cs );
        else{
            printf( "Case %d: %s took chocolate from %s\n",++cs,p[n-1].second.data(),p[0].second.data() );
        }

    }
}
