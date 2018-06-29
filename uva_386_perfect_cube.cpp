#include<bits/stdc++.h>
using namespace std;

void cubeChecker( int n ){
    int m = n*n*n;
    int a, b, c;
    for( int i=2;i<=200;i++ ){
        a = i*i*i;
        for( int j=i;j<=200;j++ ){
           b = j*j*j;
           for( int k=j;k<=200;k++ ){
             c = k*k*k;
                if( m==a+b+c ){
                    printf( "Cube = %d, Triple = (%d,%d,%d)\n",n,i,j,k );
                }
           }
        }
    }
}

int main()
{
    for( int i=6;i<=200;i++ ){
        cubeChecker(i);
    }return 0;

}
