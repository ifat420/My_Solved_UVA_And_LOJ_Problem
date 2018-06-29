#include <bits/stdc++.h>
using namespace std;


 long long dp[100];

 long long fact( long long n ){
    if( dp[n] != -1 )return dp[n];
    if( n==1 )return 1;
    return dp[n] = n * fact( n-1 );
}

int main()
{
    long long t, n;
    memset( dp,-1,sizeof( dp ) );
    while( scanf("%lld",&n) != EOF ){
      if (n < 0) {
      if (n % 2 == 0) printf("Underflow!\n");
      else printf("Overflow!\n");
      continue;
    }
        if ( n < 8)cout << "Underflow!\n";
        else if( n>13 ) cout << "Overflow!\n";
        else
          cout << fact( n ) << endl;
    }return 0;
}
