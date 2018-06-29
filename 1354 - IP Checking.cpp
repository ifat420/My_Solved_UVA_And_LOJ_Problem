// ALLAH IS ALMIGHTY //
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll fun( string a ){
    ll ans = 0;
    ll i, j;
    for( j=0;j<a.size();j++ ){
        if( a[j]=='1' ){
            i = j+1;
            ans = 1;
            break;
        }
    }
    for( ;i<a.size();i++ ){
        if( a[i]=='0' )
            ans *=2;
        else
            ans = ( ans*2+1 );

    }
    //cout << ans << endl;
    return ans;
}

int main()
{
    //cin.sync_with_stdio( false );
    string c;
    //cin >> c;
    //cout << fun( c );
    int t, cs=0;
    cin >> t;
    while( t-- ){
        vector <ll> ip;
        vector<ll> in(4);
        string aa, pp;
        scanf( "%lld.%lld.%lld.%lld",&in[0],&in[1],&in[2],&in[3] );
        cin >> aa;
        pp = "";
        for( int i=0;i<aa.size();i++ ){
            if( aa[i]=='.' ){
                ip.push_back( fun( pp ) );
                pp = "";
            }
            else{
                pp+=aa[i];
            }
        }
        ip.push_back( fun( pp ) );
        if( ip==in )printf( "Case %d: Yes\n",++cs);
        else printf( "Case %d: No\n",++cs);
        //for( auto i : ip )cout << i << " ";
    }
    return 0;
}
