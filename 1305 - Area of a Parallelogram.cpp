// ALLAH IS ALMIGHTY //
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.sync_with_stdio( false );
    int t, cs=0;
    cin >> t;
    while( t-- ){
        int ax, ay, bx, by, cx, cy, dx, dy;
        cin >> ax >> ay >> bx >> by >> cx >> cy;
        dy = ay + (cy-by);
        dx = cx - (bx-ax);
        int q=((ax*by)+(bx*cy)+(cx*dy)+(dx*ay))-((ay*bx)+(by*cx)+(cy*dx)+(dy*ax));
        if(q<0)
            q*=-1;
        int area=0.5*q;
        printf( "Case %d: %d %d %d\n",++cs,dx,dy,area );

    }
}
