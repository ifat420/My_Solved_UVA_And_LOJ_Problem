#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;

    while( scanf( "%lld",&n ) ){
        printf("%lld\n",( ( n*n )*( ( n+1 )*( n+1 ) ) )/4 );
    }return 0;
}
