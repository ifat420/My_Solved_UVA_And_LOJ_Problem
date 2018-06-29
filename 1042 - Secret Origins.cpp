#include <bits/stdc++.h>
using namespace std;

#define ll long long

int fun( string a ){
    int ans = 1;
    for( int i=1;i<a.size();i++ ){
        if( a[i]=='0' )
            ans *=2;
        else
            ans = ( ans*2+1 );
    }return ans;
}

int main()
{
    cin.sync_with_stdio( false );
    int t, cs=0;
    cin >> t;
    while( t-- ){
        int n;
        cin >> n;
        string str = "";
        while( n ){
            if( n&1 )
                str.insert( 0,"1" );
            else
                str.insert( 0,"0" );
            n/=2;
        }
        if( !next_permutation( str.begin(),str.end() ) ){
            str.insert( 0,"10" );
            str.erase( str.size()-1,1 );
        }
        printf( "Case %d: %d\n",++cs,fun( str ) );
    }

}
