//ALLAH IS ALMIGHTY
#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    int t, cs=0;
    scanf( "%d",&t );
    while( t-- ){
        ll a[4];
        for( ll i=0;i<3;i++ ){
            scanf( "%lld",&a[i] );
            }
            sort( a,a+3 );
            if( a[0]*a[0]+a[1]*a[1]==a[2]*a[2] )printf( "Case %d: yes\n",++cs );
            else printf( "Case %d: no\n",++cs );
        }return 0;
}
