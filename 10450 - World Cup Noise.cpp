#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll dp[100];

int main()
{
    ll n, t;
    dp[0] = 0;
    dp[1] = 2;
    dp[2] = 3;
    for( ll i=3;i<=51;i++ )
        dp[i] = dp[i-1]+dp[i-2];
    scanf( "%lld",&t );
    for( ll T=1;T<=t;T++ ){
        scanf( "%lld",&n );
        printf( "Scenario #%lld:\n%lld\n\n",T,dp[n] );
    }return 0;
}
