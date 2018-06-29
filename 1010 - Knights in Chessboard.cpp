#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen( "input.txt","r",stdin );

    //freopen( "output.txt","w",stdout );
    int t, n, m, T, ans, x;
    scanf( "%d",&t );
    for( int T=1;T<=t;T++ ){
        scanf( "%d %d",&n,&m );
        int mn = m*n;
        if( m==1 || n==1 )ans = mn;
        else if( m==2 || n==2 ){
            if( m==2 )x = n;
            else x = m;
            if( x%4==1 )ans = x+1;
            else if( x%4==2 )ans = x+2;
            else if( x%4==3 )ans = x+1;
            else if( x%4==0 )ans = x;
        }
        else if(mn%2 == 0) ans = mn/2;
        else ans = (mn/2)+1;
       printf( "Case %d: %d\n",T,ans );
    }
    return 0;
}
