// ALLAH IS ALMIGHTY //
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll st[25];
vector <ll> ans;

ll fact( ll n ){
    if( n <=1 )return 1;
    else return n*fact( n-1 );
}

int main()
{
    for( ll i=0;i<=21;i++ ){
        st[i] = fact( i );
    }
    cin.sync_with_stdio( false );
    ll t, cs = 0;
    cin >> t;
    while( t-- ){
        ll n;
        ll p = 0;
        cin >> n;
            ll j = 20;
            while( n ){
                if( j < 0 ){
                    p = 1;
                    break;
                }
                if(n>=st[j]){
                    n -= st[j];
                    ans.push_back( j );
                }
                j--;
            }
        if( !p ){
            printf("Case %lld: ",++cs);
            for( ll i = ans.size()-1; i >=0; i-- ){
                if( i )printf( "%lld!+",ans[i]);
                else printf("%lld!\n",ans[i]);
            }
        }else{
            printf( "Case %lld: impossible\n",++cs );
        }
    ans.clear();
    }return 0;
}
