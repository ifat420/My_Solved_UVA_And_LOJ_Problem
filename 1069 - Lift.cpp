//ALLAH IS ALMIGHTY
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, cs=0;
    scanf( "%d",&t );
    while( t-- ){
        int me, lift;
        scanf( "%d%d",&me,&lift );
        printf( "Case %d: %d\n",++cs, (abs(me-lift)+me)*4 +19 );
    }return 0;
}
