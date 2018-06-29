#include <bits/stdc++.h>
using namespace std;

long long dp[500][500];

long long nCr( long long n,long long r ){
    if( r==1 )return n;
    if( n==r )return 1;
    if( dp[n][r] != -1 )return dp[n][r];
    else
        return dp[n][r] = nCr( n-1,r ) + nCr( n-1,r-1 );
}

int main()
{
    long long n, m;
    memset( dp,-1,sizeof( dp ) );
    while( scanf("%lld %lld",&n,&m) and n and m ){
        printf( "%lld things taken %lld at a time is %lld exactly.\n",n,m,nCr( n,m ) );
    }return 0;
}
