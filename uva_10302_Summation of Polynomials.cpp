#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double n, ans;
    while( scanf( "%Lf",&n)!=EOF ){
        ans = 0;
        for( long long i = 0;i<=n;i++ )
            ans += ( i*i*i );
        printf("%.0Lf\n",ans);
    }return 0;
}
