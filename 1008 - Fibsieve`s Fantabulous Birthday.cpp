#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, cs=0, row, i, j;
    scanf( "%lld",&t );
    while( t-- ){
        scanf( "%lld",&n );
        long long row = ceil( sqrt( n ) );
        long long mid = row*row-row+1;
        if( row%2==1 ){
            if( n < mid ){
                i = row;
                j = row-mid+n;
            }else{
                j = row;
                i = row-n+mid;
            }
        } else {
            if( n<mid ){
                i = row -mid+n;
                j = row;
            }else{
                j = row-n+mid;
                i = row;
            }
        }
        printf( "Case %lld: %lld %lld\n",++cs,i,j );
    }

}
