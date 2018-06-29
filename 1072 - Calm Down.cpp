// ALLAH IS ALMIGHTY
#include <bits/stdc++.h>
using namespace std;

#define pi 3.14159265

int main()
{
    cin.sync_with_stdio( false );
    int t, cs=0;
    cin >> t;
    while( t-- ){
        double r, n;
        cin >> r >> n;
        printf( "Case %d: %lf\n",++cs, r*sin(pi/n)/(1+sin(pi/n)) );
    }return 0;
}
