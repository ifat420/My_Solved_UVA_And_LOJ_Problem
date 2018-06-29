#include<bits/stdc++.h>

using namespace std;

int main()
{
    double h, m, ans, hd, md, tans;
    while( scanf( "%lf:%lf",&h,&m ) == 2 ){
        if( h==0 and m==0 )break;
       hd = ( ( h*30 )+( .5*m ) );
       md = ( m*6 );
       tans = abs( hd - md );
       ans = min( tans,( 360-tans ) );
       printf("%.3lf\n",ans);
    }return 0;
}
