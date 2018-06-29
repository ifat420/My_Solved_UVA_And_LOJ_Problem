#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, arr[1010], n, m, i, j, hi, low, mid, sum, T;
    scanf( "%d",&t );
    for( T=1;T<=t;T++ ){
        scanf( "%d%d",&n,&m );
        hi = low = 0;
        for( i=0;i<n;i++ ){
            scanf( "%d",&arr[i] );
            hi += arr[i];
        }
       while( hi >= low ){
            mid = ( hi+low ) >> 1;
            for( i=1, j=0; i<=m; i++ ){
                sum = 0;
                for( ;j<n;j++ ){
                    if( sum+arr[j] > mid )break;
                    sum += arr[j];
                }
            }
            if( j<n )low = mid+1;
            else hi = mid - 1;
       }
       printf( "Case %d: %d\n",T,low );
    }
}
