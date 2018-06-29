#include <bits/stdc++.h>
using namespace std;

int i, v, x, l, c;

int recFun( int n ){
    while( 1 ){
        if( n == 0 )break;
        if( n + 1 == 5 ){
            v++;
            n = 5-n;
        } else if( n+1== 10 ){
            x++;
            n = 10-n;
        } else if( n+10==50 ){
            l++;
            n= 50-n;
        } else if( n+10==100 ){
            c++;
            n = 100-n;
        }

        if( n<4 ){
            i += n/1;
            n = n%1;
        } else if( n<9 ){
            v += n/5;
            n = n%5;
        } else if( n<40 ){
            x += n/10;
            n = n%10;
        } else if( n>40 && n<90 ){
            if( n< 50){
                l += n/40;
                n = n%40;
                x++;
            } else{
            l += n/50;
            n = n%50;
        }
        } else{
            if( n <100 ){
                c += n/90;
                n = n%90;
                x++;
            }
            c += n/100;
            n = n%100;
        }
    }
}

int main()
{
    int n, ti, tv, tx, tl, tc;
    while( scanf( "%d",&n ) && n ){
            i=v=x=l=c=0;
            for( int i=1; i<=n; i++ ){
                recFun(i);
            }

        printf( "%d: %d i, %d v, %d x, %d l, %d c\n",n,i,v,x,l,c );
    }
    return 0;
}
