// ALLAH IS ALMIGHTY
#include <bits/stdc++.h>
using namespace std;

pair<int,int> ans[1010];

bool com( pair<int,int>p1, pair<int,int> p2 ){
    if( p1.first==p2.first )return p1.second > p2.second;
    else return p1.first < p2.first;
}

int main()
{
    cin.sync_with_stdio( false );
    int t, cs=0, dvs=0;
    cin >> t;
    for( int i=1;i<=1000;i++ ){
        dvs = 0;
        for( int j=1;j<=i;j++ ){
            if( i%j==0 )dvs++;
        }
        ans[i].first = dvs;
        ans[i].second = i;
    }
    sort( ans,ans+1001,com );
    while( t-- ){
        int n;
        cin >> n;
        printf( "Case %d: %d\n",++cs,ans[n].second);
    }return 0;

}
