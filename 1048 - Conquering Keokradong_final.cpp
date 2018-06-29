#include <bits/stdc++.h>
using namespace std;

int campSite[1010], numCampSite, Night;

bool binarySearch( int expNum ){
    int minTot = 0, part = 0;
    for( int i=0; i<numCampSite; i++ ){
        minTot += campSite[i];
        if( minTot > expNum ){
            part++;
            minTot = campSite[i];
        }
    }return Night >= part;
}

int main()
{
    freopen( "input.txt","r",stdin );
    int t;
    scanf( "%d",&t );
    for( int T=1; T <= t; T++ ){
        scanf( "%d %d", &numCampSite, &Night );
        numCampSite++;
        Night++;
        int high = 0, low=0, mid, expectedAns;
        for( int i=0; i < numCampSite; i++ ){
            scanf( "%d",&campSite[i] );
            high += campSite[i];
        }
        expectedAns = high;
        while ( high >= low ){
            mid = ( high + low )/2;
            if( binarySearch( mid ) ){
                expectedAns = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        printf( "Case %d: %d\n",T,mid );
        for( int i=0, j = 0; i<Night; i++ ){
            int sum = 0;
            for( ;j<numCampSite; j++ ){
                if( sum+campSite[i] > mid )break;
                sum += campSite[i];
            }printf( "%d\n",sum );
        }
    }return 0;

}
