// ALLAH IS ALMIGHTY
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    //freopen( "output.txt","w",stdout );
    cin.sync_with_stdio( false );
    ll t, cs=0;
    cin >> t;
    while( t-- ){
        ll n, ev = 2, od = 0;
        cin >> n;
        if( n%2==0 ){
            while( true ){
                if(n%ev==0)
                    od = n / ev;
                if( od%2!=0 )break;
                else ev+=2;
            }
            printf( "Case %lld: %lld %lld\n",++cs,od,ev );
        }else{
            printf( "Case %lld: Impossible\n",++cs);
        }
    }return 0;

}
