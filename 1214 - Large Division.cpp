// ALLAH IS ALMIGHTY //
#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool is_ok( vector<ll> a,int b ){
    for( int i=a.size()-1;i>=0;i-- ){
        ll cnt = (a[i]%b)*10;
        if( cnt!=0 and i==0 )
            return false;
        if( i!=0 )
            a[i-1]+=cnt;
    }
    return true;
}

int main()
{
    cin.sync_with_stdio( false );
    int t, cs=0;
    cin >> t;
    while( t-- ){
        string aa;
        vector<ll> num;
        int b;
        cin >> aa;
        cin >> b;
        for( int i = aa.size()-1;i>=0;i-- ){
            if( aa[i]!='-' )
                num.push_back( aa[i]-'0' );
        }
         if( is_ok( num,b ) )
            cout << "divisible\n";
         else
            cout << "not divisible\n";
    }
}
