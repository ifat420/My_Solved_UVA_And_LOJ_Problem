// ALLAH IS ALMIGHTY //
#include <bits/stdc++.h>
using namespace std;

vector<int> arr;

int main()
{
    //freopen( "output.txt","w",stdout );
    cin.sync_with_stdio( false );
    int t, cs=0;
    cin >> t;
    while( t-- ){
        int n, m, s, x;
        char c;
        cin >> n >> m;
        arr.clear();
        arr.assign( n,0 );
        for( int i=0;i<n;i++ ){
            cin >> arr[i];
        }
        while( m-- ){
            cin >> c;
            if( c=='S' ){
                cin >> s;
                for( int i=0;i<n;i++ )arr[i]+=s;
            }else if( c=='M' ){
                cin >> s;
                for( int i=0;i<n;i++ )arr[i]*=s;
            }else if( c=='D' ){
                cin >> s;
                for( int i=0;i<n;i++ )arr[i]/=s;
            }else if( c=='R' ){
                reverse( arr.begin(),arr.end() );
            }else{
                cin >> s >> x;
                swap( arr[s],arr[x] );
            }
        }
        printf( "Case %d:\n",++cs );
        for( int i=0;i<n;i++ ){
            printf( "%d",arr[i]);
            if( i!=n-1 )printf( " " );
        }
        printf( "\n" );
    }return 0;

}
